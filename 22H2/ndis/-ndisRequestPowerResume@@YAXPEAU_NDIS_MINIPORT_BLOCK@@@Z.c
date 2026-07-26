/*
 * XREFs of ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A6E7C
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C00A9910 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0015428 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1C00A5B4C (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00A65AC (-ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00A6D3C (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AB170 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     PktMonClientNblDropNdis @ 0x1C00C74F4 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisRequestPowerResume(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v3; // al
  int v4; // ecx
  KIRQL v5; // bp
  struct _NET_BUFFER_LIST *v6; // rsi
  struct _NET_BUFFER_LIST *v7; // r14
  int v8; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _LIST_ENTRY v10; // [rsp+30h] [rbp-18h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  v10 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v4 = *((_DWORD *)SelectiveSuspend + 126);
  v5 = v3;
  if ( (v4 & 0x30) == 0x10 )
  {
    if ( (v4 & 0x400) != 0 )
    {
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 248), 0, 0);
      v6 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 68);
      *((_QWORD *)SelectiveSuspend + 68) = 0LL;
      *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
      v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 70);
      *((_QWORD *)SelectiveSuspend + 70) = 0LL;
      *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
      ndisMoveLinkedList(&v10, (struct _LIST_ENTRY *)((char *)SelectiveSuspend + 584));
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
      if ( v6 )
      {
        if ( byte_1C00E4FD0 && (*((_DWORD *)&a1->PktMonComp + 13) & 2) != 0 )
          PktMonClientNblDropNdis((_DWORD)a1 + 5808, (_DWORD)v6, v8, 2, -1071448017, -536866807);
        Alignment = v6;
        do
        {
          Alignment->Status = -1073676271;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
        ndisMSendNetBufferListsCompleteInternal(a1, v6, 0, 0);
      }
      if ( v7 )
        ndisReplayRecvNbls(a1, v7);
      ndisCancelDequeuedDirectOidRequests(a1, &v10);
    }
    else
    {
      *((_DWORD *)SelectiveSuspend + 126) = v4 | 0x20;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v3);
      ndisRequestDevicePowerD0(a1, NdisMEventD0_SSResume);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v3);
  }
}

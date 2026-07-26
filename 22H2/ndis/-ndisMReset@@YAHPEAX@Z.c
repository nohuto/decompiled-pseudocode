/*
 * XREFs of ?ndisMReset@@YAHPEAX@Z @ 0x1C0070F90
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00191A0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00198DC (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0019C90 (NdisMIndicateStatusEx.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002CEF0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060BB8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070510 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C0070BF4 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     NdisMResetComplete @ 0x1C0072670 (NdisMResetComplete.c)
 */

__int64 __fastcall ndisMReset(_SINGLE_LIST_ENTRY *a1)
{
  _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned int v3; // edi
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  KIRQL v7; // dl
  KIRQL v8; // dl
  __int64 v9; // rcx
  KIRQL v10; // r14
  KIRQL v11; // dl
  KIRQL NewIrql; // [rsp+48h] [rbp-59h] BYREF
  BOOLEAN AddressingReset[15]; // [rsp+49h] [rbp-58h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+58h] [rbp-49h] BYREF

  Next = a1[2].Next;
  NewIrql = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x47u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      Next);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)Next, &NewIrql);
  if ( (HIDWORD(Next[15].Next) & 0x80000) != 0 )
  {
    v3 = -2147418111;
LABEL_28:
    v11 = NewIrql;
    Next[65].Next = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v11);
    goto LABEL_29;
  }
  v4 = (int)Next[15].Next;
  v3 = -1073676275;
  if ( (v4 & 0x40000) != 0 )
    v5 = (v4 & 0x200000) == 0;
  else
    v5 = (unsigned int)ndisMQueueWorkItem((struct _NDIS_MINIPORT_BLOCK *)Next, NdisWorkItemResetRequested, a1) == 0;
  if ( !v5 )
    goto LABEL_28;
  v3 = -2147418111;
  if ( LOBYTE(Next[4].Next) >= 6u || !Next[470].Next[24].Next )
    goto LABEL_28;
  ndisMReferenceOpen((__int64)a1, 8u);
  v6 = (int)Next[15].Next;
  Next[49].Next = a1;
  if ( (v6 & 0x40000) == 0 )
  {
    LODWORD(Next[15].Next) = v6 | 0x100000;
    if ( !BYTE1(Next[11].Next) )
    {
      BYTE1(Next[11].Next) = 1;
      Next[233].Next = (_SINGLE_LIST_ENTRY *)KeGetCurrentThread();
      ndisMProcessDeferred((struct _NDIS_MINIPORT_BLOCK *)Next);
      BYTE1(Next[11].Next) = 0;
      Next[233].Next = 0LL;
    }
    v3 = 259;
    goto LABEL_28;
  }
  AddressingReset[0] = 0;
  LODWORD(Next[15].Next) = v6 | 0x280000;
  ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)Next, 1u);
  while ( LODWORD(Next[228].Next) )
  {
    v7 = NewIrql;
    Next[65].Next = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v7);
    KeStallExecutionProcessor(1u);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)Next, &NewIrql);
  }
  if ( HIDWORD(Next[483].Next) != 1 )
  {
    BYTE2(Next[116].Next) &= ~1u;
    v3 = -1073741637;
    LODWORD(Next[15].Next) &= 0xFFD7FFFF;
    HIDWORD(Next[67].Next) = -1073741637;
    Next[49].Next = 0LL;
    ndisMDereferenceOpenLocked((__int64)a1, 8u);
    goto LABEL_28;
  }
  v8 = NewIrql;
  Next[65].Next = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v8);
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = Next;
  StatusIndication.StatusCode = 1073807364;
  StatusIndication.StatusBuffer = 0LL;
  StatusIndication.StatusBufferSize = 0;
  NdisMIndicateStatusEx(Next, &StatusIndication);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x48u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      Next);
  if ( (byte_1C00E71C1 & 4) != 0 )
    McTemplateK0jqxd_EtwWriteTransfer(
      v9,
      &CallMiniportReset,
      (const GUID *)&Next[501],
      (__int64)&Next[501],
      (char)Next[507].Next,
      (char)Next[503].Next,
      2);
  v10 = KfRaiseIrql(2u);
  v3 = ((__int64 (__fastcall *)(BOOLEAN *, _SINGLE_LIST_ENTRY *))Next[470].Next[24].Next)(AddressingReset, Next[3].Next);
  if ( v10 != 2 )
    KeLowerIrql(v10);
  if ( v3 != 259 )
  {
    NdisMResetComplete(Next, v3, AddressingReset[0]);
    v3 = 259;
  }
LABEL_29:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x49u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      Next);
  return v3;
}

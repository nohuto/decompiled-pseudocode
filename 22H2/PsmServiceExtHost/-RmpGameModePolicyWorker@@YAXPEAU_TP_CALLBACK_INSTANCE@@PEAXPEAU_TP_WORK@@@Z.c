/*
 * XREFs of ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180032290
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z @ 0x1800325A4 (-RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180032648 (-RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x18003FCCC (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004577C (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18006E648 (-RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18006E848 (-RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18006E91C (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006ED18 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x18006F53C (-RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z.c)
 *     ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800706EC (-RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE.c)
 */

void __fastcall RmpGameModePolicyWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  __int64 v5; // r15
  char v6; // al
  struct _EVENT_DATA_DESCRIPTOR **v7; // rdi
  char v8; // cl
  unsigned int v9; // r13d
  DWORD CurrentThreadId; // eax
  unsigned __int8 v11; // r14
  struct _EVENT_DATA_DESCRIPTOR *v12; // rax
  bool v13; // zf
  __int64 v14; // r12
  struct _EVENT_DATA_DESCRIPTOR *v15; // rax
  unsigned int Ptr_high; // r14d
  DWORD v17; // ebx
  bool v18; // r10
  unsigned int v19; // r9d
  struct _EVENT_DATA_DESCRIPTOR **v20; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v21; // rcx
  struct _EVENT_DATA_DESCRIPTOR **v22; // rax
  ULONGLONG Ptr; // rax
  struct _EVENT_DATA_DESCRIPTOR **v24; // r8
  char v25; // al
  struct _EVENT_DATA_DESCRIPTOR **v26; // r8
  struct _EVENT_DATA_DESCRIPTOR ***v27; // rax
  struct _EVENT_DATA_DESCRIPTOR ***v28; // rax
  ULONGLONG v29; // r12
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  unsigned __int8 v32[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct _LIST_ENTRY v33; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+E0h] [rbp-20h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009C980,
      0LL,
      0LL,
      2u,
      &v35);
  v5 = *(_QWORD *)a2;
  v33.Blink = &v33;
  v33.Flink = &v33;
  RtlAcquireSRWLockExclusive(a2 + 18);
  a2[20] = GetCurrentThreadId();
  v6 = *((_BYTE *)a2 + 148);
  if ( (v6 & 1) != 0 )
  {
    v7 = (struct _EVENT_DATA_DESCRIPTOR **)(a2 + 22);
    do
    {
      v8 = v6 & 0xF6 | (2 * (v6 & 4));
      *((_BYTE *)a2 + 148) = v8;
      if ( ((2 * (v6 & 4)) & 8) != 0 )
      {
        v9 = 0;
      }
      else
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        RtlAcquireSRWLockExclusive(v5 + 592);
        *(_DWORD *)(v5 + 648) = GetCurrentThreadId();
        v9 = *(_DWORD *)(v5 + 640);
        *(_DWORD *)(v5 + 648) = 0;
        RtlReleaseSRWLockExclusive(v5 + 592);
        RtlAcquireSRWLockExclusive(a2 + 18);
        CurrentThreadId = GetCurrentThreadId();
        v8 = *((_BYTE *)a2 + 148);
        a2[20] = CurrentThreadId;
      }
      v11 = (v8 & 8) == 0 && a2[34];
      v12 = *v7;
      v32[0] = v11;
      if ( v12 != (struct _EVENT_DATA_DESCRIPTOR *)v7 )
      {
        v18 = v9 != HIDWORD(v12[1].Ptr) || (BYTE2(v12[5].Ptr) & 5) != 1;
        v19 = 0;
        *(_QWORD *)&v35.Size = &v35;
        v20 = v7;
        v35.Ptr = (ULONGLONG)&v35;
        do
        {
          v21 = *v20;
          if ( *v20 != (struct _EVENT_DATA_DESCRIPTOR *)v20 )
          {
            if ( v18 )
            {
              if ( *(struct _EVENT_DATA_DESCRIPTOR ***)&v21->Size != v20
                || (v22 = (struct _EVENT_DATA_DESCRIPTOR **)v20[1], *v22 != (struct _EVENT_DATA_DESCRIPTOR *)v20)
                || (*v22 = v21,
                    *(_QWORD *)&v21->Size = v22,
                    Ptr = v35.Ptr,
                    v24 = *(struct _EVENT_DATA_DESCRIPTOR ***)&v35.Size,
                    v20[1] = (struct _EVENT_DATA_DESCRIPTOR *)v20,
                    *v20 = (struct _EVENT_DATA_DESCRIPTOR *)v20,
                    *(struct _EVENT_DATA_DESCRIPTOR **)(Ptr + 8) != &v35)
                || *v24 != &v35
                || *(struct _EVENT_DATA_DESCRIPTOR **)(v21->Ptr + 8) != v21
                || **(struct _EVENT_DATA_DESCRIPTOR ***)&v21->Size != v21 )
              {
LABEL_77:
                __fastfail(3u);
              }
              *v24 = v21;
              *(_QWORD *)&v35.Size = *(_QWORD *)&v21->Size;
              **(_QWORD **)&v21->Size = &v35;
              *(_QWORD *)&v21->Size = v24;
            }
            else if ( v19 )
            {
              do
              {
                v25 = BYTE2(v21[5].Ptr);
                v26 = (struct _EVENT_DATA_DESCRIPTOR **)v21;
                v21 = (struct _EVENT_DATA_DESCRIPTOR *)v21->Ptr;
                if ( (v25 & 5) != 1 )
                {
                  if ( *(struct _EVENT_DATA_DESCRIPTOR ***)&v21->Size != v26 )
                    goto LABEL_77;
                  v27 = (struct _EVENT_DATA_DESCRIPTOR ***)v26[1];
                  if ( *v27 != v26 )
                    goto LABEL_77;
                  *v27 = (struct _EVENT_DATA_DESCRIPTOR **)v21;
                  *(_QWORD *)&v21->Size = v27;
                  v28 = *(struct _EVENT_DATA_DESCRIPTOR ****)&v35.Size;
                  if ( **(struct _EVENT_DATA_DESCRIPTOR ***)&v35.Size != &v35 )
                    goto LABEL_77;
                  v26[1] = *(struct _EVENT_DATA_DESCRIPTOR **)&v35.Size;
                  *v26 = &v35;
                  *v28 = v26;
                  *(_QWORD *)&v35.Size = v26;
                }
              }
              while ( v21 != (struct _EVENT_DATA_DESCRIPTOR *)v20 );
            }
          }
          ++v19;
          v20 += 2;
        }
        while ( v19 < 2 );
        if ( (struct _EVENT_DATA_DESCRIPTOR *)v35.Ptr != &v35 )
        {
          a2[20] = 0;
          RtlReleaseSRWLockExclusive(a2 + 18);
          while ( 1 )
          {
            v29 = v35.Ptr;
            if ( (struct _EVENT_DATA_DESCRIPTOR *)v35.Ptr == &v35 )
              break;
            v30 = *(_QWORD *)v35.Ptr;
            if ( *(_QWORD *)(*(_QWORD *)v35.Ptr + 8LL) != v35.Ptr )
              goto LABEL_77;
            v31 = *(_QWORD **)(v35.Ptr + 8);
            if ( *v31 != v35.Ptr )
              goto LABEL_77;
            *v31 = v30;
            *(_QWORD *)(v30 + 8) = v31;
            *(_OWORD *)v29 = 0LL;
            RmpGameModeUnapplyAndReleaseRecipientResources(
              (struct _RM_GAME_MODE_CONTEXT *)a2,
              (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v29 - 88));
            *(_DWORD *)(v29 + 16) = 2;
            RmpGameModeDereferenceRecipientProcess((PVOID)(v29 - 88));
          }
          RtlAcquireSRWLockExclusive(a2 + 18);
          a2[20] = GetCurrentThreadId();
        }
      }
      if ( *v7 == (struct _EVENT_DATA_DESCRIPTOR *)v7 )
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        v13 = !_BitScanForward((unsigned int *)&v14, a2[33]);
        if ( !v13 )
        {
          do
          {
            off_180093EC0[5 * v14]((struct _RM_GAME_MODE_CONTEXT *)a2, 0LL);
            a2[33] &= ~(1 << v14);
            v13 = !_BitScanForward((unsigned int *)&v14, a2[33]);
          }
          while ( !v13 );
          v7 = (struct _EVENT_DATA_DESCRIPTOR **)(a2 + 22);
        }
        RtlAcquireSRWLockExclusive(a2 + 18);
        a2[20] = GetCurrentThreadId();
      }
      RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
      if ( !v11 && *((_BYTE *)a2 + 140) )
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
          NotifyGameModeExtensionRecipientsPresent(0LL);
        *((_BYTE *)a2 + 140) = 0;
        RtlAcquireSRWLockExclusive(a2 + 18);
        a2[20] = GetCurrentThreadId();
      }
      if ( (a2[37] & 8) == 0 )
      {
        RmpGameModePromoteNewRecipients((struct _RM_GAME_MODE_CONTEXT *)a2, v9, &v33, v32);
        if ( v32[0] )
          RmpGameModeNotifyExtensionRecipientsPresent((struct _RM_GAME_MODE_CONTEXT *)a2, v32[0]);
        if ( v33.Flink != &v33 )
        {
          RmpGameModeAcquireGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2, &v33);
          RmpGameModeApplyNewRecipientPolicies((struct _RM_GAME_MODE_CONTEXT *)a2, &v33);
          RmpGameModeApplyGlobalPolicies((struct _RM_GAME_MODE_CONTEXT *)a2);
          RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
        }
      }
      v15 = *v7;
      if ( *v7 == (struct _EVENT_DATA_DESCRIPTOR *)v7 || (v15[3].Size & 0x10) != 0 )
        Ptr_high = 0;
      else
        Ptr_high = HIDWORD(v15[1].Ptr);
      if ( Ptr_high != a2[36] )
      {
        RmpSystemPublishGlobalGameModeState(Ptr_high);
        a2[36] = Ptr_high;
      }
      v6 = *((_BYTE *)a2 + 148);
    }
    while ( (v6 & 1) != 0 );
  }
  a2[20] = 0;
  *((_BYTE *)a2 + 148) = v6 & 0xFD;
  RtlReleaseSRWLockExclusive(a2 + 18);
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009CC4D,
      0LL,
      0LL,
      2u,
      &v35);
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
}

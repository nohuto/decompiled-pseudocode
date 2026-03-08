/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x1C0006840
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x1C0006810 (Control_EP_TransferEventHandler.c)
 *     Endpoint_TransferEventHandler @ 0x1C0009BA0 (Endpoint_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C0041CD4 (TR_TransferEventHandler.c)
 * Callees:
 *     Endpoint_HaltedCompletionCode @ 0x1C0006D98 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0006DF0 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x1C0006EBC (WPP_RECORDER_SF_DDqLDDi.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0006FBC (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0007C90 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000E120 (WPP_RECORDER_SF_DDDD.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     memmove @ 0x1C0020400 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_DDiqq @ 0x1C0043670 (WPP_RECORDER_SF_DDiqq.c)
 */

__int64 __fastcall Control_ProcessTransferEventWithED1(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r12
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int8 v7; // r13
  void *v8; // r8
  __int64 v9; // rcx
  int v10; // edx
  char v11; // cl
  int v12; // edx
  unsigned int v13; // r15d
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  volatile signed __int32 *v18; // r10
  const char *v19; // rax
  KSPIN_LOCK *v20; // rcx
  bool v21; // zf
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  void *v26; // rcx
  int v27; // edx
  int v28; // eax
  int v29; // eax

  v2 = *a1;
  v3 = *a1 & 4;
  v4 = *a1 & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = a2;
  v7 = 1;
  if ( a2 )
  {
    if ( v4 != *(_QWORD *)(a2 + 344) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), HIBYTE(*((_DWORD *)a1 + 3)), v2, 19);
      Controller_ReportFatalErrorEx(
        *(_QWORD *)(v5 + 40),
        2,
        4126,
        0,
        0LL,
        *(_QWORD *)(v5 + 48),
        *(_QWORD *)(v5 + 56),
        v5);
      return 0;
    }
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 56);
    if ( v4 != *(_QWORD *)(v5 + 344) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL), HIBYTE(*((_DWORD *)a1 + 3)), v2, 20);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqLDDi(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      HIWORD(*((_DWORD *)a1 + 3)) & 0x1F,
      a1[1] & 0xFFFFFF,
      21);
  v8 = &WPP_1132998d7a983e6252cacd8244985166_Traceguids;
  v9 = *(_QWORD *)(v5 + 56);
  if ( (HIWORD(*((_DWORD *)a1 + 3)) & 0x1F) != *(_DWORD *)(v9 + 144)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = HIBYTE(*((_DWORD *)a1 + 3));
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v9 + 80),
      v10,
      14,
      22,
      (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
      HIBYTE(*((_DWORD *)a1 + 3)),
      HIWORD(*((_DWORD *)a1 + 3)) & 0x1F);
    v8 = &WPP_1132998d7a983e6252cacd8244985166_Traceguids;
  }
  v11 = *((_BYTE *)a1 + 15);
  if ( v11 != *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *((_WORD *)a1 + 7) & 0x1F;
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      v12,
      14,
      23,
      (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
      v11,
      *((_BYTE *)a1 + 14) & 0x1F);
  }
  v13 = a1[1] & 0xFFFFFF;
  if ( v13 > *(_DWORD *)(v4 + 104) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
        v14,
        14,
        24,
        (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
        *((_BYTE *)a1 + 8),
        *(_DWORD *)(v4 + 104));
    }
    v13 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_DDqq(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      v15,
      (_DWORD)v8,
      25,
      (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
      *(_QWORD *)(v4 + 24),
      v4);
  }
  if ( !v3 )
  {
    v16 = *(_QWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 108) = v13;
    if ( (*(_DWORD *)(v16 + 32) & 1) != 0 && *(_DWORD *)(v4 + 64) == 2 )
      memmove(*(void **)(v4 + 80), *(const void **)(*(_QWORD *)(v4 + 88) + 16LL), v13);
  }
  if ( (unsigned __int8)Endpoint_HaltedCompletionCode(*(_QWORD *)(v5 + 56), *((unsigned __int8 *)a1 + 11), v8) )
  {
    *(_DWORD *)(v4 + 124) = v17;
    v18 = *(volatile signed __int32 **)(v5 + 56);
    _m_prefetchw((const void *)(v18 + 8));
    if ( (_InterlockedOr(v18 + 8, 0x20u) & 0x20) != 0 )
    {
      v19 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_30:
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)v18,
        *((_QWORD *)v18 + 1),
        *((_QWORD *)v18 + 3),
        0x2000000,
        (__int64)v19,
        0LL,
        0LL);
      return v7;
    }
LABEL_54:
    v26 = (void *)(v18 + 74);
    goto LABEL_55;
  }
  v20 = (KSPIN_LOCK *)(v5 + 96);
  if ( (unsigned __int8)(v17 - 26) <= 2u )
  {
    *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc(v20);
    v27 = *(_DWORD *)(v4 + 132) + 1;
    *(_DWORD *)(v4 + 132) = v27;
    if ( v3 )
    {
      if ( *(_DWORD *)(v4 + 108) == *(_DWORD *)(v4 + 104) )
      {
        v28 = *(_DWORD *)(v4 + 128);
        *(_DWORD *)(v4 + 124) = 1;
        v29 = v28 - v27;
      }
      else
      {
        if ( *((_BYTE *)a1 + 11) == 28 )
          *(_DWORD *)(v4 + 124) = 28;
        v29 = *(_DWORD *)(v4 + 128) - v27;
      }
    }
    else
    {
      v29 = 0;
    }
    *(_DWORD *)(v5 + 356) = v29;
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
    v18 = *(volatile signed __int32 **)(v5 + 56);
    _m_prefetchw((const void *)(v18 + 8));
    if ( (_InterlockedOr(v18 + 8, 0x10u) & 0x10) != 0 )
    {
      v19 = "Received duplicate Stopped Transfer Events";
      goto LABEL_30;
    }
    _m_prefetchw((const void *)(v18 + 8));
    if ( (_InterlockedXor(v18 + 8, 8u) & 8) == 0 )
      return v7;
    goto LABEL_54;
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc(v20);
  ++*(_DWORD *)(v4 + 132);
  if ( v3 )
  {
    v21 = *(_DWORD *)(v4 + 112) == 3;
    *(_DWORD *)(v4 + 124) = *((unsigned __int8 *)a1 + 11);
    if ( !v21 && *(_DWORD *)(v4 + 116) != 3 )
      Control_Transfer_CompleteCancelable(v5);
  }
  v22 = *(_DWORD *)(v5 + 356);
  if ( !v22 || (v23 = v22 - 1, (*(_DWORD *)(v5 + 356) = v23) != 0) || (*(_DWORD *)(v5 + 352) & 4) == 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
    return v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  v24 = *(_QWORD *)(v5 + 56);
  if ( !*(_BYTE *)(v24 + 37)
    || (v25 = *(_QWORD *)(v24 + 136),
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 20)) == *(_DWORD *)(v25 + 8)) )
  {
    v26 = (void *)(v24 + 296);
LABEL_55:
    ESM_AddEvent(v26);
  }
  return v7;
}

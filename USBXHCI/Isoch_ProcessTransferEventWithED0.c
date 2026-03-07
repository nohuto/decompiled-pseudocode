char __fastcall Isoch_ProcessTransferEventWithED0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // si
  __int64 v5; // rdi
  _BYTE *v7; // r14
  __int64 v8; // r12
  int v9; // edx
  __int64 v10; // rax
  KSPIN_LOCK *v11; // rcx
  KIRQL v12; // dl
  unsigned __int8 *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r10
  unsigned __int8 *v18; // [rsp+60h] [rbp-18h] BYREF
  char v19; // [rsp+C0h] [rbp+48h] BYREF
  int v20; // [rsp+C8h] [rbp+50h] BYREF
  int v21; // [rsp+D0h] [rbp+58h] BYREF
  int v22; // [rsp+D8h] [rbp+60h] BYREF

  v4 = 0;
  v5 = a2;
  v21 = 0;
  v20 = 0;
  v22 = 0;
  v19 = 0;
  v18 = 0LL;
  v7 = (_BYTE *)(a1 + 11);
  v8 = a2 + 56;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(unsigned __int8 *)(a1 + 15);
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(*(_QWORD *)v8 + 80LL), v9, (unsigned __int8)*v7, 40);
  }
  switch ( *v7 )
  {
    case 0xE:
    case 0xF:
      Isoch_ProcessTransferRingEmptyEvent(v5, a1);
      return v4;
    case 0x14:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDLi(
          *(_QWORD *)(*(_QWORD *)v8 + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
          (unsigned __int8)*v7,
          a4);
      ((void (__fastcall *)(__int64, _QWORD))qword_1C0064870)(UcxDriverGlobals, *(_QWORD *)(*(_QWORD *)v8 + 24LL));
      if ( !*(_QWORD *)a1 )
        return v4;
      break;
    case 0x17:
      ++*(_DWORD *)(v5 + 264);
      if ( !*(_QWORD *)a1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_DDL(*(_QWORD *)(*(_QWORD *)v8 + 80LL), a2, (unsigned __int8)*v7, 41);
        }
        return v4;
      }
      break;
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  if ( *v7 == 36 )
  {
    *(_DWORD *)(v5 + 328) |= 0x80u;
    v10 = *(_QWORD *)(v5 + 40);
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 516));
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 560));
    *(_BYTE *)(v10 + 472) = 1;
  }
  if ( (*(_DWORD *)(v5 + 328) & 0x40) == 0 )
  {
    Isoch_FindTrbMatch(v5, (signed __int64 *)a1, (__int64 *)&v18, &v22, &v20);
    v11 = (KSPIN_LOCK *)(v5 + 96);
    v12 = *(_BYTE *)(v5 + 104);
    if ( (unsigned __int8)(*v7 - 26) <= 2u )
    {
      *(_DWORD *)(v5 + 328) |= 0x40u;
      KeReleaseSpinLock(v11, v12);
      if ( v18 )
        Isoch_Stage_CompleteTD(v18, (unsigned __int8)*v7, v20, 0, &v19, &v21);
      v16 = *(_QWORD *)v8;
      _m_prefetchw((const void *)(*(_QWORD *)v8 + 32LL));
      if ( (_InterlockedOr((volatile signed __int32 *)(v16 + 32), 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)v16,
          *(_QWORD *)(v16 + 8),
          *(_QWORD *)(v16 + 24),
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v16 + 32));
        if ( (_InterlockedXor((volatile signed __int32 *)(v16 + 32), 8u) & 8) != 0 )
          ESM_AddEvent((KSPIN_LOCK *)(v16 + 296), 118);
      }
    }
    else
    {
      KeReleaseSpinLock(v11, v12);
      v13 = v18;
      if ( !v18 )
        return v4;
      v14 = *(_QWORD *)v18;
      Isoch_CompleteStaleTransfers(v5, *(__int64 ****)v18);
      Isoch_Transfer_CompleteStaleStages(v15, v14, v13);
      Isoch_Stage_CompleteTD(v13, (unsigned __int8)*v7, v20, 0, &v19, &v21);
    }
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  return v4;
}

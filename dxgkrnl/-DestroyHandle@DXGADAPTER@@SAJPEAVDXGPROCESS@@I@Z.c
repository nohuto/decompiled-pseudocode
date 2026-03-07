__int64 __fastcall DXGADAPTER::DestroyHandle(struct DXGPROCESS *this, unsigned int a2)
{
  __int64 v4; // rbx
  HMGRTABLE *v5; // rsi
  __int64 v6; // rbx
  int v7; // edx
  __int64 v8; // rbx
  struct DXGADAPTER *const *v9; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // edx
  _BYTE v15[32]; // [rsp+50h] [rbp-38h] BYREF

  if ( !this )
  {
    WdLogSingleEntry1(1LL, 3364LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 3364LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v15, this);
  v4 = (a2 >> 6) & 0xFFFFFF;
  if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
  {
    v11 = *((_QWORD *)this + 76);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 248));
    if ( (unsigned int)v4 < *(_DWORD *)(v11 + 296) )
    {
      v12 = *(_QWORD *)(v11 + 280);
      v13 = 2 * v4;
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v12 + 8 * v13 + 8) & 0x60)
        && (*(_DWORD *)(v12 + 8 * v13 + 8) & 0x2000) == 0 )
      {
        v14 = *(_DWORD *)(v12 + 8 * v13 + 8) & 0x1F;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            v8 = *(_QWORD *)(v12 + 8 * v13);
            goto LABEL_24;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v8 = 0LL;
LABEL_24:
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 264));
    ExReleasePushLockSharedEx(v11 + 248, 0LL);
    KeLeaveCriticalRegion();
    v5 = (struct DXGPROCESS *)((char *)this + 280);
    goto LABEL_12;
  }
  v5 = (struct DXGPROCESS *)((char *)this + 280);
  if ( (unsigned int)v4 < *((_DWORD *)this + 74) )
  {
    v6 = 2 * v4;
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v5 + 8 * v6 + 8) & 0x60)
      && (*(_DWORD *)(*(_QWORD *)v5 + 8 * v6 + 8) & 0x2000) == 0 )
    {
      v7 = *(_DWORD *)(*(_QWORD *)v5 + 8 * v6 + 8) & 0x1F;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)v5 + 8 * v6);
          goto LABEL_12;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v8 = 0LL;
LABEL_12:
  if ( v8 )
  {
    HMGRTABLE::FreeHandle(v5, a2);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v8 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 152));
    v9 = *(struct DXGADAPTER *const **)(v8 + 2928);
    if ( v9 )
    {
      if ( *(_DWORD *)(v8 + 240) == -1 )
        WdLogSingleEntry1(3LL, 3394LL);
      else
        DXGPROCESS::CloseAdapter(this, v9);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 152));
    ExReleasePushLockSharedEx(v8 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v8);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
    return 3221225485LL;
  }
}

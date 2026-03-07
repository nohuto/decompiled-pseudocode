__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(__int64 a1)
{
  __int64 v1; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v3; // rdi
  unsigned int v4; // edx
  unsigned int v5; // r9d
  __int64 v6; // r8
  unsigned int v7; // ecx
  int v8; // ecx
  DXGKEYEDMUTEX *v10; // rsi
  unsigned int v11; // ecx
  _BYTE v12[32]; // [rsp+50h] [rbp-28h] BYREF

  v1 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v3 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v12, Current);
  v4 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  v5 = (unsigned int)v1 >> 30;
  if ( v4 >= *((_DWORD *)v3 + 74)
    || (v6 = *((_QWORD *)v3 + 35), v7 = *(_DWORD *)(v6 + 16LL * v4 + 8), v5 != ((v7 >> 5) & 3))
    || (v7 & 0x2000) != 0
    || (v8 = v7 & 0x1F) == 0 )
  {
LABEL_9:
    WdLogSingleEntry2(3LL, v1, -1073741811LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    return 3221225485LL;
  }
  if ( v8 != 9 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_9;
  }
  v10 = *(DXGKEYEDMUTEX **)(v6 + 16LL * v4);
  if ( !v10 )
    goto LABEL_9;
  if ( v4 < *((_DWORD *)v3 + 74) )
  {
    v11 = *(_DWORD *)(v6 + 16LL * v4 + 8);
    if ( v5 == ((v11 >> 5) & 3) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
      *(_DWORD *)(v6 + 16 * (((unsigned __int64)(unsigned int)v1 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v10, v1, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle((unsigned int)v1) )
  {
    WdLogSingleEntry1(1LL, 3761LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bStatus", 3761LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}

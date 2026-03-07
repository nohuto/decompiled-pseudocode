__int64 __fastcall DxgkQueryDmmInterface(DXGADAPTER *this, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v5 = *((_QWORD *)this + 365);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
  {
    *a3 = *(_QWORD *)(v6 + 456);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192385LL;
  }
}

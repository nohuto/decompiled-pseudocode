__int64 __fastcall DxgkSuspendMemorySegments(__int64 a1)
{
  ADAPTER_RENDER *v3; // rcx

  if ( a1 )
  {
    v3 = *(ADAPTER_RENDER **)(a1 + 2928);
    if ( v3 )
    {
      return ADAPTER_RENDER::SuspendMemorySegments(v3);
    }
    else
    {
      WdLogSingleEntry2(2LL, a1, -1073741637LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkSuspendMemorySegments is called on display only DXGADAPTER 0x%I64x, returning 0x%I64x.",
        a1,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      return 3221225659LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}

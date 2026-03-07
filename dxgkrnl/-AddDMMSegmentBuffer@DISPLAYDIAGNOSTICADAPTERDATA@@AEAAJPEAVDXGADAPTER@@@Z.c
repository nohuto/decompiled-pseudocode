int __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddDMMSegmentBuffer(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  int result; // eax
  void *v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // edi

  if ( !a2 )
    return -1073741811;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry1(1LL, 1172LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1172LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = (void *)operator new[](0x2000uLL, 0x4B677844u, 256LL);
  *((_QWORD *)this + 6) = v5;
  if ( v5 )
  {
    result = DmmCollectBlackScreenDiagInfo(a2, v6, v5);
    v7 = result;
    if ( result >= 0 )
    {
      *((_BYTE *)this + 56) = 1;
    }
    else
    {
      operator delete(*((void **)this + 6));
      *((_QWORD *)this + 6) = 0LL;
      result = v7;
      *((_BYTE *)this + 56) = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 0x2000LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DMM Segment data (size 0x%I64x)",
      0x2000LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741801;
  }
  return result;
}

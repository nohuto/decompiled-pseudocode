/*
 * XREFs of ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F1734
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F28F8 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C03A7C8C (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 */

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

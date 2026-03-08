/*
 * XREFs of _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C031EC6C
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C0198420 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

void __fastcall DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(__int64 a1)
{
  unsigned int v2; // edi

  operator delete(*(void **)a1);
  operator delete(*(void **)(a1 + 8));
  operator delete(*(void **)(a1 + 16));
  v2 = 0;
  if ( *(_QWORD *)(a1 + 24) && *(_DWORD *)(a1 + 64) )
  {
    do
      operator delete(*(void **)(*(_QWORD *)(a1 + 24) + 8LL * v2++));
    while ( v2 < *(_DWORD *)(a1 + 64) );
  }
  operator delete(*(void **)(a1 + 24));
  operator delete(*(void **)(a1 + 32));
  operator delete(*(void **)(a1 + 40));
  operator delete(*(void **)(a1 + 48));
  operator delete(*(void **)(a1 + 56));
}

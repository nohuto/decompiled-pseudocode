/*
 * XREFs of CcReferenceVacbArray @ 0x140335D48
 * Callers:
 *     CcGetVacbFromFreeList @ 0x140335C94 (CcGetVacbFromFreeList.c)
 *     CcGetRandomVacbArrayWithReference @ 0x140535BC4 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140535FC0 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

_DWORD *__fastcall CcReferenceVacbArray(unsigned int a1)
{
  _DWORD *v1; // r8
  _DWORD *v2; // r9

  v1 = 0LL;
  v2 = *(_DWORD **)(CcVacbArrays + 8LL * a1);
  if ( v2 )
  {
    ++v2[1];
    v1 = v2;
    if ( *v2 != a1 )
      KeBugCheckEx(0x34u, 0x13FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v1;
}

/*
 * XREFs of ?CreateRegionFromRect@@YAJAEBUtagRECT@@PEAPEAUIRegion@@@Z @ 0x1C013ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C013ECC0 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CreateRegionFromRect(struct _RECTL *a1, struct IRegion **a2)
{
  __int64 result; // rax
  struct CRegion *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = CRegion::Create(a1, &v4);
  *a2 = v4;
  return result;
}

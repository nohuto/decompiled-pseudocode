/*
 * XREFs of ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02C2F24
 * Callers:
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0083DC0 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C029A1B0 (NtGdiTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::bRedirHooked(XDCOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  v3 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  return v3 == *(_QWORD *)(v2 + 23376) || v3 == *(_QWORD *)(v2 + 8608);
}

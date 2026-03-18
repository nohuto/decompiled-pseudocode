/*
 * XREFs of ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02C06A4
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C0297970 (NtGdiTransparentBlt.c)
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

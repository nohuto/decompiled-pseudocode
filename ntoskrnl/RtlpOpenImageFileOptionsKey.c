/*
 * XREFs of RtlpOpenImageFileOptionsKey @ 0x1409B5E50
 * Callers:
 *     RtlQueryImageXfgFilter @ 0x1405A4CF4 (RtlQueryImageXfgFilter.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14077EE60 (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, (__int64)a3, a3);
}

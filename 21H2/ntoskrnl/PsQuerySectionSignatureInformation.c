/*
 * XREFs of PsQuerySectionSignatureInformation @ 0x1406BCB10
 * Callers:
 *     PsCheckProcessFileSigningLevel @ 0x14065FD10 (PsCheckProcessFileSigningLevel.c)
 *     PsConvertToGuiThread @ 0x1406BC9D0 (PsConvertToGuiThread.c)
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 */

__int64 __fastcall PsQuerySectionSignatureInformation(_KPROCESS *a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rax
  _BYTE *v3; // r8

  if ( a1 != KeGetCurrentThread()->Process )
    return 3221225659LL;
  v1 = a1[1].Affinity.StaticBitmap[17];
  if ( !v1 )
    return 3221225473LL;
  v2 = MiSectionControlArea(v1);
  *v3 = *(_BYTE *)(*(_QWORD *)v2 + 15LL) >> 4;
  return 0LL;
}

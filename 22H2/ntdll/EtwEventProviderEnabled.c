/*
 * XREFs of EtwEventProviderEnabled @ 0x180075AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl EtwEventProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  REGHANDLE v3; // rax
  BOOLEAN v5; // dl
  REGHANDLE v6; // rcx
  UCHAR v7; // al
  UCHAR v9; // al

  v3 = HIWORD(RegHandle);
  if ( !HIWORD(RegHandle) )
    return 0;
  v5 = 1;
  v6 = RegHandle & 0xFFFFFFFFFFFFLL;
  if ( (v6 & 1) != 0 || (_WORD)v3 != *(_WORD *)(v6 + 96) )
    return 0;
  if ( !*(_BYTE *)(v6 + 124)
    || (v7 = *(_BYTE *)(v6 + 125), Level > v7) && v7
    || ((*(_BYTE *)(v6 + 120) & 0x40) == 0 || Keyword)
    && ((Keyword & *(_QWORD *)(v6 + 112)) == 0 || (Keyword & *(_QWORD *)(v6 + 104)) != *(_QWORD *)(v6 + 104)) )
  {
    if ( !*(_BYTE *)(v6 + 244) )
      return 0;
    v9 = *(_BYTE *)(v6 + 245);
    if ( Level > v9 )
    {
      if ( v9 )
        return 0;
    }
    if ( ((*(_BYTE *)(v6 + 240) & 0x40) == 0 || Keyword)
      && ((Keyword & *(_QWORD *)(v6 + 232)) == 0 || (Keyword & *(_QWORD *)(v6 + 224)) != *(_QWORD *)(v6 + 224)) )
    {
      return 0;
    }
  }
  return v5;
}

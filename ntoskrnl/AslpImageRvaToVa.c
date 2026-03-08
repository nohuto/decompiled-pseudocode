/*
 * XREFs of AslpImageRvaToVa @ 0x140A5680C
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x140A51CE0 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x140A5533C (AslpFileGetClrVersion.c)
 *     AslpFileQueryExportName @ 0x140A565BC (AslpFileQueryExportName.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AslpImageRvaToVa(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // r11d
  _DWORD *v6; // rdx
  int v7; // r10d
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx

  if ( *(_BYTE *)(a2 + 51) )
  {
    if ( (unsigned __int64)a3 < *(_QWORD *)(a2 + 32) )
      return a3 + *(_QWORD *)(a2 + 24);
    return 0LL;
  }
  v5 = *(unsigned __int16 *)(a1 + 6);
  v6 = (_DWORD *)(*(unsigned __int16 *)(a1 + 20) + a1 + 24);
  v7 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  while ( 1 )
  {
    v8 = v6[3];
    if ( a3 >= v8 && a3 < v6[4] + v8 )
      break;
    v6 += 10;
    if ( ++v7 >= v5 )
      return 0LL;
  }
  if ( !v6 )
    return 0LL;
  v9 = a3 + v6[5] - v6[3];
  if ( v9 >= *(_QWORD *)(a2 + 16) )
    return 0LL;
  return v9 + *(_QWORD *)(a2 + 24);
}

/*
 * XREFs of BuildOverlayFilePath @ 0x180047BA0
 * Callers:
 *     GetOverlayFilePath @ 0x180047A24 (GetOverlayFilePath.c)
 * Callees:
 *     GetOverlayRootFolder @ 0x180038344 (GetOverlayRootFolder.c)
 *     wcscat_s @ 0x180098220 (wcscat_s.c)
 */

__int64 __fastcall BuildOverlayFilePath(
        const WCHAR *a1,
        const wchar_t *a2,
        const wchar_t *a3,
        unsigned int *a4,
        wchar_t *Destination)
{
  int OverlayRootFolder; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 result; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  if ( *a2 != 92 || *a3 != 92 )
    return 3221225659LL;
  LODWORD(v13) = *a4;
  OverlayRootFolder = GetOverlayRootFolder(a1, (unsigned int *)&v13, Destination);
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  do
    ++v9;
  while ( a3[v9] );
  v11 = v13 + 2 * (v9 + v10);
  if ( OverlayRootFolder >= 0 && v11 > *a4 )
    OverlayRootFolder = -1073741789;
  if ( OverlayRootFolder == -1073741789 )
    *a4 = v11;
  if ( OverlayRootFolder < 0 )
    return (unsigned int)OverlayRootFolder;
  wcscat_s(Destination, (unsigned __int64)v11 >> 1, a3);
  wcscat_s(Destination, (unsigned __int64)v11 >> 1, a2);
  result = 0LL;
  *a4 = v11;
  return result;
}

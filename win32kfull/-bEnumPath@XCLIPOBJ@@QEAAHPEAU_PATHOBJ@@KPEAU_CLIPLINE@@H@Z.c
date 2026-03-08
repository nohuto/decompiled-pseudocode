/*
 * XREFs of ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C02DAFFC
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C000C938 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02CF430 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     PATHOBJ_bEnumClipLines @ 0x1C02DB570 (PATHOBJ_bEnumClipLines.c)
 * Callees:
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z @ 0x1C02DB0F4 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z.c)
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C02F5534 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 */

_BOOL8 __fastcall XCLIPOBJ::bEnumPath(
        XCLIPOBJ *this,
        struct _PATHOBJ *a2,
        unsigned int a3,
        struct _CLIPLINE *a4,
        int a5)
{
  const unsigned int *v10; // r8
  __int64 v11; // r10

  a4->c = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( !(unsigned int)XCLIPOBJ::bEnumLine(this, a3, a4) )
      XCLIPOBJ::bGetLine(this, (struct EPATHOBJ *)a2, v10);
    if ( a4->c )
      break;
    if ( (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) != 0 )
    {
      v11 = *((_QWORD *)this + 18);
      goto LABEL_9;
    }
  }
  v11 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v11 + 24) & 0x2000000) == 0 )
    return (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) == 0;
LABEL_9:
  if ( *(int *)(v11 + 180) > 0 )
  {
    if ( a5 )
      **(_DWORD **)(v11 + 184) = (unsigned __int16)(*(_DWORD *)(v11 + 176) % *(_DWORD *)(v11 + 200)) | ((unsigned __int16)(*(_DWORD *)(v11 + 176) / *(_DWORD *)(v11 + 200)) << 16);
  }
  return (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) == 0;
}

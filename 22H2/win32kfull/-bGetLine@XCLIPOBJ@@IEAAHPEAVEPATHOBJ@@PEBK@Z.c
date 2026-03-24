/*
 * XREFs of ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z @ 0x1C014B068
 * Callers:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C014ABB4 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C014BC28 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C014B1F8 (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 *     ?bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C014B7D0 (-bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bGetLine(XCLIPOBJ *this, struct EPATHOBJ *a2, const unsigned int *a3)
{
  __int64 v4; // r8
  int v5; // edi
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]

  v9 = HIDWORD(a3);
  v8 = 0;
  v4 = *((_QWORD *)this + 18);
  v5 = 0;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v4 + 24) & 0x2000000) != 0 )
      return 0LL;
    if ( *(_DWORD *)v4 > 1u )
    {
      *(_QWORD *)(v4 + 4) = **(_QWORD **)(v4 + 16);
      *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) += 8LL;
      --**((_DWORD **)this + 18);
      if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, v5 | *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 8u) )
        return 1LL;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v4 + 24) & 8) == 0 )
      break;
    *(_QWORD *)(v4 + 4) = **(_QWORD **)(v4 + 16);
    *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) = *((_QWORD *)this + 18) + 204LL;
    if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, 0x100000u) && !v5 )
      return 1LL;
LABEL_11:
    v4 = *((_QWORD *)this + 18);
  }
  if ( !(unsigned int)XCLIPOBJ::bGetMorePoints(this, a2, &v8) )
    return 0LL;
  if ( !(unsigned int)XCLIPOBJ::bEnumStartLine(this, v8 | v5) )
  {
    v5 |= *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 5;
    goto LABEL_11;
  }
  return 1LL;
}

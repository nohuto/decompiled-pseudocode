/*
 * XREFs of ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C00192AC
 * Callers:
 *     ?bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C00190B0 (-bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0019260 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 * Callees:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0019374 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C00196DC (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C016A1E0 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall EPATHOBJ::addpoints(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  unsigned int v8; // ecx

  if ( *((_DWORD *)a3 + 1) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 80LL) & 1) == 0 )
      EPATHOBJ::growlastrec(this, a2, a3, a4);
    while ( *((_DWORD *)a3 + 1) )
    {
      if ( !(unsigned int)EPATHOBJ::createrec(this, a2, a3, 0LL) )
        return 0LL;
    }
    v8 = *(_DWORD *)this & 0xFFFFFFFD;
    *(_DWORD *)this = v8;
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
      *(_DWORD *)this = v8 | 1;
  }
  return 1LL;
}

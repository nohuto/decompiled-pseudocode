/*
 * XREFs of ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C01533C8
 * Callers:
 *     ?bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1C0153860 (-bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1C01538E0 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 * Callees:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0153A28 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0153CDC (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::addpoints(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _PATHDATAL *a3)
{
  struct _POINTFIX *v6; // r9
  unsigned int v8; // edx

  if ( *((_DWORD *)a3 + 9) )
  {
    v6 = (struct _POINTFIX *)*(unsigned int *)(*((_QWORD *)this + 1) + 80LL);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      EPATHOBJ::growlastrec(this, a2, a3, v6);
      if ( *((_WORD *)a3 + 12) )
        return 0LL;
    }
    while ( *((_DWORD *)a3 + 9) )
    {
      if ( !(unsigned int)EPATHOBJ::createrec(this, a2, a3, 0LL) )
        return 0LL;
    }
    v8 = *(_DWORD *)this & 0xFFFFFFFD;
    *(_DWORD *)this = v8;
    if ( (*((_DWORD *)a3 + 8) & 0x10) != 0 )
      *(_DWORD *)this = v8 | 1;
  }
  return 1LL;
}

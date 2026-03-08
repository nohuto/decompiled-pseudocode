/*
 * XREFs of ?yCompute@DDA_CLIPLINE@@QEAAJJ@Z @ 0x1C02F65DC
 * Callers:
 *     ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C02F6218 (-vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::yCompute(DDA_CLIPLINE *this, int a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx

  v3 = *((_QWORD *)this + 3) + *((int *)this + 3) * (__int64)(a2 - *((_DWORD *)this + 1));
  v4 = *((unsigned int *)this + 4);
  if ( v3 >= 0xFFFFFFFFLL )
    v4 = v3 / v4;
  else
    LODWORD(v4) = (unsigned int)v3 / (unsigned int)v4;
  return (unsigned int)(v4 + *((_DWORD *)this + 2));
}

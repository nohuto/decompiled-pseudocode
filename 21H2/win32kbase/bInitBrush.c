/*
 * XREFs of bInitBrush @ 0x1C02E518C
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C02E523C (bInitBRUSHOBJ.c)
 * Callees:
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00628A0 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0063670 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00643E0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, __int64 **a4, int a5)
{
  unsigned int v7; // ebx
  unsigned __int64 *v8; // rcx
  __int64 *v10[6]; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+60h] [rbp-18h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v10, a2, a3, 0, 0);
  if ( v10[0] )
  {
    v7 = 1;
    v11 = 1;
    BRUSHMEMOBJ::vGlobal(v10);
    if ( a5 )
      *((_DWORD *)v10[0] + 10) |= 4u;
    v8 = (unsigned __int64 *)v10[0];
    if ( a4 )
      *a4 = v10[0];
    bSetStockObject(*v8, a1, 0);
    if ( !a1 )
      *(_QWORD *)&WPP_MAIN_CB.SectorSize = *v10[0];
  }
  else
  {
    v7 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v10);
  return v7;
}

/*
 * XREFs of bInitBrush @ 0x1C02DB738
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C02DB1F8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005F74C (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00605C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0060894 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00609A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, HBRUSH **a4, int a5)
{
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned __int64 *v10; // rcx
  HBRUSH *v12[6]; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+60h] [rbp-18h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, a2, a3, 0, 0);
  v8 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
  if ( v12[0] )
  {
    v9 = 1;
    v13 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
    if ( a5 )
      *((_DWORD *)v12[0] + 10) |= 4u;
    v10 = (unsigned __int64 *)v12[0];
    if ( a4 )
      *a4 = v12[0];
    bSetStockObject(*v10, a1, 0);
    if ( !a1 )
      *(_QWORD *)(v8 + 472) = *v12[0];
  }
  else
  {
    v9 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
  return v9;
}

/*
 * XREFs of bInitBrush @ 0x1C02981F0
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C02982A0 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0015DD0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001A81C (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001BC00 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001BC50 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 */

__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, HBRUSH **a4, int a5)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  unsigned __int64 *v10; // rcx
  HBRUSH *v12[6]; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+60h] [rbp-18h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, a2, a3, 0, 0);
  if ( v12[0] )
  {
    v9 = 1;
    v13 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12, v7, v8);
    if ( a5 )
      *((_DWORD *)v12[0] + 10) |= 4u;
    v10 = (unsigned __int64 *)v12[0];
    if ( a4 )
      *a4 = v12[0];
    bSetStockObject(*v10, a1, 0);
    if ( !a1 )
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)*v12[0];
  }
  else
  {
    v9 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
  return v9;
}

/*
 * XREFs of ?bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x1C02A7A18
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x1C02A7F7C (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 */

__int64 __fastcall bAddPrintKView(__int64 a1, void *a2, int a3, __int64 a4, struct _FONTFILE_PRINTKVIEW *a5)
{
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = ghsemPrintKView;
  GreAcquireSemaphore(ghsemPrintKView);
  v9 = 1;
  if ( a5 )
  {
    *((_QWORD *)a5 + 2) = a2;
  }
  else
  {
    v10 = PALLOCMEM2(0x28uLL, 1886221383LL, 1);
    if ( v10 )
    {
      v10[4] = gpPrintKViewList;
      *v10 = a1;
      v10[2] = a2;
      *((_DWORD *)v10 + 2) = a3;
      *((_DWORD *)v10 + 3) = 1;
      v10[3] = a4;
      gpPrintKViewList = (__int64)v10;
    }
    else
    {
      v9 = 0;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)v12);
  return v9;
}

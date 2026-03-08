/*
 * XREFs of ?bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x1C02B8BE0
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x1C02B9424 (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bAddPrintKView(__int64 a1, void *a2, int a3, __int64 a4, struct _FONTFILE_PRINTKVIEW *a5)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v9 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v12[0] = *(_QWORD *)(v9 + 23400);
  GreAcquireSemaphore(v12[0]);
  if ( a5 )
  {
    *((_QWORD *)a5 + 2) = a2;
LABEL_5:
    SEMOBJ::vUnlock((SEMOBJ *)v12);
    return 1LL;
  }
  v10 = Win32AllocPoolZInit(40LL, 1886221383LL);
  if ( v10 )
  {
    *(_QWORD *)v10 = a1;
    *(_QWORD *)(v10 + 16) = a2;
    *(_DWORD *)(v10 + 8) = a3;
    *(_DWORD *)(v10 + 12) = 1;
    *(_QWORD *)(v10 + 24) = a4;
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(v9 + 23392);
    *(_QWORD *)(v9 + 23392) = v10;
    goto LABEL_5;
  }
  SEMOBJ::vUnlock((SEMOBJ *)v12);
  return 0LL;
}

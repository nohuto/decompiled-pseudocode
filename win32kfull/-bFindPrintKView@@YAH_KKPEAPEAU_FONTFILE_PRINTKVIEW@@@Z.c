/*
 * XREFs of ?bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x1C02B8EC4
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x1C02B9424 (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bFindPrintKView(__int64 a1, int a2, struct _FONTFILE_PRINTKVIEW **a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx
  __int64 i; // rax
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v7 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v10 = *(_QWORD *)(v7 + 23400);
  GreAcquireSemaphore(v10);
  for ( i = *(_QWORD *)(v7 + 23392); i; i = *(_QWORD *)(i + 32) )
  {
    if ( *(_QWORD *)i == a1 && *(_DWORD *)(i + 8) == a2 )
    {
      *a3 = (struct _FONTFILE_PRINTKVIEW *)i;
      v3 = 1;
      break;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v3;
}

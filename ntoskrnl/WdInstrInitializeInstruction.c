/*
 * XREFs of WdInstrInitializeInstruction @ 0x1405281DC
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x14051C944 (HalpWdatExecuteActionBeforeInitialize.c)
 *     HalpWdatInitializeWdat @ 0x14051CB28 (HalpWdatInitializeWdat.c)
 *     HalpWdatInitializeWdrt @ 0x14051CBC0 (HalpWdatInitializeWdrt.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     WdHwCreateHardwareRegister @ 0x140527E18 (WdHwCreateHardwareRegister.c)
 */

__int64 __fastcall WdInstrInitializeInstruction(_BYTE *a1, char a2, char a3, __int64 a4, int a5, int a6, char a7)
{
  char v7; // di
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int8 v14; // r8

  v7 = 0;
  if ( !a1 )
    return 3221225485LL;
  memset(a1, 0, 0x40uLL);
  v14 = 3;
  if ( !a7 )
    v14 = *(_BYTE *)(a4 + 3);
  LOBYTE(v13) = *(_BYTE *)a4;
  result = WdHwCreateHardwareRegister(*(LARGE_INTEGER *)(a4 + 4), v13, v14, (__int64)(a1 + 8));
  if ( (int)result >= 0 )
  {
    *a1 = a2;
    a1[1] = a3;
    if ( a7 )
    {
      a1[48] = 32;
    }
    else
    {
      a1[48] = *(_BYTE *)(a4 + 1);
      v7 = *(_BYTE *)(a4 + 2);
    }
    a1[49] = v7;
    *((_DWORD *)a1 + 13) = a5;
    *((_DWORD *)a1 + 14) = a6;
    return 0LL;
  }
  return result;
}

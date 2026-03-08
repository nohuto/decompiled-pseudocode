/*
 * XREFs of HalpWdatInitializeWdat @ 0x14051CB28
 * Callers:
 *     HalpWdatInitialize @ 0x14051CAB0 (HalpWdatInitialize.c)
 * Callees:
 *     WdInstrInitializeInstruction @ 0x1405281DC (WdInstrInitializeInstruction.c)
 */

__int64 __fastcall HalpWdatInitializeWdat(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rsi
  int v3; // edi
  __int64 result; // rax
  int v5; // edx

  v1 = *(_DWORD **)(a1 + 8);
  v2 = 0LL;
  v3 = a1;
  *(_DWORD *)(a1 + 16) = v1[13];
  *(_DWORD *)(a1 + 20) = v1[14];
  *(_DWORD *)(a1 + 24) = v1[12];
  *(_DWORD *)(a1 + 44) = v1[16];
  for ( result = 0LL; (unsigned int)v2 < v1[16]; v2 = (unsigned int)(v2 + 1) )
  {
    v5 = 3 * v2;
    LOBYTE(v5) = v1[6 * v2 + 17];
    result = WdInstrInitializeInstruction(
               ((_DWORD)v2 << 6) + v3 + 48,
               v5,
               BYTE1(v1[6 * v2 + 17]),
               (int)v1 + 72 + 24 * (int)v2,
               v1[6 * v2 + 21],
               v1[6 * v2 + 22],
               0);
    if ( (int)result < 0 )
      break;
  }
  return result;
}

/*
 * XREFs of SymCryptEcpointCreateEx @ 0x140406900
 * Callers:
 *     SymCryptEcpointCreate @ 0x1404068E0 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointGetValue @ 0x140406980 (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x140406B10 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptModElementCreate @ 0x140400F4C (SymCryptModElementCreate.c)
 */

__int64 __fastcall SymCryptEcpointCreateEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 v9; // r14

  v4 = a1 + 32;
  v5 = 0;
  if ( a4 )
  {
    v9 = *(unsigned int *)(a3 + 36);
    while ( SymCryptModElementCreate() )
    {
      v4 += v9;
      if ( ++v5 >= a4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 8) = a3;
  }
  return a1;
}

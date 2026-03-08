/*
 * XREFs of HalpApicReplayLocalInterrupts @ 0x1405305E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicReplaySendSelfIpi @ 0x140530670 (HalpApicReplaySendSelfIpi.c)
 */

__int64 __fastcall HalpApicReplayLocalInterrupts(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // r15
  unsigned int v6; // ebp
  unsigned int v7; // r14d

  v2 = 0;
  v3 = (unsigned int *)(a2 + 64);
  do
  {
    v4 = *(v3 - 16);
    v5 = 32LL;
    v6 = *(v3 - 8);
    v7 = *v3;
    do
    {
      if ( (v7 & 1) == 0 && (v4 & 1) != 0 )
      {
        HalpApicReplaySendSelfIpi(v2);
        if ( (v6 & 1) != 0 )
          HalpApicReplaySendSelfIpi(v2);
      }
      v4 >>= 1;
      ++v2;
      v6 >>= 1;
      v7 >>= 1;
      --v5;
    }
    while ( v5 );
    ++v3;
  }
  while ( v2 < 0x100 );
  return 0LL;
}

/*
 * XREFs of HalpHvTimerArm @ 0x1403C31B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvCounterQueryCounter @ 0x1403C3240 (HalpHvCounterQueryCounter.c)
 */

__int64 __fastcall HalpHvTimerArm(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 Counter; // rax
  _BOOL8 v7; // rdx
  unsigned __int64 v8; // rdx

  if ( a2 == 3 )
  {
    Counter = HalpHvCounterQueryCounter();
    a3 += Counter;
  }
  LODWORD(Counter) = KeGetPcr()->Prcb.Number;
  v7 = a2 == 2;
  if ( v7 != ((*(_QWORD *)(a1 + 24 * Counter) >> 1) & 1LL) )
  {
    v8 = *(_QWORD *)(a1 + 24 * Counter) & 0xFFFFFFFFFFFFFFFCuLL | (2 * v7);
    *(_QWORD *)(a1 + 24 * Counter) = v8;
    __writemsr(0x400000B0u, v8);
  }
  __writemsr(0x400000B1u, a3);
  return 0LL;
}

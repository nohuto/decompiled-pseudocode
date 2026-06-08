/*
 * XREFs of DecodeAcpi2CState @ 0x1C0026AD8
 * Callers:
 *     RegisterKernelCStates @ 0x1C00268B0 (RegisterKernelCStates.c)
 *     RegisterHvCStates @ 0x1C0030EB8 (RegisterHvCStates.c)
 *     RegisterHiddenIdleStates @ 0x1C0036940 (RegisterHiddenIdleStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00373D0 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C003773C (RegisterKernelPepIdleStatesV2.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C00041CC (DecodeAcpiIdleState.c)
 */

__int64 __fastcall DecodeAcpi2CState(__int64 a1, __int64 a2, __int64 *a3, char *a4, __int64 a5)
{
  __int64 result; // rax

  result = DecodeAcpiIdleState(a1, (char *)a2, *(unsigned __int8 *)(a2 + 12), 0LL, a3, a4, 0LL, a5);
  if ( (int)result >= 0 )
  {
    if ( a5 )
      *(_BYTE *)(a5 + 82) = *(_BYTE *)(a2 + 12);
  }
  return result;
}

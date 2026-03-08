/*
 * XREFs of NVMeControllerReclaimLocalCommand @ 0x1C0003594
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00023F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeRequestComplete @ 0x1C000318C (NVMeRequestComplete.c)
 * Callees:
 *     memset @ 0x1C0004580 (memset.c)
 */

__int64 __fastcall NVMeControllerReclaimLocalCommand(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    memset(*(void **)(a2 + 96), 0, 0x10A0uLL);
    result = *(_QWORD *)(a2 + 96);
    *(_BYTE *)(a2 + 11) = 0;
    *(_QWORD *)(a2 + 64) = result;
    *(_QWORD *)(result + 4232) = a2;
    *(_BYTE *)a2 = 0;
    if ( a1 != -4512 && a2 != -112 )
      return StorPortExtendedFunction(38LL, a1, a1 + 4512, a2 + 112);
  }
  return result;
}

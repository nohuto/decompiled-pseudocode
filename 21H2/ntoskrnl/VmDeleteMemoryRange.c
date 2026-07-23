/*
 * XREFs of VmDeleteMemoryRange @ 0x14092F100
 * Callers:
 *     <none>
 * Callees:
 *     VmpRemoveMemoryRange @ 0x1405A5084 (VmpRemoveMemoryRange.c)
 *     VmpValidateMemoryRangeParameters @ 0x14092FC30 (VmpValidateMemoryRangeParameters.c)
 */

__int64 __fastcall VmDeleteMemoryRange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r10
  __int64 v7; // r11
  __int64 result; // rax
  volatile LONG *v9; // rcx

  if ( (unsigned int)VmpValidateMemoryRangeParameters(a1, a2, a3, a4) )
    return 3221225485LL;
  v9 = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5];
  if ( !v9 )
    return 3221225608LL;
  result = VmpRemoveMemoryRange(v9, v5 >> 12, (_RTL_BALANCED_NODE *)(v6 >> 12), a3, v7);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

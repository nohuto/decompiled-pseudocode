/*
 * XREFs of PopProcessorSetPep @ 0x1403B0080
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 */

__int64 __fastcall PopProcessorSetPep(unsigned int a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  v2 = *(_QWORD *)(a2 + 64);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 104) )
  {
    PopFxProcessorPlugin = *(_QWORD *)(a2 + 64);
    *(_QWORD *)(KeGetPrcb(a1) + 34088) = a2;
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}

/*
 * XREFs of HalAllocateCommonBufferVector @ 0x14050C510
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050D000 (HalpAllocateCommonBufferVectorInternal.c)
 */

__int64 __fastcall HalAllocateCommonBufferVector(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 result; // rax

  result = HalpAllocateCommonBufferVectorInternal(a1, a2, a3, a4, a5, a6, a7, a8, 1, a9);
  if ( (_DWORD)result == -1073741670 && *(_DWORD *)(*(_QWORD *)(a1 + 512) + 48LL) == 2 )
    return HalpAllocateCommonBufferVectorInternal(a1, a2, a3, a4, a5, a6, a7, a8, 0, a9);
  return result;
}

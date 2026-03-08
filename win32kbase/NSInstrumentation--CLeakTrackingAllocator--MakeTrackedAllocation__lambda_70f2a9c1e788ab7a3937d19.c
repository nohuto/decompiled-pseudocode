/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::MakeTrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64_&_ @ 0x1C019AD14
 * Callers:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1C019A980 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::MakeTrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64___(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned int *v3; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]

  v3 = *(unsigned int **)(a2 + 8);
  v5 = *a3;
  v11 = 0;
  v9 = 1LL;
  v6 = *v3;
  v7 = **(_QWORD **)a2 & 0xFFFFFFFFFFFFFFFDuLL;
  v10 = **(_DWORD **)(a2 + 16);
  result = ExAllocatePool3(v7, v5, v6, &v9, 1);
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 128));
  return result;
}

/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_0557cbb2832d1680ca92e9237d413628__unsigned___int64_ @ 0x1C019AD84
 * Callers:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___ @ 0x1C019A7B8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_0557cbb2832d1680ca92e9237d4136.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_0557cbb2832d1680ca92e9237d413628__unsigned___int64_(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned int *v3; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]

  v3 = *(unsigned int **)(a2 + 8);
  v5 = *a3;
  v11 = 0;
  v9 = 1LL;
  v6 = *v3;
  v7 = **(_QWORD **)a2 | 2LL;
  v10 = **(_DWORD **)(a2 + 16);
  result = ExAllocatePool3(v7, v5, v6, &v9, 1);
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  return result;
}

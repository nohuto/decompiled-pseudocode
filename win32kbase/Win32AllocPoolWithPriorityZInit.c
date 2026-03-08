/*
 * XREFs of Win32AllocPoolWithPriorityZInit @ 0x1C017D060
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1C019A980 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 */

__int64 __fastcall Win32AllocPoolWithPriorityZInit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = a4;
  v5[0] = &v6;
  v6 = a1;
  v5[1] = &v7;
  v5[2] = &v8;
  v7 = a3;
  return ((__int64 (__fastcall *)(NSInstrumentation::CLeakTrackingAllocator *, __int64, __int64, _QWORD *))NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___)(
           gpLeakTrackingAllocator,
           a2,
           a3,
           v5);
}

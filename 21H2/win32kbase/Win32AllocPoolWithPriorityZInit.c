/*
 * XREFs of Win32AllocPoolWithPriorityZInit @ 0x1C0167240
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___lambda_4aaddf2c61b427945b131cdbed9eec78___ @ 0x1C0179BA8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 */

__int64 __fastcall Win32AllocPoolWithPriorityZInit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int128 v5; // [rsp+30h] [rbp-40h]
  __int128 v6; // [rsp+50h] [rbp-20h] BYREF
  int *v7; // [rsp+60h] [rbp-10h]
  __int64 v8; // [rsp+80h] [rbp+10h] BYREF
  int v9; // [rsp+90h] [rbp+20h] BYREF
  int v10; // [rsp+98h] [rbp+28h] BYREF

  v10 = a4;
  *(_QWORD *)&v5 = &v8;
  v8 = a1;
  *((_QWORD *)&v5 + 1) = &v9;
  v7 = &v10;
  v9 = a3;
  v6 = v5;
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___lambda_4aaddf2c61b427945b131cdbed9eec78___(
           gpLeakTrackingAllocator,
           a2,
           a3,
           &v6);
}

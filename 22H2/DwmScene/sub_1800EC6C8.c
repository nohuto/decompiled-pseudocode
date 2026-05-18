/*
 * XREFs of sub_1800EC6C8 @ 0x1800EC6C8
 * Callers:
 *     sub_18008DDD8 @ 0x18008DDD8 (sub_18008DDD8.c)
 *     sub_18008F218 @ 0x18008F218 (sub_18008F218.c)
 *     sub_18008FA00 @ 0x18008FA00 (sub_18008FA00.c)
 *     sub_18009027C @ 0x18009027C (sub_18009027C.c)
 *     sub_1800E4960 @ 0x1800E4960 (sub_1800E4960.c)
 *     sub_1800E6880 @ 0x1800E6880 (sub_1800E6880.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800EC6C8(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 *v8; // rax
  _QWORD v9[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v10[5]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD pExceptionObject[11]; // [rsp+80h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000FD48(v10);
    v8 = sub_18000FD48(v9);
    sub_180027FF4(pExceptionObject, v8, 572, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 )
  {
    v7 = a3;
    do
    {
      sub_1800EC774(a1, a2, a4);
      a2 += 64LL;
      --v7;
    }
    while ( v7 );
  }
}

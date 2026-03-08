/*
 * XREFs of FreeScancodeMap @ 0x1C00D45D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall FreeScancodeMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9

  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 12640) )
  {
    v13 = *(char **)(SGDGetUserSessionState(v5, v4, v6, v7) + 12640);
    if ( v13 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
    *(_QWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 12640) = 0LL;
  }
  result = SGDGetUserSessionState(v5, v4, v6, v7);
  if ( *(_QWORD *)(result + 12648) )
  {
    v17 = *(char **)(SGDGetUserSessionState(v10, v9, v11, v12) + 12648);
    if ( v17 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v17);
    *(_QWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 12648) = 0LL;
    result = SGDGetUserSessionState(v22, v21, v23, v24);
    *(_DWORD *)(result + 12656) = 0;
  }
  return result;
}

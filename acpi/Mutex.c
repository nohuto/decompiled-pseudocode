/*
 * XREFs of Mutex @ 0x1C0050C50
 * Callers:
 *     <none>
 * Callees:
 *     PerformMutexDriverCallbacks @ 0x1C004C9F4 (PerformMutexDriverCallbacks.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     InitMutex @ 0x1C00509FC (InitMutex.c)
 */

__int64 __fastcall Mutex(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax

  v2 = (__int64 *)(a2 + 64);
  result = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             (__int64 *)(a2 + 64),
             0);
  if ( !(_DWORD)result )
  {
    result = InitMutex(a1, *(_QWORD *)(a1 + 320), *v2, *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL), 0);
    if ( !(_DWORD)result )
    {
      if ( gDeviceLockMutexSupported )
        return PerformMutexDriverCallbacks(0, *(_QWORD *)(*v2 + 96), a1, 0LL, 0);
    }
  }
  return result;
}

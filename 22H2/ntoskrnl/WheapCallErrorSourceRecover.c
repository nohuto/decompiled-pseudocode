/*
 * XREFs of WheapCallErrorSourceRecover @ 0x140612818
 * Callers:
 *     WheapAttemptErrorRecovery @ 0x140610CD4 (WheapAttemptErrorRecovery.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14038136C (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallErrorSourceRecover(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *ErrorSourceFunction)(__int64, __int64); // rax
  __int64 result; // rax

  ErrorSourceFunction = (__int64 (__fastcall *)(__int64, __int64))WheapGetErrorSourceFunction(a1, 3, 0);
  if ( ErrorSourceFunction )
    result = ErrorSourceFunction(a2, a3);
  else
    result = 3221225474LL;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}

/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0155170
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C011A880 (UserSetLastStatus.c)
 */

void *__fastcall NtUserDwmGetRemoteSessionOcclusionEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  int v4; // eax
  void *Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm(a1, a2, a3) )
  {
    v4 = ObOpenObjectByPointer(
           gpRemoteSessionOcclusionEvent,
           0,
           0LL,
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v4 < 0 )
      UserSetLastStatus(v4, 1);
  }
  else
  {
    UserSetLastError(5LL, v3);
  }
  return Handle;
}

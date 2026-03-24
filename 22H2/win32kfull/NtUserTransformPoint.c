/*
 * XREFs of NtUserTransformPoint @ 0x1C0111920
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C0111A60 (IsValidKernelDpiAwarenessContext.c)
 */

__int64 __fastcall NtUserTransformPoint(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v16[4]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 1;
  EnterCrit(0LL, 1LL);
  v15 = 0LL;
  v16[0] = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(a2) && (unsigned int)IsValidKernelDpiAwarenessContext(a3) )
  {
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (_QWORD *)MmUserProbeAddress;
    *v11 = *v11;
    v12 = *a1;
    v15 = *a1;
    if ( a4 && (a2 & 0xF) == 2 )
    {
      v16[0] = ValidateHmonitor(a4);
      v12 = v15;
    }
    if ( !v16[0] )
      v16[0] = GuessMonitorOverrideForCoordinateConversions(v12, a3, 0LL);
    LogicalToPhysicalDPIPoint(&v15, &v15, a3, v16);
    PhysicalToLogicalDPIPoint(&v15, &v15, a2, v16);
    *a1 = v15;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87LL, v9, v10);
  }
  UserSessionSwitchLeaveCrit(v13);
  return v8;
}

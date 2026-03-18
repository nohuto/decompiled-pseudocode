/*
 * XREFs of NtUserTransformRect @ 0x1C00E1960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00E1AF8 (IsValidKernelDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  __int64 v8; // rdx
  _BYTE *v9; // rdx
  int v10; // ebx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v14; // [rsp+38h] [rbp-70h]
  __int128 v15; // [rsp+58h] [rbp-50h] BYREF

  v5 = a3;
  v6 = a2;
  EnterSharedCrit(a1, a2, a3);
  v15 = 0LL;
  v13[0] = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(v6) && (unsigned int)IsValidKernelDpiAwarenessContext(v5) )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[15] = v9[15];
    v15 = *a1;
    v10 = 1;
    if ( a4 && (v6 & 0xF) == 2 )
      v13[0] = ValidateHmonitor(a4, v9);
    if ( !v13[0] )
    {
      LODWORD(v14) = (DWORD2(v15) + (int)v15) / 2;
      HIDWORD(v14) = (HIDWORD(v15) + DWORD1(v15)) / 2;
      v13[0] = GuessMonitorOverrideForCoordinateConversions(v14, v5, 0LL);
    }
    LogicalToPhysicalDPIRect(&v15, &v15, v5, v13);
    PhysicalToLogicalDPIRect(&v15, &v15, v6, v13);
    *a1 = v15;
  }
  else
  {
    v10 = 0;
    UserSetLastError(87LL, v8);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v10;
}

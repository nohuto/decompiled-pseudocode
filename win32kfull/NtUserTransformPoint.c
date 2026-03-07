__int64 __fastcall NtUserTransformPoint(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE *v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v16[4]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a3;
  v6 = a2;
  EnterSharedCrit(a1, a2, a3);
  v15 = 0LL;
  v16[0] = 0LL;
  if ( IsValidKernelDpiAwarenessContext(v6) && IsValidKernelDpiAwarenessContext(v5) )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[7] = v10[7];
    v11 = *a1;
    v15 = *a1;
    v12 = 1;
    if ( a4 && (v6 & 0xF) == 2 )
    {
      v16[0] = ValidateHmonitor(a4, v10, v8, v9);
      v11 = v15;
    }
    if ( !v16[0] )
      v16[0] = GuessMonitorOverrideForCoordinateConversions(v11, v5, 0LL, v9);
    LogicalToPhysicalDPIPoint(&v15, &v15, v5, v16);
    PhysicalToLogicalDPIPoint(&v15, &v15, v6, v16);
    *a1 = v15;
  }
  else
  {
    v12 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v13);
  return v12;
}

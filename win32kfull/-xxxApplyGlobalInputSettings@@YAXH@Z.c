void __fastcall xxxApplyGlobalInputSettings()
{
  struct tagQ *KeyboardDelegationTargetQ; // rdx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 ProcessWindowStation; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v12[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
  {
    if ( (GetDelegationFlags() & 1) != 0 )
      KeyboardDelegationTargetQ = (struct tagQ *)GetKeyboardDelegationTargetQ();
    else
      KeyboardDelegationTargetQ = (struct tagQ *)gpqForeground;
    if ( KeyboardDelegationTargetQ && (v1 = *((_QWORD *)KeyboardDelegationTargetQ + 15)) != 0 )
      v2 = *(_QWORD *)(v1 + 16);
    else
      v2 = 0LL;
  }
  else
  {
    KeyboardDelegationTargetQ = (struct tagQ *)gpqForeground;
    v2 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 120LL) + 16LL);
  }
  if ( v2 && (*(_DWORD *)(v2 + 488) & 1) == 0 && *(_QWORD *)(v2 + 784) )
  {
    if ( v2 == gptiCurrent )
    {
      if ( *(_QWORD *)(SGDGetUserSessionState(v2) + 13912) )
      {
        v4 = *(_QWORD *)(SGDGetUserSessionState(v3) + 13912);
        if ( v4 != *(_QWORD *)(gptiCurrent + 440LL) )
        {
          v12[2] = 0LL;
          v5 = *(_QWORD *)(SGDGetUserSessionState(v4) + 13912);
          v12[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v12;
          v12[1] = v5;
          HMLockObject(v5);
          v7 = *(_QWORD *)(SGDGetUserSessionState(v6) + 13912);
          ProcessWindowStation = GetProcessWindowStation(0LL);
          xxxInternalActivateKeyboardLayout(ProcessWindowStation, v7, 0LL, 0LL);
          ThreadUnlock1(v10, v9, v11);
        }
      }
    }
    else
    {
      PostEventMessageEx((struct tagTHREADINFO *)v2, KeyboardDelegationTargetQ, 0x12u, 0LL, 0, 0LL, 0LL, 0LL);
    }
  }
}

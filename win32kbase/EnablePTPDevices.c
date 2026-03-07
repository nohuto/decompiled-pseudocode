__int64 __fastcall EnablePTPDevices(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 i; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx

  EtwTraceTouchPadEnabledStatusChangeStart();
  v6 = *(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v3, v2, v4, v5) + 16840) + 1320LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  for ( i = **(_QWORD **)(*(_QWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 16840) + 1328LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_BYTE *)(i + 48) == 3
      && (v12 = *(_QWORD *)(i + 456), *(_WORD *)(v12 + 42) == 13)
      && *(_WORD *)(v12 + 40) == 14 )
    {
      RIMDeliverConfigRequest((struct RIMDEV *)i);
    }
    else if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
    {
      v13 = *(_QWORD *)(i + 472);
      if ( *(_DWORD *)(v13 + 24) == 7 )
        *(_DWORD *)(v13 + 360) ^= (*(_DWORD *)(v13 + 360) ^ (a1 << 11)) & 0x800;
    }
  }
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  *(_DWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 520) = a1;
  v18 = AccessPTPEnabledStatus(a1, 0, 0LL);
  if ( v18 )
  {
    PTPTelemetry::PTPConfigUpdateEx(0LL);
    UpdateInputSettingWnfState(175LL);
  }
  EtwTraceTouchPadEnabledStatusChangeStop();
  return v18;
}

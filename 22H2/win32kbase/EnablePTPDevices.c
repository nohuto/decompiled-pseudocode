/*
 * XREFs of EnablePTPDevices @ 0x1C011C1A0
 * Callers:
 *     NtUserEnableTouchPad @ 0x1C012E0C0 (NtUserEnableTouchPad.c)
 * Callees:
 *     AccessPTPEnabledStatus @ 0x1C000C2F0 (AccessPTPEnabledStatus.c)
 *     EtwTraceTouchPadEnabledStatusChangeStart @ 0x1C0123FF0 (EtwTraceTouchPadEnabledStatusChangeStart.c)
 *     EtwTraceTouchPadEnabledStatusChangeStop @ 0x1C0124020 (EtwTraceTouchPadEnabledStatusChangeStop.c)
 *     UpdateInputSettingWnfState @ 0x1C0138D70 (UpdateInputSettingWnfState.c)
 *     RIMDeliverConfigRequest @ 0x1C01613B4 (RIMDeliverConfigRequest.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A6A98 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall EnablePTPDevices(int a1)
{
  struct DEVICEINFO *i; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned int v5; // ebx

  EtwTraceTouchPadEnabledStatusChangeStart();
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 48) == 3 && (v3 = *((_QWORD *)i + 58), *(_WORD *)(v3 + 42) == 13) && *(_WORD *)(v3 + 40) == 14 )
    {
      RIMDeliverConfigRequest(i);
    }
    else if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
    {
      v4 = *((_QWORD *)i + 60);
      if ( *(_DWORD *)(v4 + 24) == 7 )
        *(_DWORD *)(v4 + 312) ^= (*(_DWORD *)(v4 + 312) ^ (a1 << 11)) & 0x800;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  gPTPEnabled = a1;
  v5 = AccessPTPEnabledStatus(a1, 0, 0LL);
  if ( v5 )
  {
    PTPTelemetry::PTPConfigUpdateEx(0LL);
    UpdateInputSettingWnfState(175LL);
  }
  EtwTraceTouchPadEnabledStatusChangeStop();
  return v5;
}

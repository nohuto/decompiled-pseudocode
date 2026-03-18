/*
 * XREFs of GreGetDeviceCaps @ 0x1C00642D0
 * Callers:
 *     EnforceColorDependentSettings @ 0x1C0062830 (EnforceColorDependentSettings.c)
 *     xxxSetSysColors @ 0x1C0062954 (xxxSetSysColors.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E400 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C002E448 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C0064394 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 */

__int64 __fastcall GreGetDeviceCaps(HDC a1, int a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  unsigned int DeviceCapsInternal; // ebx
  __int64 v7; // rdx
  int v8; // r8d
  _QWORD v10[6]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF

  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
    v11 = *((_QWORD *)gpDispInfo + 5);
    if ( v11 )
    {
      DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v11, a2);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      return DeviceCapsInternal;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v10, a1);
    if ( v10[0] )
    {
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        (NEEDDYNAMICMODECHANGESHARELOCK *)&v11,
        (*(_DWORD *)(*(_QWORD *)(v10[0] + 48LL) + 40LL) & 0x8000) == 0);
      v12 = *(_QWORD *)(v10[0] + 48LL);
      if ( v12 )
      {
        DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v12, a2);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v11, v7, v8);
        DCOBJ::~DCOBJ((DCOBJ *)v10);
        return DeviceCapsInternal;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v11, v4, v5);
    }
    else
    {
      EngSetLastError(6u);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v10);
  }
  return 0LL;
}

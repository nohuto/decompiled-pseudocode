/*
 * XREFs of NtGdiGetDeviceCapsAll @ 0x1C00CD460
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E400 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C0064394 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00CD50C (-NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAll(HDC a1, struct _DEVCAPS *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // r8d
  unsigned int DeviceCapsAllInternal; // ebx
  __int64 v9; // rdx
  int v10; // r8d
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD v16[6]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+28h] BYREF

  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
    v17 = *((_QWORD *)gpDispInfo + 5);
    if ( v17 )
    {
      DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v17, a2);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v13);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v14);
      }
      return DeviceCapsAllInternal;
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v12);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v15);
    }
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v16, a1);
    if ( v16[0] )
    {
      v4 = *(_QWORD *)(v16[0] + 48LL);
      v5 = *(_DWORD *)(v4 + 40) >> 15;
      LOBYTE(v5) = (*(_DWORD *)(v4 + 40) & 0x8000) == 0;
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v17, v5);
      v18 = *(_QWORD *)(v16[0] + 48LL);
      if ( v18 )
      {
        DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v18, a2);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v17, v9, v10);
        DCOBJ::~DCOBJ((DCOBJ *)v16);
        return DeviceCapsAllInternal;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v17, v6, v7);
    }
    else
    {
      EngSetLastError(6u);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v16);
  }
  return 0LL;
}

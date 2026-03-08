/*
 * XREFs of GreGetDeviceCaps @ 0x1C003EAF0
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0014608 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0014BB4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     EnforceColorDependentSettings @ 0x1C0015960 (EnforceColorDependentSettings.c)
 *     xxxSetSysColors @ 0x1C001A31C (xxxSetSysColors.c)
 *     NtGdiGetDeviceCaps @ 0x1C003EAD0 (NtGdiGetDeviceCaps.c)
 * Callees:
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003EBA4 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C003EC00 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C003EC60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0052A00 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 */

__int64 __fastcall GreGetDeviceCaps(HDC a1, int a2)
{
  __int64 v4; // rbx
  unsigned int DeviceCapsInternal; // ebx
  __int64 v7; // [rsp+20h] [rbp-10h] BYREF
  int v8; // [rsp+28h] [rbp-8h]
  int v9; // [rsp+2Ch] [rbp-4h]
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF

  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
    v10 = *((_QWORD *)gpDispInfo + 5);
    if ( v10 )
    {
      DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v10, a2);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
      return DeviceCapsInternal;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  }
  else
  {
    v7 = 0LL;
    v8 = 0;
    v9 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v7, a1);
    v4 = v7;
    if ( v7 )
    {
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        (NEEDDYNAMICMODECHANGESHARELOCK *)&v10,
        (*(_DWORD *)(*(_QWORD *)(v7 + 48) + 40LL) & 0x8000) == 0);
      v11 = *(_QWORD *)(v4 + 48);
      if ( v11 )
      {
        DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v11, a2);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v10);
        XDCOBJ::vUnlockFast((XDCOBJ *)&v7);
        return DeviceCapsInternal;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v10);
    }
    else
    {
      EngSetLastError(6u);
    }
    if ( v4 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v7);
  }
  return 0LL;
}

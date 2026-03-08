/*
 * XREFs of NtGdiGetDeviceCapsAll @ 0x1C018C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003EBA4 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C003EC00 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C018C054 (-NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAll(HDC a1, struct _DEVCAPS *a2)
{
  unsigned int DeviceCapsAllInternal; // ebx
  __int64 v6; // rbx
  _QWORD v7[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
    v8 = *((_QWORD *)gpDispInfo + 5);
    if ( v8 )
    {
      DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v8, a2);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
      return DeviceCapsAllInternal;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    v6 = v7[0];
    if ( v7[0] )
    {
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        (NEEDDYNAMICMODECHANGESHARELOCK *)&v8,
        (*(_DWORD *)(*(_QWORD *)(v7[0] + 48LL) + 40LL) & 0x8000) == 0);
      v9 = *(_QWORD *)(v6 + 48);
      if ( v9 )
      {
        DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v9, a2);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v8);
        XDCOBJ::vUnlockFast((XDCOBJ *)v7);
        return DeviceCapsAllInternal;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v8);
    }
    else
    {
      EngSetLastError(6u);
    }
    if ( v6 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return 0LL;
}

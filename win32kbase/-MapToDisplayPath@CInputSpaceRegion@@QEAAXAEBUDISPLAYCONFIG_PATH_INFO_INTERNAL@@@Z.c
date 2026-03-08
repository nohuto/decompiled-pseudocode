/*
 * XREFs of ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0010320
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00130D0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000FF84 (RIMUpdatePointerDeviceScalingInfo.c)
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C0030364 (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputSpaceRegion::MapToDisplayPath(
        CInputSpaceRegion *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2)
{
  _OWORD *v3; // rdi
  _OWORD *v4; // rsi
  int v5; // eax
  int v6[10]; // [rsp+20h] [rbp-28h] BYREF

  *((_BYTE *)this + 488) = 1;
  *((_OWORD *)this + 31) = *(_OWORD *)a2;
  *((_OWORD *)this + 32) = *((_OWORD *)a2 + 1);
  v3 = (_OWORD *)((char *)this + 168);
  v4 = (_OWORD *)((char *)this + 184);
  *((_OWORD *)this + 33) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 34) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 35) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 36) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 37) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 38) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 39) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 40) = *((_OWORD *)a2 + 9);
  *((_OWORD *)this + 41) = *((_OWORD *)a2 + 10);
  *((_OWORD *)this + 42) = *((_OWORD *)a2 + 11);
  *((_OWORD *)this + 43) = *((_OWORD *)a2 + 12);
  *((_QWORD *)this + 88) = *((_QWORD *)a2 + 26);
  *((_DWORD *)this + 4) |= 2u;
  *(_QWORD *)((char *)this + 36) = *((_QWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 11) = v5;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 26);
  *(_OWORD *)v6 = 0LL;
  RIMUpdatePointerDeviceScalingInfo((_DWORD *)this + 42, a2, v6, (__int64)this + 184);
  CInputSpaceRegion::PopulatePanelId(this);
  if ( *((_DWORD *)this + 48) == *(_DWORD *)v4 || *((_DWORD *)this + 49) == *((_DWORD *)this + 47) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 41LL);
    *v4 = *v3;
  }
}

/*
 * XREFs of GreGetDeviceGammaRamp @ 0x1C011DFF4
 * Callers:
 *     PrepareGammaRampData @ 0x1C011DDF0 (PrepareGammaRampData.c)
 *     NtGdiGetDeviceGammaRamp @ 0x1C02B7280 (NtGdiGetDeviceGammaRamp.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A9BEC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetDeviceGammaRampInternal @ 0x1C011E0A8 (GreGetDeviceGammaRampInternal.c)
 */

__int64 __fastcall GreGetDeviceGammaRamp(HDC a1, __int64 a2)
{
  unsigned int DeviceGammaRampInternal; // ebx
  _QWORD v5[7]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v6[120]; // [rsp+60h] [rbp-78h] BYREF

  DeviceGammaRampInternal = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] && !*(_DWORD *)(v5[0] + 32LL) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v6);
    DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v6, (struct XDCOBJ *)v5);
    DeviceGammaRampInternal = GreGetDeviceGammaRampInternal(*(_QWORD *)(v5[0] + 48LL), a2);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v6);
  }
  if ( !DeviceGammaRampInternal )
    EngSetLastError(0x57u);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return DeviceGammaRampInternal;
}

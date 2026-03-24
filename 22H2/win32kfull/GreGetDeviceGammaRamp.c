/*
 * XREFs of GreGetDeviceGammaRamp @ 0x1C011DC74
 * Callers:
 *     PrepareGammaRampData @ 0x1C011DA70 (PrepareGammaRampData.c)
 *     NtGdiGetDeviceGammaRamp @ 0x1C02B6650 (NtGdiGetDeviceGammaRamp.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E8E0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A9A2C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetDeviceGammaRampInternal @ 0x1C011DD28 (GreGetDeviceGammaRampInternal.c)
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

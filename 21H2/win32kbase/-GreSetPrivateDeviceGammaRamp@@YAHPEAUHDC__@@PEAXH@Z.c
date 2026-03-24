/*
 * XREFs of ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C014856C
 * Callers:
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C0148C30 (NtGdiSetPrivateDeviceGammaRamp.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C003AF78 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003B0A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003B478 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003B4D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A6E60 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0148604 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRamp(HDC a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // r8d
  _QWORD v8[6]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v9[112]; // [rsp+50h] [rbp-78h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] && !*(_DWORD *)(v8[0] + 32LL) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v9);
    DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v9, (struct XDCOBJ *)v8, v6);
    v5 = GreSetPrivateDeviceGammaRampInternal(*(HDEV *)(v8[0] + 48LL), a2, a3);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v9);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v5;
}

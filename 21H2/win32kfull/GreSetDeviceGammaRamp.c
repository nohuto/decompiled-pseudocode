/*
 * XREFs of GreSetDeviceGammaRamp @ 0x1C0028868
 * Callers:
 *     FadeDesktop @ 0x1C0028660 (FadeDesktop.c)
 *     RestoreGammaRamp @ 0x1C011DD60 (RestoreGammaRamp.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02B76B0 (NtGdiSetDeviceGammaRamp.c)
 * Callees:
 *     ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C0028A18 (-GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A9BEC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall GreSetDeviceGammaRamp(HDC a1, void *a2, int a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v10; // ecx
  unsigned int v12; // [rsp+34h] [rbp-D4h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v14[6]; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v15[2]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  int v19; // [rsp+98h] [rbp-70h]
  int v20; // [rsp+9Ch] [rbp-6Ch]
  int v21; // [rsp+A0h] [rbp-68h]
  int v22; // [rsp+A4h] [rbp-64h]
  unsigned int v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+ACh] [rbp-5Ch]

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( v14[0] && !*(_DWORD *)(v14[0] + 32LL) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15);
    DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v14);
    v7 = GreSetDeviceGammaRampInternal(
           *(HDEV *)(v14[0] + 48LL),
           a2,
           a3,
           a4,
           (enum _SETGAMMARAMP_FAILED_REASON *)v13,
           &v12);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  if ( CurrentProcessWin32Process )
  {
    v10 = *(_DWORD *)(CurrentProcessWin32Process + 288);
    if ( (v10 & 1) == 0 )
    {
      *(_DWORD *)(CurrentProcessWin32Process + 288) = v10 | 1;
      v20 = 0;
      v15[0] = 6;
      v15[1] = 64;
      v19 = 0;
      v18 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      v21 = 94;
      v22 = 2;
      v23 = v7 == 0 ? 0xC0000001 : 0;
      v24 = 0;
      DrvDxgkWriteDiagEntry(v15);
    }
  }
  if ( !v7 )
    EngSetLastError(0x57u);
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v7;
}

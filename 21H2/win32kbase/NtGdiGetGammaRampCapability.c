/*
 * XREFs of NtGdiGetGammaRampCapability @ 0x1C0148B90
 * Callers:
 *     <none>
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0010CB4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C003AF78 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003B0A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003B478 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003B4D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A6E60 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C014883C (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 */

_BOOL8 __fastcall NtGdiGetGammaRampCapability(HDC a1)
{
  BOOL v1; // ebx
  int v2; // r8d
  _QWORD v4[6]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v5[120]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v6; // [rsp+D8h] [rbp+10h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] && !*(_DWORD *)(v4[0] + 32LL) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v5);
    DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v5, (struct XDCOBJ *)v4, v2);
    v6 = *(_QWORD *)(v4[0] + 48LL);
    if ( (unsigned int)PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v6) )
      v1 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v6) != 0;
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v5);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v4);
  return v1;
}

/*
 * XREFs of NtGdiCloseFigure @ 0x1C02C0C80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C015A6C4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0284C7C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiCloseFigure(HDC a1)
{
  ULONG v1; // ecx
  DC *v3[2]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v4[32]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v5[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v6; // [rsp+58h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( !v3[0] )
  {
    v1 = 87;
LABEL_3:
    EngSetLastError(v1);
LABEL_12:
    DCOBJ::~DCOBJ((DCOBJ *)v3);
    return 0LL;
  }
  if ( (*((_DWORD *)v3[0] + 62) & 1) == 0 )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v5, v3);
  if ( !v6 || !EPATHOBJ::bCloseFigure((EPATHOBJ *)v5) )
  {
    EngSetLastError(8u);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
    goto LABEL_12;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
  if ( v3[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v4);
  return 1LL;
}

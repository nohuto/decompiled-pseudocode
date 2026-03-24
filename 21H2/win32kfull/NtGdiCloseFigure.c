/*
 * XREFs of NtGdiCloseFigure @ 0x1C0143F00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0144D0C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0144D6C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiCloseFigure(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  _QWORD v4[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v5[32]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v6[8]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v7; // [rsp+58h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = 0;
  if ( !v4[0] )
  {
    v2 = 87;
LABEL_5:
    EngSetLastError(v2);
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v4[0] + 248LL) & 1) == 0 )
  {
    v2 = 1003;
    goto LABEL_5;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, (struct XDCOBJ *)v4);
  if ( v7 && EPATHOBJ::bCloseFigure((EPATHOBJ *)v6) )
    v1 = 1;
  else
    EngSetLastError(8u);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
LABEL_11:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v4);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v5);
  return v1;
}

/*
 * XREFs of GreGetBitmapDpiScaleValue @ 0x1C029ED3C
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F1368 (zzzUpdateWindowsAfterModeChange.c)
 *     NtGdiGetBitmapDpiScaleValue @ 0x1C02AE670 (NtGdiGetBitmapDpiScaleValue.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     bFToL @ 0x1C00FB538 (bFToL.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDpiScaleValue(HSURF a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  unsigned int v8; // [rsp+68h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)v6, a1);
  v8 = 0;
  v2 = v7;
  if ( !v7 || (*(_DWORD *)(v7 + 116) & 0x800) == 0 || (v3 = bFToL(*(float *)(v7 + 660), (int *)&v8, 6u), v4 = v8, !v3) )
    v4 = 1;
  if ( v2 )
    DEC_SHARE_REF_CNT(v2, v1);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v6);
  return v4;
}

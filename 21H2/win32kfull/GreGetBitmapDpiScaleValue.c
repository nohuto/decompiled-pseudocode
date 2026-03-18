/*
 * XREFs of GreGetBitmapDpiScaleValue @ 0x1C029D640
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00B7E98 (zzzUpdateWindowsAfterModeChange.c)
 *     NtGdiGetBitmapDpiScaleValue @ 0x1C02ACDA0 (NtGdiGetBitmapDpiScaleValue.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDpiScaleValue(HSURF a1)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // edi
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  unsigned int v7; // [rsp+68h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)v5, a1);
  v7 = 0;
  v1 = v6;
  if ( !v6 || (*(_DWORD *)(v6 + 116) & 0x800) == 0 || (v2 = bFToL(*(float *)(v6 + 660), (int *)&v7, 6u), v3 = v7, !v2) )
    v3 = 1;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v5);
  return v3;
}

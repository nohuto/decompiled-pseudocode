/*
 * XREFs of GreIsReusedDeviceDependentBitmap @ 0x1C00B8138
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00B7E98 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreIsReusedDeviceDependentBitmap(HSURF a1)
{
  unsigned int v1; // ebx
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v3, a1);
  v1 = 0;
  if ( v4 )
  {
    v1 = *(_DWORD *)(v4 + 116) & 0x2000;
    DEC_SHARE_REF_CNT(v4);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v3);
  return v1;
}

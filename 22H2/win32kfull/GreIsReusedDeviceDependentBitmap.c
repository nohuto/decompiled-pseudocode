/*
 * XREFs of GreIsReusedDeviceDependentBitmap @ 0x1C00F28A0
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F1018 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreIsReusedDeviceDependentBitmap(HSURF a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v4, a1);
  v2 = 0;
  if ( v5 )
  {
    v2 = *(_DWORD *)(v5 + 116) & 0x2000;
    DEC_SHARE_REF_CNT(v5, v1);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v4);
  return v2;
}

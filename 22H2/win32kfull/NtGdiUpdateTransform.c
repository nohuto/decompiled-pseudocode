/*
 * XREFs of NtGdiUpdateTransform @ 0x1C02D0E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiUpdateTransform(HDC a1)
{
  unsigned int v1; // ebx
  DC *v2; // rax
  DC *v4[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v2 = v4[0];
  if ( v4[0] )
  {
    DC::vUpdateWtoDXform(v4[0]);
    v2 = v4[0];
  }
  else
  {
    v1 = 0;
  }
  if ( v2 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v5);
  return v1;
}

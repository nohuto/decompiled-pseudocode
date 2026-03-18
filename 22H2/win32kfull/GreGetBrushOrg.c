/*
 * XREFs of GreGetBrushOrg @ 0x1C02A7E0C
 * Callers:
 *     _DrawIconEx @ 0x1C0028030 (_DrawIconEx.c)
 *     MNEraseBackground @ 0x1C0234904 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C023534C (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBrushOrg(HDC a1, _QWORD *a2)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    *a2 = *(_QWORD *)(v4[0] + 124LL);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 1LL;
  }
  else
  {
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v5);
    return 0LL;
  }
}

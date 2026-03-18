/*
 * XREFs of GreGetAspectRatioFilter @ 0x1C028E450
 * Callers:
 *     <none>
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0113D6C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0113DB0 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v4 = v6[0];
  if ( !v6[0] )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 0LL;
  }
  v8 = *(_QWORD *)(v6[0] + 48LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v6[0] + 976LL) + 236LL) & 1) != 0 )
  {
    *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v8);
    v5 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v8);
    v4 = v6[0];
  }
  else
  {
    *a2 = 0;
    v5 = 0;
  }
  a2[1] = v5;
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v7);
  return 1LL;
}

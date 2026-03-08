/*
 * XREFs of ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C028756C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C00AB7D0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     NtGdiCloseFigure @ 0x1C02C34E0 (NtGdiCloseFigure.c)
 *     NtGdiFillPath @ 0x1C02C3630 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02C37C0 (NtGdiFlattenPath.c)
 *     NtGdiPathToRegion @ 0x1C02C3B60 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02C3CB0 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02C3E50 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02C4020 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02C4190 (NtGdiWidenPath.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C014CA9A (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C02876B8 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, DC **a2)
{
  int v4; // eax
  struct HPATH__ *v5; // rdx
  _BYTE v7[8]; // [rsp+20h] [rbp-108h] BYREF
  struct HPATH__ **v8; // [rsp+28h] [rbp-100h]
  _BYTE v9[8]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v10; // [rsp+A8h] [rbp-80h]

  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  v4 = *((_DWORD *)*a2 + 62);
  if ( (v4 & 2) != 0 )
  {
    *((_DWORD *)*a2 + 62) = v4 & 0xFFFFFFFD;
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v9, *((struct HPATH__ **)*a2 + 25));
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v7);
    if ( v8 && v10 && EPATHOBJ::bClone((EPATHOBJ *)v7, (struct EPATHOBJ *)v9) )
      v5 = *v8;
    else
      v5 = 0LL;
    DC::hpath(*a2, v5);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v7);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v9);
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 28) = 1;
  }
  EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 25));
  return this;
}

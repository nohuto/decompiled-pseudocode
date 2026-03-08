/*
 * XREFs of PopThreadGuardedObject @ 0x1C00453C0
 * Callers:
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0027274 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     NtGdiOpenDCW @ 0x1C003D110 (NtGdiOpenDCW.c)
 *     GdiThreadCallout @ 0x1C00420F0 (GdiThreadCallout.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?MultiUserGreDeleteXLATE@@YAXXZ @ 0x1C009FEE4 (-MultiUserGreDeleteXLATE@@YAXXZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00AAC50 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C017F36C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0180540 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0185410 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0185500 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C0185820 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 *     GrePopThreadGuardedObject @ 0x1C0185CF0 (GrePopThreadGuardedObject.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0197C30 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall PopThreadGuardedObject(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx

  if ( a1 )
  {
    KeEnterCriticalRegion();
    v2 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    a1[1] = a1;
    *a1 = a1;
    KeLeaveCriticalRegion();
  }
}

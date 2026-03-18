/*
 * XREFs of PopThreadGuardedObject @ 0x1C0023630
 * Callers:
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0065CBC (--1AUTO_TGO@@MEAA@XZ.c)
 *     NtGdiOpenDCW @ 0x1C0071250 (NtGdiOpenDCW.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0090DC0 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     GdiThreadCallout @ 0x1C00934E0 (GdiThreadCallout.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB874 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00CD710 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00CDB30 (GreCreatePolyPolygonRgnInternal.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C00CDD80 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00D00A0 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     GrePopThreadGuardedObject @ 0x1C016BEF0 (GrePopThreadGuardedObject.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
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

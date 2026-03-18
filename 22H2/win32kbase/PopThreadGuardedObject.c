/*
 * XREFs of PopThreadGuardedObject @ 0x1C003CB00
 * Callers:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C00158A4 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C003F2C0 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C0049DDC (--1DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 *     NtGdiOpenDCW @ 0x1C005A5E0 (NtGdiOpenDCW.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006051C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0060894 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 *     GdiThreadCallout @ 0x1C008AB80 (GdiThreadCallout.c)
 *     ?MultiUserGreDeleteXLATE@@YAXXZ @ 0x1C00A98BC (-MultiUserGreDeleteXLATE@@YAXXZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00D24A8 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1C00D28D4 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00D2A30 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00D2E04 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 *     ??1COLORSPACEREF@@QEAA@XZ @ 0x1C00D325C (--1COLORSPACEREF@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0151BFC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0152DC0 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154FD0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0158750 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0158840 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C0158B60 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 *     GrePopThreadGuardedObject @ 0x1C0159030 (GrePopThreadGuardedObject.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0159D78 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD90 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C016AE70 (GreCreatePolyPolygonRgnInternal.c)
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

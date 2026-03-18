/*
 * XREFs of GreReleaseHmgrSemaphore @ 0x1C00427F0
 * Callers:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00182FC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00350B8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     HmgNextOwned @ 0x1C0035880 (HmgNextOwned.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z @ 0x1C0035A9C (-vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0035FD4 (-vCleanupDCs@@YAXK@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003A440 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     HmgAlloc @ 0x1C003DD30 (HmgAlloc.c)
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     HmgDecProcessHandleCount @ 0x1C003F938 (HmgDecProcessHandleCount.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C003FAF4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C0040440 (HmgIncProcessHandleCountEx.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0045760 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0060078 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 *     HmgFree @ 0x1C0088BA0 (HmgFree.c)
 *     HmgAllocateObjectAttr @ 0x1C008A91C (HmgAllocateObjectAttr.c)
 *     HmgFreeDcAttr @ 0x1C008AE88 (HmgFreeDcAttr.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0099840 (HmgShareUnlockRemoveObject.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C00A1FE8 (HMChangeOwnerPheProcessWorker.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00B41E0 (vDynamicConvertNewSurfaceDCs.c)
 *     GreMarkDCUnreadable @ 0x1C00C2748 (GreMarkDCUnreadable.c)
 *     HmgFreeObjectAttr @ 0x1C00C4E90 (HmgFreeObjectAttr.c)
 *     HmgAllocateDcAttr @ 0x1C00E02F0 (HmgAllocateDcAttr.c)
 *     GreGetBrushColor @ 0x1C0150DF0 (GreGetBrushColor.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0158E5C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C0159470 (HmgNextGarbageCollectible.c)
 *     pProcessDfbSurfacesInternal @ 0x1C015AC60 (pProcessDfbSurfacesInternal.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0160B38 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0161E64 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0161F78 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C0169EE0 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1C016A180 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreReleaseHmgrSemaphore(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v2 = *(_QWORD *)(v1 + 1912);
  result = SGDGetSessionState(v3);
  v6 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v6 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v6,
               (unsigned int)&LockRelease,
               v5,
               v2,
               (__int64)L"GreBaseGlobals.hsemHmgr");
  v7 = *(struct _ERESOURCE **)(v1 + 1912);
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    return PsLeavePriorityRegion();
  }
  return result;
}

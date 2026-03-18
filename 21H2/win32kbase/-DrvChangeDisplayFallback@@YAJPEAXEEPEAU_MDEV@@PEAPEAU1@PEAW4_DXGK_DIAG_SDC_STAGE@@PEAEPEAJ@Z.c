/*
 * XREFs of ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00C2744
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 */

__int64 __fastcall DrvChangeDisplayFallback(
        struct _ERESOURCE *a1,
        unsigned __int8 a2,
        char a3,
        struct _MDEV *a4,
        struct _MDEV **a5,
        enum _DXGK_DIAG_SDC_STAGE *a6,
        bool *a7,
        int *a8)
{
  int v10; // esi
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // r8d

  v10 = a2;
  if ( gForceDisconnect )
    WdLogSingleEntry0(1LL);
  if ( a3 )
    gForceDisconnect = 1;
  if ( gOldModeChange )
    WdLogSingleEntry0(1LL);
  gOldModeChange = 1;
  v12 = DrvChangeDisplaySettingsInternal(0LL, 0LL, 0LL, a1, 0, 1, a4, (void **)a5, 0, 1, v10, 1, 0);
  gOldModeChange = 0;
  v13 = v12;
  switch ( v12 )
  {
    case 0:
      goto LABEL_8;
    case 2:
      if ( (_BYTE)v10 || *a5 )
        WdLogSingleEntry0(1LL);
LABEL_8:
      v14 = 0;
      *(_DWORD *)a6 = 18;
      *a7 = v13 == 2;
      goto LABEL_9;
    case 3:
      WdLogSingleEntry0(1LL);
      break;
  }
  v14 = -1073741823;
  *(_DWORD *)a6 = 54;
LABEL_9:
  gForceDisconnect = 0;
  if ( a8 )
    *a8 = v13;
  return v14;
}

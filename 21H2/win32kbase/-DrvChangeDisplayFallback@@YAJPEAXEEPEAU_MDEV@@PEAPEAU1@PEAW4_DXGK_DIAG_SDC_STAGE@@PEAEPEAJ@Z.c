/*
 * XREFs of ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00B404C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0019050 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0012620 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 */

__int64 __fastcall DrvChangeDisplayFallback(
        struct _ERESOURCE *a1,
        __int64 a2,
        char a3,
        struct _MDEV *a4,
        struct _MDEV **a5,
        enum _DXGK_DIAG_SDC_STAGE *a6,
        bool *a7,
        int *a8)
{
  int v10; // edi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  unsigned int v16; // r8d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v10 = (unsigned __int8)a2;
  if ( gForceDisconnect )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a3 )
    gForceDisconnect = 1;
  if ( gOldModeChange )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  gOldModeChange = 1;
  v12 = DrvChangeDisplaySettingsInternal(0LL, 0LL, 0LL, a1, 0, 1, a4, a5, 0, 1, v10, 1, 0);
  gOldModeChange = 0;
  v15 = v12;
  switch ( v12 )
  {
    case 0:
      goto LABEL_8;
    case 2:
      if ( (_BYTE)v10 || *a5 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v14, v13);
        WdLogEvent5_WdAssertion(v21);
      }
LABEL_8:
      v16 = 0;
      *(_DWORD *)a6 = 18;
      *a7 = v15 == 2;
      goto LABEL_9;
    case 3:
      v20 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v20);
      break;
  }
  v16 = -1073741823;
  *(_DWORD *)a6 = 16;
LABEL_9:
  gForceDisconnect = 0;
  if ( a8 )
    *a8 = v15;
  return v16;
}

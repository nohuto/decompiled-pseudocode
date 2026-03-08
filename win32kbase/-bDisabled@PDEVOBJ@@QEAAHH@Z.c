/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00273B4
 * Callers:
 *     DrvDisableMDEV @ 0x1C001D710 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C001D978 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001DC20 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     bDynamicModeChange @ 0x1C006DF9C (bDynamicModeChange.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D7E30 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0027484 (-SETFLAG@@YAXHAECKK@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C006EFB0 (HmgSafeNextObjt.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x400u);
  v5 = *(_QWORD *)this;
  if ( a2 || _bittest((const signed __int32 *)(v5 + 40), 0x11u) )
  {
    *(_QWORD *)(v5 + 32) = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 24);
    if ( v6 )
    {
      if ( _bittest((const signed __int32 *)(v6 + 40), 0x11u) )
      {
        if ( !*(_QWORD *)(v5 + 32) )
        {
          v4 = *(_QWORD *)(v6 + 1768);
          v16 = *(_QWORD *)(*(_QWORD *)v4 + 48LL);
          if ( v5 != v16 )
            *(_QWORD *)(v5 + 32) = v16;
        }
      }
    }
  }
  v7 = *(_QWORD *)this;
  GreAcquireHmgrSemaphore(v4);
  v9 = 0;
  v17 = 0LL;
  while ( 1 )
  {
    LOBYTE(v8) = 1;
    v9 = HmgSafeNextObjt(v9, v8, &v17);
    if ( !v9 )
      break;
    if ( !*(_DWORD *)(v17 + 32) && *(_QWORD *)(v17 + 48) == v7 )
    {
      v12 = *(_DWORD *)(v17 + 36);
      if ( a2 )
        v13 = v12 | 0x1000;
      else
        v13 = v12 & 0xFFFFEFFF;
      *(_DWORD *)(v17 + 36) = v13;
    }
  }
  v14 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 0x400;
  GreReleaseHmgrSemaphore(v10, v8, v11, 0LL);
  return v14;
}

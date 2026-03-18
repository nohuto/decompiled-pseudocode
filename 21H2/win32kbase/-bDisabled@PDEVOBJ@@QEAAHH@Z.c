/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077CD4 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0078130 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C00783A4 (DrvEnableMDEV.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D3B90 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0061BFC (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 Objt; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  __int64 v18; // rax

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x400u);
  v6 = *(_QWORD *)this;
  if ( a2 || _bittest((const signed __int32 *)(v6 + 40), 0x11u) )
  {
    *(_QWORD *)(v6 + 32) = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 24);
    if ( v7 )
    {
      if ( _bittest((const signed __int32 *)(v7 + 40), 0x11u) )
      {
        if ( !*(_QWORD *)(v6 + 32) )
        {
          v5 = *(_QWORD *)(v7 + 1768);
          v18 = *(_QWORD *)(*(_QWORD *)v5 + 48LL);
          if ( v6 != v18 )
            *(_QWORD *)(v6 + 32) = v18;
        }
      }
    }
  }
  v8 = *(_QWORD *)this;
  GreAcquireHmgrSemaphore(v5, v4, v6);
  v10 = 0LL;
  while ( 1 )
  {
    LOBYTE(v9) = 1;
    Objt = HmgSafeNextObjt(v10, v9);
    if ( !Objt )
      break;
    v10 = *(_QWORD *)Objt;
    if ( !*(_DWORD *)(Objt + 32) && *(_QWORD *)(Objt + 48) == v8 )
    {
      v14 = *(_DWORD *)(Objt + 36);
      if ( a2 )
        v15 = v14 | 0x1000;
      else
        v15 = v14 & 0xFFFFEFFF;
      *(_DWORD *)(Objt + 36) = v15;
    }
  }
  v16 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 0x400;
  GreReleaseHmgrSemaphore(v12, v9, v13);
  return v16;
}

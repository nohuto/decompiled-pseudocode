/*
 * XREFs of ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0223CC0
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C01CA148 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C03CD618 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000469C (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9___ @ 0x1C0007824 (DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9___.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00093B0 (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     MonitorGetMonitorHandle @ 0x1C0171B54 (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01AE14C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetAdvancedColorMetadataOverride @ 0x1C03BF8C4 (MonitorGetAdvancedColorMetadataOverride.c)
 */

__int64 __fastcall PopulateHDRMetadataFromDisplay(
        unsigned int a1,
        struct ADAPTER_DISPLAY *this,
        struct _D3DDDI_HDR_METADATA_HDR10 *a3,
        enum _D3DDDI_HDR_METADATA_TYPE *a4)
{
  __int64 v4; // rbx
  __int64 v7; // r8
  int MonitorHandle; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  char v14; // bl
  __int64 v15; // r9
  int AdvancedColorMetadataOverride; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-20h] BYREF
  char v23; // [rsp+60h] [rbp-10h]
  struct ADAPTER_DISPLAY *v24; // [rsp+88h] [rbp+18h] BYREF

  v24 = this;
  v4 = a1;
  if ( this && a3 && a4 && *((_DWORD *)this + 24) > a1 && ADAPTER_DISPLAY::IsVidPnSourceActive(this, a1) )
  {
    v7 = (__int64)v24;
    v20[0] = 0LL;
    LOBYTE(v7) = 1;
    MonitorHandle = MonitorGetMonitorHandle(
                      *((_QWORD *)v24 + 2),
                      *(unsigned int *)(4000 * v4 + *((_QWORD *)v24 + 16) + 1088),
                      v7,
                      PopulateHDRMetadataFromDisplay,
                      v20);
    v10 = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v9);
      WdLogSingleEntry2(3LL, v10, CurrentProcess);
      return (unsigned int)v10;
    }
    *(_QWORD *)&v21 = &v24;
    *((_QWORD *)&v21 + 1) = v20;
    DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9_((__int64)v22, &v21);
    if ( v20[0] )
    {
      MONITOR_MGR::AcquireMonitorShared(&v21, v20[0]);
      if ( (_QWORD)v21 )
      {
        v14 = *(_BYTE *)(*(_QWORD *)(v21 + 224) + 428LL);
        ExReleaseResourceLite((PERESOURCE)(v21 + 24));
        KeLeaveCriticalRegion();
        if ( !v14 )
        {
          LODWORD(v10) = -1073741822;
          goto LABEL_20;
        }
        AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(v20[0], a3);
        v10 = AdvancedColorMetadataOverride;
        if ( AdvancedColorMetadataOverride >= 0 )
        {
          *a4 = D3DDDI_HDR_METADATA_TYPE_HDR10;
          LODWORD(v10) = 0;
          goto LABEL_20;
        }
        v18 = PsGetCurrentProcess(v17);
        v19 = v10;
LABEL_19:
        WdLogSingleEntry2(3LL, v19, v18);
LABEL_20:
        if ( v23 )
          MonitorReleaseMonitorHandle(
            *(_QWORD *)(*(_QWORD *)v22[0] + 16LL),
            *(_QWORD *)v22[1],
            PopulateHDRMetadataFromDisplay,
            v15);
        return (unsigned int)v10;
      }
      LODWORD(v10) = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v21);
    }
    else
    {
      LODWORD(v10) = -1073741811;
    }
    v18 = PsGetCurrentProcess(v13);
    v19 = (int)v10;
    goto LABEL_19;
  }
  return 3221225485LL;
}

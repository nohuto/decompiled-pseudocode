/*
 * XREFs of ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C02A45D0
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C02A8AB0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A4B4 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e___ @ 0x1C001D704 (DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e___.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     MonitorGetMonitorHandle @ 0x1C0133530 (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetAdvancedColorMetadataOverride @ 0x1C02F3EC8 (MonitorGetAdvancedColorMetadataOverride.c)
 *     MonitorGetIsAdvancedColorMetadataOverridden @ 0x1C02F41FC (MonitorGetIsAdvancedColorMetadataOverridden.c)
 */

__int64 __fastcall PopulateHDRMetadataFromDisplay(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        unsigned __int8 **a2,
        enum _D3DDDI_HDR_METADATA_TYPE *a3,
        unsigned int *a4)
{
  unsigned __int8 *v8; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  ADAPTER_DISPLAY *v12; // rcx
  __int64 VidPnSourceId; // rdx
  int MonitorHandle; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int IsAdvancedColorMetadataOverridden; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int8 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int AdvancedColorMetadataOverride; // eax
  __int64 v38; // rdi
  unsigned __int8 *v39; // rax
  struct DXGCONTEXT *v41; // [rsp+30h] [rbp-29h] BYREF
  struct HDXGMONITOR__ *v42; // [rsp+38h] [rbp-21h] BYREF
  __int128 v43; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v44[16]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v45; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v46; // [rsp+68h] [rbp+Fh]
  char v47; // [rsp+70h] [rbp+17h]
  char v48[8]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v49; // [rsp+80h] [rbp+27h]
  char v50; // [rsp+88h] [rbp+2Fh]
  char v51; // [rsp+C0h] [rbp+67h] BYREF

  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  v8 = 0LL;
  v41 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v44, *a1->pContextList, Current, &v41, 0);
  if ( v41 )
  {
    v10 = *((_QWORD *)v41 + 2);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 1848);
      if ( v11 )
      {
        v12 = *(ADAPTER_DISPLAY **)(v11 + 2696);
        VidPnSourceId = a1->VidPnSourceId;
        if ( *((_DWORD *)v12 + 20) > (unsigned int)VidPnSourceId )
        {
          if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v12, VidPnSourceId) )
          {
            v50 = 0;
            v49 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
            v42 = 0LL;
            MonitorHandle = MonitorGetMonitorHandle(
                              *(_QWORD *)(*((_QWORD *)v41 + 2) + 1848LL),
                              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 1848LL)
                                                                      + 2696LL)
                                                          + 112LL)
                                              + 3968LL * a1->VidPnSourceId
                                              + 1068),
                              1u,
                              PopulateHDRMetadataFromDisplay,
                              &v42);
            v18 = MonitorHandle;
            if ( MonitorHandle < 0 )
            {
              v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
              *(_QWORD *)(v19 + 24) = v18;
              *(_QWORD *)(v19 + 32) = PsGetCurrentProcess(v21, v20, v22, v23);
              WdLogEvent5_WdWarning(v19);
LABEL_20:
              if ( v50 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
              goto LABEL_28;
            }
            *(_QWORD *)&v43 = &v41;
            *((_QWORD *)&v43 + 1) = &v42;
            DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e_((__int64)&v45, &v43);
            v51 = 0;
            IsAdvancedColorMetadataOverridden = MonitorGetIsAdvancedColorMetadataOverridden(v42, &v51);
            v18 = IsAdvancedColorMetadataOverridden;
            if ( IsAdvancedColorMetadataOverridden < 0 )
              goto LABEL_17;
            if ( v51 )
            {
              v28 = (unsigned __int8 *)operator new[](0x1CuLL, 0x4B677844u, PagedPool);
              v8 = v28;
              if ( !v28 )
              {
                v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
                v18 = -1073741801LL;
                goto LABEL_18;
              }
              AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(v42, v28);
              v18 = AdvancedColorMetadataOverride;
              if ( AdvancedColorMetadataOverride < 0 )
              {
LABEL_17:
                v32 = WdLogNewEntry5_WdWarning(v26, v25, v27);
LABEL_18:
                v38 = v32;
                *(_QWORD *)(v32 + 24) = v18;
                *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v34, v33, v35, v36);
                WdLogEvent5_WdWarning(v38);
                if ( v47 )
                  MonitorReleaseMonitorHandle(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45 + 16LL) + 1848LL),
                    *v46,
                    PopulateHDRMetadataFromDisplay);
                goto LABEL_20;
              }
              *a3 = D3DDDI_HDR_METADATA_TYPE_HDR10;
              v39 = v8;
              *a4 = 28;
              v8 = 0LL;
              *a2 = v39;
            }
            if ( v47 )
              MonitorReleaseMonitorHandle(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45 + 16LL) + 1848LL),
                *v46,
                PopulateHDRMetadataFromDisplay);
            if ( v50 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
          }
        }
      }
    }
  }
  LODWORD(v18) = 0;
LABEL_28:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v44);
  if ( v8 )
    operator delete[](v8);
  return (unsigned int)v18;
}

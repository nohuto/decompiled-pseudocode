/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C020F5FC
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C026B9EC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer @ 0x1C003A0C4 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C003A478 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C003A510 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqjzqqx_EtwWriteTransfer @ 0x1C003A5B8 (McTemplateK0pqqqqjzqqx_EtwWriteTransfer.c)
 *     McTemplateK0pqqqxx_EtwWriteTransfer @ 0x1C003A7AC (McTemplateK0pqqqxx_EtwWriteTransfer.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0101D60 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DpiReportAdapter @ 0x1C0195528 (DpiReportAdapter.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C0196180 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0214D94 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0217214 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  int *AdapterType; // rax
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  wchar_t *v11; // r14
  unsigned int i; // esi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 j; // rbp
  unsigned int k; // esi
  __int64 v18; // rcx
  __int64 v19; // rax
  _DWORD *v20; // rdi
  int v21; // r14d
  __int64 m; // rbp
  __int64 v23; // rdi
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // rcx
  ADAPTER_DISPLAY *v27; // rcx
  ADAPTER_RENDER *v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-118h]
  __int64 v30; // [rsp+20h] [rbp-118h]
  __int64 v31; // [rsp+28h] [rbp-110h]
  __int64 v32; // [rsp+28h] [rbp-110h]
  __int64 v33; // [rsp+30h] [rbp-108h]
  __int64 v34; // [rsp+30h] [rbp-108h]
  __int64 v35; // [rsp+38h] [rbp-100h]
  __int64 v36; // [rsp+50h] [rbp-E8h]
  __int64 v37; // [rsp+58h] [rbp-E0h]
  int v38; // [rsp+C0h] [rbp-78h]
  int v39; // [rsp+D8h] [rbp-60h]
  struct _UNICODE_STRING v40; // [rsp+100h] [rbp-38h] BYREF
  struct _STRING DestinationString; // [rsp+110h] [rbp-28h] BYREF
  int v42; // [rsp+140h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 9394LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( bTracingEnabled )
  {
    v5 = *((_QWORD *)this + 34);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v42);
    v7 = *((_DWORD *)this + 511);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v8 = v7 >> 14;
      LOBYTE(v8) = v8 & 7;
      McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer(
        v8,
        &EventReportAdapter,
        v7 >> 31,
        *((_QWORD *)this + 27),
        (char)this,
        *((_DWORD *)this + 362),
        *((_QWORD *)this + 249),
        *((_DWORD *)this + 500),
        *((_QWORD *)this + 251),
        *((_DWORD *)this + 504),
        *((_DWORD *)this + 505),
        *((_DWORD *)this + 507),
        *((_DWORD *)this + 508),
        *((_DWORD *)this + 509),
        *((_DWORD *)this + 512),
        *((_DWORD *)this + 506),
        *((_DWORD *)this + 510),
        v7,
        (v7 >> 10) & 0xF,
        v8,
        (v7 >> 17) & 7,
        (v7 & 0x80000000) != 0,
        *((_DWORD *)this + 513),
        *((_DWORD *)this + 514),
        v38,
        *((_DWORD *)this + 516),
        *((_DWORD *)this + 517),
        v39,
        *((_DWORD *)this + 736),
        *AdapterType,
        v5);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 27), (__int64)this);
  if ( bTracingEnabled && *((_DWORD *)this + 736) )
  {
    v40 = 0LL;
    v11 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, PagedPool);
    if ( v11 )
    {
      for ( i = 0; i < *((_DWORD *)this + 736); ++i )
      {
        DestinationString = 0LL;
        v13 = *((_QWORD *)this + 350) + 520LL * i;
        RtlInitAnsiString(&DestinationString, (PCSZ)(v13 + 236));
        *(_QWORD *)&v40.Length = 5242880LL;
        v40.Buffer = v11;
        if ( RtlAnsiStringToUnicodeString(&v40, &DestinationString, 0) < 0 )
          RtlInitUnicodeString(&v40, L"Unknown");
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          LODWORD(v37) = *(_DWORD *)(v13 + 344);
          LODWORD(v36) = *(_DWORD *)(v13 + 216);
          LODWORD(v35) = *(_DWORD *)(v13 + 8);
          LODWORD(v33) = *(_DWORD *)(v13 + 212);
          LODWORD(v31) = *(_DWORD *)(v13 + 208);
          LODWORD(v29) = i;
          McTemplateK0pqqqqjzqqx_EtwWriteTransfer(
            v13 + 220,
            v14,
            v15,
            this,
            v29,
            v31,
            v33,
            v35,
            v13 + 220,
            v40.Buffer,
            v36,
            v37,
            *(_QWORD *)(v13 + 368));
        }
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v13 + 8); j = (unsigned int)(j + 1) )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            LODWORD(v33) = *(_DWORD *)(v13 + 24 * j + 32);
            LODWORD(v31) = j;
            LODWORD(v29) = i;
            McTemplateK0pqqqxx_EtwWriteTransfer(
              3 * j,
              v14,
              v15,
              this,
              v29,
              v31,
              v33,
              *(_QWORD *)(v13 + 24 * j + 16),
              *(_QWORD *)(v13 + 24 * j + 24));
          }
        }
      }
      operator delete[](v11);
    }
    for ( k = 0; k < *((_DWORD *)this + 736); ++k )
    {
      v18 = 520LL * k;
      v19 = *((_QWORD *)this + 350);
      v20 = *(_DWORD **)(v18 + v19 + 512);
      if ( v20 )
      {
        v21 = *(_DWORD *)(v18 + v19 + 212);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          LODWORD(v35) = v20[48];
          LODWORD(v33) = *v20;
          LODWORD(v31) = *(_DWORD *)(v18 + v19 + 212);
          LODWORD(v29) = k;
          McTemplateK0pqtqq_EtwWriteTransfer(v18, &Dxgk_PowerPStateComponent, v10, this, v29, v31, v33, v35);
        }
        for ( m = 0LL; (unsigned int)m < *v20; m = (unsigned int)(m + 1) )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            LODWORD(v33) = v20[m + 1];
            LODWORD(v31) = m;
            LODWORD(v29) = v21;
            McTemplateK0pqqq_EtwWriteTransfer((unsigned int)v33, &Dxgk_PowerPState, v10, this, v29, v31, v33);
          }
        }
      }
    }
  }
  v23 = *((_QWORD *)this + 27);
  v24 = *(_QWORD *)(v23 + 64);
  v25 = *(_DWORD *)(v24 + 4364);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v33) = 0;
    LODWORD(v31) = *(unsigned __int8 *)(v24 + 4368);
    LODWORD(v29) = v31;
    McTemplateK0pqqq_EtwWriteTransfer(v24, &EventBrightness, v10, v23, v29, v31, v33);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v34) = 0;
      LODWORD(v32) = v25;
      LODWORD(v30) = v25;
      McTemplateK0pqqq_EtwWriteTransfer(v26, &EventBacklightOptimizationLevel, v10, v23, v30, v32, v34);
    }
  }
  v27 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 337);
  if ( v27 )
    ADAPTER_DISPLAY::ReportState(v27);
  v28 = (ADAPTER_RENDER *)*((_QWORD *)this + 338);
  if ( v28 )
    ADAPTER_RENDER::ReportState(v28);
  DXGADAPTER::ReportNodeMetadata(this, v9, v10);
}

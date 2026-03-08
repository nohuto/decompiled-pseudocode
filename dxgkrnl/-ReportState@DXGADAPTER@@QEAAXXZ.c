/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02B4808
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C031007C (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x1C003FCA8 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C004006C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0040104 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqjzqqx_EtwWriteTransfer @ 0x1C00401AC (McTemplateK0pqqqqjzqqx_EtwWriteTransfer.c)
 *     McTemplateK0pqqqxx_EtwWriteTransfer @ 0x1C00403A0 (McTemplateK0pqqqxx_EtwWriteTransfer.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x1C0040634 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01A5DA4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DpiReportAdapter @ 0x1C020B4D4 (DpiReportAdapter.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C020CA04 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02BA640 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BCBFC (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  _DWORD *AdapterType; // rax
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  wchar_t *v9; // r14
  unsigned int i; // esi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int j; // ebp
  unsigned int k; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int *v18; // rdi
  int v19; // r14d
  unsigned int m; // ebp
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rcx
  ADAPTER_DISPLAY *v25; // rcx
  ADAPTER_RENDER *v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-128h]
  __int64 v28; // [rsp+20h] [rbp-128h]
  __int64 v29; // [rsp+28h] [rbp-120h]
  __int64 v30; // [rsp+28h] [rbp-120h]
  __int64 v31; // [rsp+30h] [rbp-118h]
  __int64 v32; // [rsp+30h] [rbp-118h]
  __int64 v33; // [rsp+38h] [rbp-110h]
  __int64 v34; // [rsp+50h] [rbp-F8h]
  __int64 v35; // [rsp+58h] [rbp-F0h]
  int v36; // [rsp+C0h] [rbp-88h]
  int v37; // [rsp+D8h] [rbp-70h]
  struct _UNICODE_STRING v38; // [rsp+100h] [rbp-48h] BYREF
  struct _STRING DestinationString; // [rsp+110h] [rbp-38h] BYREF
  int v40; // [rsp+150h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry1(1LL, 10016LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 10016LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( bTracingEnabled )
  {
    v2 = *(_QWORD *)((char *)this + 4580);
    v3 = *((_QWORD *)this + 35);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v40);
    v5 = *((_DWORD *)this + 567);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      v6 = v5 >> 14;
      LOBYTE(v6) = v6 & 7;
      McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
        v6,
        &EventReportAdapter,
        v5 >> 31,
        *((_QWORD *)this + 27),
        (char)this,
        *((_DWORD *)this + 418),
        *((_QWORD *)this + 277),
        *((_DWORD *)this + 556),
        *((_QWORD *)this + 279),
        *((_DWORD *)this + 560),
        *((_DWORD *)this + 561),
        *((_DWORD *)this + 563),
        *((_DWORD *)this + 564),
        *((_DWORD *)this + 565),
        *((_DWORD *)this + 568),
        *((_DWORD *)this + 562),
        *((_DWORD *)this + 566),
        v5,
        (v5 >> 10) & 0xF,
        v6,
        (v5 >> 17) & 7,
        (v5 & 0x80000000) != 0,
        *((_DWORD *)this + 569),
        *((_DWORD *)this + 570),
        v36,
        *((_DWORD *)this + 572),
        *((_DWORD *)this + 573),
        v37,
        *((_DWORD *)this + 792),
        *AdapterType,
        v3,
        v2);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 27), (__int64)this);
  if ( bTracingEnabled && *((_DWORD *)this + 792) )
  {
    v38 = 0LL;
    v9 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, 256LL);
    if ( v9 )
    {
      for ( i = 0; i < *((_DWORD *)this + 792); ++i )
      {
        DestinationString = 0LL;
        v11 = *((_QWORD *)this + 378) + 520LL * i;
        RtlInitAnsiString(&DestinationString, (PCSZ)(v11 + 236));
        *(_QWORD *)&v38.Length = 5242880LL;
        v38.Buffer = v9;
        if ( RtlAnsiStringToUnicodeString(&v38, &DestinationString, 0) < 0 )
          RtlInitUnicodeString(&v38, L"Unknown");
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        {
          LODWORD(v35) = *(_DWORD *)(v11 + 344);
          LODWORD(v34) = *(_DWORD *)(v11 + 216);
          LODWORD(v33) = *(_DWORD *)(v11 + 8);
          LODWORD(v31) = *(_DWORD *)(v11 + 212);
          LODWORD(v29) = *(_DWORD *)(v11 + 208);
          LODWORD(v27) = i;
          McTemplateK0pqqqqjzqqx_EtwWriteTransfer(
            v11 + 220,
            v12,
            v13,
            this,
            v27,
            v29,
            v31,
            v33,
            v11 + 220,
            v38.Buffer,
            v34,
            v35,
            *(_QWORD *)(v11 + 368));
        }
        for ( j = 0; j < *(_DWORD *)(v11 + 8); ++j )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          {
            LODWORD(v31) = *(_DWORD *)(v11 + 24LL * j + 32);
            LODWORD(v29) = j;
            LODWORD(v27) = i;
            McTemplateK0pqqqxx_EtwWriteTransfer(
              3LL * j,
              v12,
              v13,
              this,
              v27,
              v29,
              v31,
              *(_QWORD *)(v11 + 24LL * j + 16),
              *(_QWORD *)(v11 + 24LL * j + 24));
          }
        }
      }
      operator delete(v9);
    }
    for ( k = 0; k < *((_DWORD *)this + 792); ++k )
    {
      v16 = 520LL * k;
      v17 = *((_QWORD *)this + 378);
      v18 = *(unsigned int **)(v16 + v17 + 512);
      if ( v18 )
      {
        v19 = *(_DWORD *)(v16 + v17 + 212);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        {
          LODWORD(v33) = v18[48];
          LODWORD(v31) = *v18;
          LODWORD(v29) = *(_DWORD *)(v16 + v17 + 212);
          LODWORD(v27) = k;
          McTemplateK0pqtqq_EtwWriteTransfer(v16, &Dxgk_PowerPStateComponent, v8, this, v27, v29, v31, v33);
        }
        for ( m = 0; m < *v18; ++m )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          {
            LODWORD(v31) = v18[m + 1];
            LODWORD(v29) = m;
            LODWORD(v27) = v19;
            McTemplateK0pqqq_EtwWriteTransfer((unsigned int)v31, &Dxgk_PowerPState, v8, this, v27, v29, v31);
          }
        }
      }
    }
  }
  v21 = *((_QWORD *)this + 27);
  v22 = *(_QWORD *)(v21 + 64);
  v23 = *(_DWORD *)(v22 + 4396);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v31) = 0;
    LODWORD(v29) = *(unsigned __int8 *)(v22 + 4400);
    LODWORD(v27) = v29;
    McTemplateK0pqqq_EtwWriteTransfer(v22, &EventBrightness, v8, v21, v27, v29, v31);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v31) = 0;
      LODWORD(v29) = v23;
      LODWORD(v27) = v23;
      McTemplateK0pqqq_EtwWriteTransfer(v24, &EventBacklightOptimizationLevel, v8, v21, v27, v29, v31);
    }
  }
  v25 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 365);
  if ( v25 )
    ADAPTER_DISPLAY::ReportState(v25);
  v26 = (ADAPTER_RENDER *)*((_QWORD *)this + 366);
  if ( v26 )
    ADAPTER_RENDER::ReportState(v26);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v31) = (**((_DWORD **)this + 353) >> 15) & 3;
    LODWORD(v29) = (**((_DWORD **)this + 353) >> 17) & 1;
    LODWORD(v27) = 0;
    McTemplateK0pqtq_EtwWriteTransfer((unsigned int)v29, v7, v8, this, v27, v29, v31);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v32) = (**((_DWORD **)this + 353) >> 18) & 3;
      LODWORD(v30) = (**((_DWORD **)this + 353) >> 20) & 1;
      LODWORD(v28) = 1;
      McTemplateK0pqtq_EtwWriteTransfer((unsigned int)v30, v7, v8, this, v28, v30, v32);
    }
  }
  DXGADAPTER::ReportNodeMetadata(this, v7, v8);
}

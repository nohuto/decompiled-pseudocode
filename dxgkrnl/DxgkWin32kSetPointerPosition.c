/*
 * XREFs of DxgkWin32kSetPointerPosition @ 0x1C03362C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C03340B0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerPosition(
        struct _LUID *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  struct DXGADAPTER *v8; // rbp
  const wchar_t *v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 LowPart; // rdx
  __int64 HighPart; // rcx
  __int64 VidPnSourceId; // rax
  unsigned int Value; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-20h]
  char v21; // [rsp+60h] [rbp-18h]
  unsigned __int64 v22; // [rsp+80h] [rbp+8h] BYREF

  v19 = -1;
  v3 = a3;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2128;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2128);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2128);
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v22);
  v8 = v7;
  if ( !v7 )
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    v9 = L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkWin32kSetPointerPosition function.";
    v10 = -1071774937;
LABEL_9:
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
LABEL_12:
    VidPnSourceId = 0LL;
LABEL_17:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, HighPart, LowPart, VidPnSourceId, 0LL, 0LL);
    goto LABEL_18;
  }
  v11 = *((_QWORD *)v7 + 365);
  if ( !v11 )
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    v9 = L"Adapter LUID (0x%I64x%08I64x) passed to DxgkWin32kSetPointerPosition is not a display adapter";
    v10 = -1073741811;
    goto LABEL_9;
  }
  if ( a2->VidPnSourceId >= *(_DWORD *)(v11 + 96) )
  {
    WdLogSingleEntry1(2LL, a2->VidPnSourceId);
    HighPart = a2->VidPnSourceId;
    v9 = L"VidPn source id (0x%I64x) is invalid";
    LowPart = 0LL;
    v10 = -1071774937;
    goto LABEL_12;
  }
  Value = a2->Flags.Value;
  if ( Value >= 4 || (Value & 2) != 0 )
  {
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, a2->VidPnSourceId);
    HighPart = a1->HighPart;
    v9 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkWin32kSetPointerPosition function: Adapter LUID: (0x%I64x%08I6"
          "4x) VidpnSourceId: (0x%I64x).";
    LowPart = a1->LowPart;
    v10 = -1073741811;
    VidPnSourceId = a2->VidPnSourceId;
    goto LABEL_17;
  }
  v10 = DxgkSetPointerPosition(v8, a2, v3, 1, 1);
  DXGADAPTER::ReleaseReference(v8);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v19);
  }
  return v10;
}

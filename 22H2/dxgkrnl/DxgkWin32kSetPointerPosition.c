/*
 * XREFs of DxgkWin32kSetPointerPosition @ 0x1C027EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C014ECAC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerPosition(
        struct _LUID *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned int Value; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]
  unsigned __int64 v24; // [rsp+68h] [rbp+20h] BYREF

  v21 = -1;
  v3 = a3;
  v22 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2128;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2128);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2128LL);
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v24);
  v12 = v9;
  if ( !v9 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v13[3] = a1->HighPart;
    v13[4] = a1->LowPart;
LABEL_12:
    WdLogEvent5_WdError(v13);
    v16 = -1073741811;
    goto LABEL_13;
  }
  v14 = *(unsigned int *)(*((_QWORD *)v9 + 337) + 80LL);
  if ( a2->VidPnSourceId >= (unsigned int)v14 || (Value = a2->Flags.Value, Value >= 4) || (Value & 2) != 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v14, v10);
    v13[3] = a1->HighPart;
    v13[4] = a1->LowPart;
    v13[5] = a2->VidPnSourceId;
    goto LABEL_12;
  }
  v16 = DxgkSetPointerPosition(v12, a2, v3, 1);
  DXGADAPTER::ReleaseReference(v12);
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v17);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  return v16;
}

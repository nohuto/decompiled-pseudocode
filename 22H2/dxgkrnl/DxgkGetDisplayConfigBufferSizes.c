/*
 * XREFs of DxgkGetDisplayConfigBufferSizes @ 0x1C0145AC0
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01460CC (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkGetPathsModality @ 0x1C013E680 (DxgkGetPathsModality.c)
 *     ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C0145C28 (-GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rsi
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // eax
  struct DXGGLOBAL *v17; // rax
  __int64 (__fastcall *v18)(struct DXGADAPTER *, void *); // rdx
  _QWORD *v19; // rax
  int PathsModality; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h]
  char v25; // [rsp+30h] [rbp-10h]
  unsigned __int16 v26; // [rsp+70h] [rbp+30h] BYREF
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF

  v23 = -1;
  v4 = (unsigned int)a1;
  v24 = 0LL;
  v5 = 1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2174;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2174);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2174LL);
  v27 = (unsigned int)v4;
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  LODWORD(v11) = QDC_CACHE::GetCachedBufferSizes(*((QDC_CACHE **)Global + 172), (unsigned int)v4 & 0xFFFFFFEF, a2);
  if ( (int)v11 < 0 )
  {
    if ( (v4 & 0x40000000) == 0 )
    {
      v16 = v4 & 7;
      if ( v16 == 1 )
      {
        v17 = DXGGLOBAL::GetGlobal(v10, v9);
        v18 = CalcAllPathDisplayConfigBufferSizeCallback;
        goto LABEL_10;
      }
      if ( v16 == 2 )
      {
        v17 = DXGGLOBAL::GetGlobal(v10, v9);
        v18 = CalcActivePathDisplayConfigBufferSizeCallback;
LABEL_10:
        LODWORD(v11) = DXGGLOBAL::IterateAdaptersWithCallback(
                         (__int64)v17,
                         (__int64 (__fastcall *)(_QWORD *, __int64))v18,
                         (__int64)&v27,
                         4);
LABEL_11:
        if ( (int)v11 < 0 )
        {
LABEL_15:
          v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9);
          v19[4] = (int)v11;
          v19[3] = v4;
          v19[5] = *a2;
          WdLogEvent5_WdEvent(v19);
          goto LABEL_4;
        }
        v5 = HIDWORD(v27);
LABEL_13:
        *a2 = v5;
        if ( !v5 )
          LODWORD(v11) = -1073741637;
        goto LABEL_15;
      }
      if ( v16 != 4 )
      {
        LODWORD(v11) = -1073741811;
        v22 = WdLogNewEntry5_WdWarning(v10, v9, v12);
        *(_QWORD *)(v22 + 24) = v4;
        WdLogEvent5_WdWarning(v22);
        goto LABEL_11;
      }
      v26 = 0;
      PathsModality = DxgkGetPathsModality(15LL, 0LL, &v26);
      v11 = PathsModality;
      if ( PathsModality != -1073741789 )
      {
        v21 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v21 + 24) = v11;
        WdLogEvent5_WdError(v21);
        if ( (int)v11 >= 0 )
          LODWORD(v11) = -1073741823;
        goto LABEL_4;
      }
      v5 = v26;
    }
    LODWORD(v11) = 0;
    HIDWORD(v27) = v5;
    goto LABEL_13;
  }
LABEL_4:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23, v9);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v23);
  return (unsigned int)v11;
}

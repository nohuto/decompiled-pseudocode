/*
 * XREFs of DxgkSetProcessDeviceRemovalSupport @ 0x1C0169110
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetProcessDeviceRemovalSupport(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rsi
  signed __int16 v4; // bx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  char v24; // [rsp+30h] [rbp-18h]

  v3 = (_BYTE *)a1;
  v22 = -1;
  v23 = 0LL;
  v4 = 1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2155;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2155);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2155LL);
  v5 = 0;
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v12 = (__int64)Current;
  if ( Current )
  {
    if ( !*((_BYTE *)Current + 296) )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_BYTE *)MmUserProbeAddress;
      if ( !*v3 )
        v4 = 2;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)Current + 232, v4, 0) )
      {
        v21 = WdLogNewEntry5_WdError(MmUserProbeAddress, Current);
        v5 = -1073740528;
        *(_QWORD *)(v21 + 24) = -1073740528LL;
        WdLogEvent5_WdError(v21);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v12);
      if ( v24 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v22);
      }
      return v5;
    }
    v16 = WdLogNewEntry5_WdError(v11, Current);
    v17 = -1073741823LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v11, 0LL);
    v17 = -1073741811LL;
  }
  *(_QWORD *)(v16 + 24) = v17;
  WdLogEvent5_WdError(v16);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v18);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  return (unsigned int)v17;
}

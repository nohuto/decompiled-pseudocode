/*
 * XREFs of DxgkSetStereoEnabled @ 0x1C03114D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStereoEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int updated; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]
  char v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+88h] [rbp+18h] BYREF
  BOOL v15; // [rsp+90h] [rbp+20h] BYREF

  v11 = -1;
  v3 = a1;
  v12 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2089;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2089);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2089);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    v14 = 0;
    v7 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 224LL))(&v14, 0LL, 0LL);
    if ( !v14 || v7 )
    {
      updated = -1073741637;
    }
    else
    {
      v15 = v3 != 0;
      updated = ZwUpdateWnfStateData(&WNF_DX_STEREO_CONFIG, &v15, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v11);
  return updated;
}

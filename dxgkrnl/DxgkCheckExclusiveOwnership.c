/*
 * XREFs of DxgkCheckExclusiveOwnership @ 0x1C0222190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C0221EB6 (-CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ.c)
 */

char __fastcall DxgkCheckExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  DXGGLOBAL *Global; // rax
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // r8
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+30h] [rbp-18h]

  v8 = -1;
  v9 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v10 = 1;
    v8 = 2047;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2047);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v8, 2047);
  Global = DXGGLOBAL::GetGlobal();
  v4 = DXGGLOBAL::CheckExclusiveOwnership(Global);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 )
  {
    LOBYTE(v5) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v8);
  }
  return v4;
}

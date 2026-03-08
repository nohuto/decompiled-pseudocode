/*
 * XREFs of DpiFdoMessageInterruptRoutine @ 0x1C000F7D0
 * Callers:
 *     DpiFdoLineInterruptRoutine @ 0x1C005EB60 (DpiFdoLineInterruptRoutine.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoMessageInterruptRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v5; // bl
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v9 = -1;
  v10 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v11 = 1;
    v9 = 4014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 4014LL);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v9, 4014);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) + 184LL))(
         *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL),
         v3);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v9);
  return v5;
}

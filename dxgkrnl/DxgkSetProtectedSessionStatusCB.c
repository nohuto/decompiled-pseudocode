/*
 * XREFs of DxgkSetProtectedSessionStatusCB @ 0x1C0346710
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0055FD4 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 */

__int64 __fastcall DxgkSetProtectedSessionStatusCB(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  char v10; // [rsp+40h] [rbp-18h]

  if ( KeGetCurrentIrql() >= 2u )
    WdLogSingleEntry5(0LL, 275LL, 20LL, DxgkSetProtectedSessionStatusCB, 0LL, 0LL);
  v8 = -1;
  v9 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v10 = 1;
    v8 = 15000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 15000);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v8, 15000);
  if ( *(_QWORD *)a1 )
    v4 = DXGPROTECTEDSESSION::SetSessionStatus(
           *(DXGPROTECTEDSESSION **)a1,
           (enum _DXGK_PROTECTED_SESSION_STATUS)*(_DWORD *)(a1 + 8));
  else
    v4 = -1073741811;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 )
  {
    LOBYTE(v5) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v8);
  }
  return v4;
}

/*
 * XREFs of DxgkOutputDuplReleaseFrame @ 0x1C032BD90
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C032AFB8 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplReleaseFrame(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  int v5; // ebx
  _DWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  char v12; // [rsp+30h] [rbp-28h]
  unsigned int v13[2]; // [rsp+38h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-18h]

  v10 = -1;
  v11 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2072;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2072);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2072);
  *(_QWORD *)v13 = 0LL;
  v14 = 0;
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_QWORD *)v13 = *(_QWORD *)v4;
  v14 = *(_DWORD *)(v4 + 8);
  v5 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v13[0],
         v13[1],
         (__int64)v13,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_693db078d59c16956e85dd4c51bec7d2_::_lambda_invoker_cdecl_);
  if ( v5 >= 0 )
  {
    v6 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = v14;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v10);
  return (unsigned int)v5;
}

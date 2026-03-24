/*
 * XREFs of DxgkDestroyOutputDuplInternal @ 0x1C029D858
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C029D5E0 (DxgkCreateOutputDupl.c)
 *     DxgkDestroyOutputDupl @ 0x1C029D840 (DxgkDestroyOutputDupl.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C029D388 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkDestroyOutputDuplInternal(__int64 a1, int a2, __int64 a3)
{
  ULONG64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+30h] [rbp-28h]
  unsigned int v16[2]; // [rsp+38h] [rbp-20h] BYREF
  int v17; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2062;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2062);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2062LL);
  if ( a2 )
  {
    if ( v4 <= MmUserProbeAddress )
    {
      v7 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v7 + 24) = 3370LL;
      WdLogEvent5_WdAssertion(v7);
    }
    *(_QWORD *)v16 = *(_QWORD *)v4;
    v17 = *(_DWORD *)(v4 + 8);
  }
  else
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_QWORD *)v16 = *(_QWORD *)v4;
    v17 = *(_DWORD *)(v4 + 8);
  }
  v8 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v16[0],
         v16[1],
         (__int64)v16,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13, v9);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v13);
  return v8;
}

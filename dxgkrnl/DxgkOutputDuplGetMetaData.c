/*
 * XREFs of DxgkOutputDuplGetMetaData @ 0x1C032B860
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C032AFB8 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetMetaData(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rsi
  _OWORD *v4; // rax
  void *v5; // r14
  int v6; // edi
  const void *v7; // rdx
  __int64 v8; // rax
  size_t v9; // r8
  ULONG64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h]
  char v16; // [rsp+30h] [rbp-38h]
  size_t Size[2]; // [rsp+38h] [rbp-30h] BYREF
  void *Src[2]; // [rsp+48h] [rbp-20h]

  v3 = (_OWORD *)a1;
  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2064;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2064);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 2064);
  *(_OWORD *)Size = 0LL;
  *(_OWORD *)Src = 0LL;
  v4 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  *(_OWORD *)Src = v4[1];
  v5 = Src[0];
  LODWORD(Src[1]) = 0;
  Src[0] = 0LL;
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         LODWORD(Size[0]),
         HIDWORD(Size[0]),
         (__int64)Size,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_);
  v7 = Src[0];
  Src[0] = v5;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *v3 = *(_OWORD *)Size;
    v3[1] = *(_OWORD *)Src;
  }
  if ( v6 >= 0 )
  {
    v8 = LODWORD(Src[1]);
    if ( LODWORD(Src[1]) )
    {
      if ( HIDWORD(Size[1]) < LODWORD(Src[1]) )
        v8 = HIDWORD(Size[1]);
      v9 = (unsigned int)v8;
      v10 = (ULONG64)v5 + v8;
      if ( v10 > MmUserProbeAddress || v10 <= (unsigned __int64)v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v5, v7, v9);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v14);
  return (unsigned int)v6;
}

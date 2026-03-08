/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1C032BA60
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C032AFB8 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r14
  ULONG64 v4; // rax
  void *v5; // rax
  void *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  void *v10; // r15
  int v11; // esi
  __int64 v12; // rax
  size_t v13; // r8
  ULONG64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+58h] [rbp-60h]
  char v19; // [rsp+60h] [rbp-58h]
  void *v20; // [rsp+68h] [rbp-50h]
  size_t Size[2]; // [rsp+70h] [rbp-48h] BYREF
  void *v22[2]; // [rsp+80h] [rbp-38h]
  __int128 v23; // [rsp+90h] [rbp-28h]
  __int64 v24; // [rsp+A0h] [rbp-18h]

  v3 = a1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2065;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2065);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2065);
  *(_OWORD *)Size = 0LL;
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v4 = v3;
  if ( v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)Size = *(_OWORD *)v4;
  *(_OWORD *)v22 = *(_OWORD *)(v4 + 16);
  v23 = *(_OWORD *)(v4 + 32);
  v24 = *(_QWORD *)(v4 + 48);
  v5 = (void *)operator new[](LODWORD(Size[1]), 0x674D444Fu, 256LL);
  v6 = v5;
  v20 = v5;
  if ( v5 )
  {
    v10 = v22[0];
    v22[0] = v5;
    v11 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
            LODWORD(Size[0]),
            HIDWORD(Size[0]),
            (__int64)Size,
            (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_);
    v22[0] = v10;
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = *(_OWORD *)Size;
      *(_OWORD *)(v3 + 16) = *(_OWORD *)v22;
      *(_OWORD *)(v3 + 32) = v23;
      *(_QWORD *)(v3 + 48) = v24;
    }
    if ( v11 >= 0 )
    {
      v12 = LODWORD(v22[1]);
      if ( LODWORD(v22[1]) )
      {
        if ( LODWORD(Size[1]) < LODWORD(v22[1]) )
          v12 = LODWORD(Size[1]);
        v13 = (unsigned int)v12;
        v14 = (ULONG64)v10 + v12;
        if ( v14 > MmUserProbeAddress || v14 <= (unsigned __int64)v10 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v10, v6, v13);
      }
    }
    operator delete(v6);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v17);
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(6LL, LODWORD(Size[1]));
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Couldn't allocate buffer of size 0x%I64x for pointer shape kernel mode buffer",
      LODWORD(Size[1]),
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v17);
    }
    return 3221225495LL;
  }
}

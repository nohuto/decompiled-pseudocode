__int64 __fastcall CComputeScribbleFramebuffer::BuildCommandList(
        CComputeScribbleFramebuffer *this,
        struct CComputeScribbleStopwatch *a2,
        struct IDCompositionDirectInkSuperWetRenderer *a3,
        struct IUnknown *a4,
        struct ComputeScribbleLatencyData *a5)
{
  int v9; // edi
  __int64 v10; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // [rsp+50h] [rbp-68h] BYREF
  CComputeScribbleFramebuffer *v18; // [rsp+58h] [rbp-60h] BYREF
  char v19; // [rsp+60h] [rbp-58h]
  struct tagRECT v20; // [rsp+68h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  if ( v9 < 0 )
  {
    v10 = 224LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 80LL))(
         *((_QWORD *)this + 5),
         *((_QWORD *)this + 4),
         0LL);
  if ( v9 < 0 )
  {
    v10 = 225LL;
    goto LABEL_3;
  }
  v12 = *((_QWORD *)this + 9);
  v17 = 0;
  v18 = this;
  v19 = 1;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct IDCompositionDirectInkSuperWetRenderer *, struct IUnknown *, int *, struct ComputeScribbleLatencyData *, struct tagRECT *))(*(_QWORD *)v12 + 40LL))(
          v12,
          *((_QWORD *)this + 5),
          *((_QWORD *)this + 3),
          a3,
          a4,
          &v17,
          a5,
          &v20);
  v9 = v13;
  if ( v13 < 0 )
  {
    v14 = 245LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v13);
    wil::details::lambda_call__lambda_5f2d415c4a7cf1ed97bf669579e56a7e___::_lambda_call__lambda_5f2d415c4a7cf1ed97bf669579e56a7e___((__int64 *)&v18);
    return (unsigned int)v9;
  }
  v15 = CRegion::TryAddRectangle((CComputeScribbleFramebuffer *)((char *)this + 80), &v20);
  if ( v15 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v15, retaddr);
  if ( v17 )
  {
    TransitionResourceBarrier(*((_QWORD *)this + 5), *((_QWORD *)this + 3));
    v17 = 0;
  }
  CComputeScribbleStopwatch::StopOnGpu(a2, *((struct ID3D12GraphicsCommandList **)this + 5));
  v16 = *((_QWORD *)this + 5);
  v19 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
  v9 = v13;
  if ( v13 < 0 )
  {
    v14 = 262LL;
    goto LABEL_15;
  }
  return 0LL;
}

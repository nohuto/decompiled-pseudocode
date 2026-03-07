__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  __int64 v2; // r15
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // ebp
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // esi
  char *v16; // rdi
  __int64 v18; // rbp
  __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 5);
  v5 = 0LL;
  CDrawListBatchManager::CloseCurrentDrawListEntryBatch(v2 + 24, &v27);
  v6 = v27;
  if ( v27 )
  {
    CD2DContext::EnsureBeginDraw((CD2DContext *)(v2 + 16));
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 224) + 120LL))(*(_QWORD *)(v2 + 224), v6);
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v6 + 8);
  }
  v7 = *(_DWORD *)(v2 + 368);
  v8 = 0LL;
  v9 = (unsigned int)(v7 - 1);
  if ( v7 )
    v8 = *(_QWORD *)(*(_QWORD *)(v2 + 344) + 8 * v9);
  *(_DWORD *)(v2 + 368) = v9;
  if ( v7 == 1 )
  {
    v10 = CD2DContext::EndDraw((CD2DContext *)(v2 + 16));
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2EEu, 0LL);
    if ( *(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 24) + 8LL))(*(_QWORD *)(v8 + 24)) )
    {
      *(_QWORD *)(v2 + 440) = v8;
      goto LABEL_11;
    }
    CD2DContext::D2DSetTargetInternal((CD2DContext *)(v2 + 16), 0LL);
  }
  else
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v2 + 344) + 8LL * (unsigned int)(v7 - 2));
    v5 = *(_QWORD *)(v18 + 24);
    v19 = v5 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    if ( *(_BYTE *)(v2 + 453) )
    {
      CD2DTarget::ApplyState((CD2DTarget *)v18, (struct CD2DContext *)(v2 + 16));
      if ( *(_BYTE *)(v8 + 75) )
      {
        if ( *(_BYTE *)(v8 + 74) )
        {
          v25 = CD2DContext::FlushD2DInternal((CD2DContext *)(v2 + 16));
          if ( v25 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v25, 0x2DDu, 0LL);
        }
        else
        {
          *(_BYTE *)(v18 + 75) = 1;
        }
      }
    }
    v12 = *(_DWORD *)(v2 + 1088);
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v12, 0x2E6u, 0LL);
  }
  if ( v8 )
  {
    CD2DTarget::~CD2DTarget((CD2DTarget *)v8);
    operator delete((void *)v8, 0x50uLL);
  }
LABEL_11:
  v13 = CD3DDevice::TranslateDXGIorD3DErrorInContext(v2, v12, 0);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xB4u, 0LL);
  v16 = (char *)this + 32;
  if ( g_LockAndReadD2DTarget )
  {
    v26 = *(_QWORD *)v16 + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 24LL))(
      v26,
      ((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  }
  if ( a2 )
  {
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((char *)this + 32);
  }
  else
  {
    v21 = *(_QWORD *)v16;
    v22 = v5;
    v5 = 0LL;
    *(_QWORD *)v16 = v22;
    if ( v21 )
    {
      v23 = v21 + 8 + *(int *)(*(_QWORD *)(v21 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    CDrawingContext::UpdateRenderTargetInfo(this);
    detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 112,
      0xD37A6F4DE9BD37A7uLL * ((*((_QWORD *)this + 113) - 184LL - *((_QWORD *)this + 112)) >> 3),
      1LL);
  }
  *((_BYTE *)this + 8169) = 1;
  if ( v5 )
  {
    v24 = v5 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v15;
}

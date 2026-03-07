__int64 __fastcall CComposition::Initialize(CComposition *this)
{
  wil::details *v2; // rcx
  HANDLE Event; // rbx
  CDisplayManager *v4; // rcx
  int LastErrorFailHr; // eax
  int v6; // edi
  CRenderTargetManager *v7; // rax
  CRenderTargetManager *v8; // rax
  CInputManager *v9; // rax
  CInputManager *v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  CGlobalManipulationManager *v13; // rax
  CGlobalManipulationManager *v14; // rax
  unsigned int v15; // ecx
  CManipulationManager *v16; // r14
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // ebx
  CPreComputeContext *v20; // rax
  CPreComputeContext *v21; // rbx
  CPreComputeContext *v22; // rax
  void **v23; // rbx
  struct IMessageSession *v24; // r14
  volatile signed __int32 *v25; // rcx
  Microsoft::Bamo::BaseBamoConnection *v26; // rcx
  _QWORD *v27; // rax
  CSuperWetInkManager *v28; // rbx
  __int64 *v29; // rax
  __int64 *v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // rdi
  CSceneResourceManager *v33; // rbx
  CColorBrush *v34; // rax
  CColorBrush *v35; // rax
  CColorBrush *v36; // rax
  CColorBrush *v37; // rax
  int v39; // r9d
  unsigned int v40; // [rsp+20h] [rbp-40h]
  void *v41; // [rsp+30h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v42; // [rsp+38h] [rbp-28h] BYREF
  char v43; // [rsp+48h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+18h]

  *(_QWORD *)&v42.r = 0LL;
  v41 = 0LL;
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (char *)this + 1264,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v2);
    v6 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v40 = 253;
LABEL_74:
      v39 = LastErrorFailHr;
      goto LABEL_75;
    }
  }
  CDisplayManager::Initialize(v4);
  LastErrorFailHr = CThreadContext::InitializeObjectCaches();
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v40 = 260;
    goto LABEL_74;
  }
  v7 = (CRenderTargetManager *)operator new(0x248uLL);
  if ( v7 )
    v8 = CRenderTargetManager::CRenderTargetManager(v7, this);
  else
    v8 = 0LL;
  *((_QWORD *)this + 27) = v8;
  LastErrorFailHr = CGlobalSurfaceManager::Create((void **)&v42, &v41, (struct CSurfaceManager **)this + 28);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v40 = 268;
    goto LABEL_74;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 82) + 16LL))(
    *((_QWORD *)this + 82),
    *(_QWORD *)&v42.r,
    v41);
  LastErrorFailHr = CExpressionManager::Create((struct CExpressionManager **)this + 53);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v40 = 274;
    goto LABEL_74;
  }
  v9 = (CInputManager *)DefaultHeap::AllocClear(0x150uLL);
  v10 = v9;
  if ( !v9 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  CInputManager::CInputManager(v9, this);
  *((_QWORD *)v10 + 41) = 0LL;
  *(_QWORD *)v10 = &CGlobalInputManager::`vftable';
  CMILRefCountImpl::AddReference((CInputManager *)((char *)v10 + 8));
  v11 = CGlobalInputManager::Initialize(v10);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x21u, 0LL);
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v10);
    v40 = 277;
    goto LABEL_65;
  }
  *((_QWORD *)this + 29) = v10;
  v13 = (CGlobalManipulationManager *)DefaultHeap::AllocClear(0x190uLL);
  if ( !v13 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v14 = CGlobalManipulationManager::CGlobalManipulationManager(v13, this);
  v16 = v14;
  if ( !v14 )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x20u, 0LL);
    v6 = -2147024882;
LABEL_60:
    v40 = 280;
    goto LABEL_61;
  }
  CMILRefCountImpl::AddReference((CGlobalManipulationManager *)((char *)v14 + 8));
  v17 = CManipulationManager::Initialize(v16);
  v19 = v17;
  v6 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x23u, 0LL);
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v16);
    goto LABEL_60;
  }
  *((_QWORD *)this + 30) = v16;
  v20 = (CPreComputeContext *)operator new(0x7B0uLL);
  v21 = v20;
  if ( v20 )
  {
    memset_0(v20, 0, 0x7B0uLL);
    v22 = CPreComputeContext::CPreComputeContext(v21);
  }
  else
  {
    v22 = 0LL;
  }
  v23 = (void **)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = v22;
  if ( v23 )
  {
    CPreComputeContext::~CPreComputeContext(v23);
    operator delete(v23, 0x7B0uLL);
  }
  *(_QWORD *)&v42.r = 0LL;
  v6 = CHolographicManager::Create(this, (struct CHolographicManager **)&v42);
  *((_QWORD *)this + 33) = *(_QWORD *)&v42.r;
  if ( v6 < 0 )
  {
    v40 = 286;
    goto LABEL_65;
  }
  v24 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 24LL))(*((_QWORD *)this + 82));
  LastErrorFailHr = CMessageConversationHost::Create(v24, (struct CMessageConversationHost **)this + 155);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v40 = 290;
    goto LABEL_74;
  }
  v25 = (volatile signed __int32 *)*((_QWORD *)this + 157);
  if ( v25 )
  {
    *((_QWORD *)this + 157) = 0LL;
    CMILRefCountBaseT<IUnknown>::InternalRelease(v25);
  }
  LastErrorFailHr = DataProviderManager::Create(v24, (struct DataProviderManager **)this + 157);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v40 = 292;
    goto LABEL_74;
  }
  v26 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 156);
  if ( v26 )
  {
    *((_QWORD *)this + 156) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v26);
  }
  LastErrorFailHr = DiagnosticCallbacksManager::Create(v24, (struct DiagnosticCallbacksManager **)this + 156);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v40 = 294;
    goto LABEL_74;
  }
  LastErrorFailHr = CEffectCompilationService::Create(v24, (struct CEffectCompilationService **)this + 31);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v40 = 297;
    goto LABEL_74;
  }
  v27 = operator new(0x60uLL);
  if ( v27 )
  {
    *v27 = this;
    v27[1] = 0LL;
    v27[2] = 0LL;
    v27[3] = 0LL;
    v27[4] = 0LL;
    v27[5] = 0LL;
    v27[6] = 0LL;
    v27[7] = 0LL;
    v27[8] = 0LL;
    v27[9] = 0LL;
    v27[10] = 0LL;
    v27[11] = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  v28 = (CSuperWetInkManager *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = v27;
  if ( v28 )
  {
    CSuperWetInkManager::~CSuperWetInkManager(v28);
    operator delete(v28, 0x60uLL);
  }
  v29 = (__int64 *)operator new(0x10uLL);
  v30 = v29;
  if ( v29 )
  {
    *v29 = 0LL;
    v29[1] = 0LL;
    v31 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    *(_QWORD *)v31 = v31;
    *(_QWORD *)(v31 + 8) = v31;
    *(_QWORD *)(v31 + 16) = v31;
    *(_WORD *)(v31 + 24) = 257;
    *v30 = v31;
  }
  else
  {
    v30 = 0LL;
  }
  v32 = (_QWORD *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = v30;
  if ( v32 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>(
      v32,
      v32,
      *(_QWORD *)(*v32 + 8LL));
    std::_Deallocate<16,0>(*v32, 56LL);
    operator delete(v32, 0x10uLL);
  }
  *(_QWORD *)&v42.b = 0LL;
  *(_QWORD *)&v42.r = (char *)this + 288;
  v43 = 1;
  v6 = CSceneResourceManager::Create(this, (struct CSceneResourceManager **)&v42.b);
  if ( v43 )
  {
    v33 = **(CSceneResourceManager ***)&v42.r;
    **(_QWORD **)&v42.r = *(_QWORD *)&v42.b;
    if ( v33 )
    {
      CSceneResourceManager::~CSceneResourceManager(v33);
      operator delete(v33);
    }
  }
  if ( v6 < 0 )
  {
    v40 = 305;
LABEL_65:
    v39 = v6;
    goto LABEL_75;
  }
  v34 = (CColorBrush *)DefaultHeap::AllocClear(0x90uLL);
  if ( v34 )
  {
    *(struct _D3DCOLORVALUE *)&v42.r = (struct _D3DCOLORVALUE)_xmm;
    v35 = CColorBrush::CColorBrush(v34, this, &v42);
  }
  else
  {
    v35 = 0LL;
  }
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((char *)this + 320, v35);
  if ( !*((_QWORD *)this + 40) )
  {
    v40 = 310;
LABEL_58:
    v19 = -2147024882;
    v6 = -2147024882;
LABEL_61:
    v39 = v19;
LABEL_75:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v4, 0LL, 0, v39, v40, 0LL);
    return (unsigned int)v6;
  }
  v36 = (CColorBrush *)DefaultHeap::AllocClear(0x90uLL);
  if ( v36 )
  {
    *(struct _D3DCOLORVALUE *)&v42.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
    v37 = CColorBrush::CColorBrush(v36, this, &v42);
  }
  else
  {
    v37 = 0LL;
  }
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((char *)this + 328, v37);
  if ( !*((_QWORD *)this + 41) )
  {
    v40 = 313;
    goto LABEL_58;
  }
  *(_OWORD *)((char *)this + 1144) = _xmm;
  *(_OWORD *)((char *)this + 1160) = _xmm;
  *(_OWORD *)((char *)this + 1176) = _xmm;
  *(_OWORD *)((char *)this + 1192) = _xmm;
  return (unsigned int)v6;
}

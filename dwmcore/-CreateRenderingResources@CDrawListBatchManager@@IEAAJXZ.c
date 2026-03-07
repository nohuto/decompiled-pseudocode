__int64 __fastcall CDrawListBatchManager::CreateRenderingResources(CDrawListBatchManager *this)
{
  __int64 v2; // rax
  bool v3; // zf
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  struct CD3DDevice *v8; // rdi
  CDrawListEntryBatch::CSharedDirect3DResources *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  CDrawListEntryBatch::CSharedDirect3DResources *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  CBatchOptimizer *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  int v20; // ebx
  unsigned int v21; // [rsp+20h] [rbp-18h]

  v2 = (__int64)this + 1064;
  v3 = this == 0LL;
  v4 = (unsigned __int64)this - 24;
  v5 = 1088LL;
  if ( v3 )
    v2 = 1088LL;
  v6 = *(_DWORD *)v2;
  if ( *(int *)v2 < 0 )
  {
    v21 = 100;
    goto LABEL_25;
  }
  v7 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v7 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
  v8 = (struct CD3DDevice *)(v4 & -(__int64)(this != 0LL));
  v9 = (CDrawListEntryBatch::CSharedDirect3DResources *)DefaultHeap::Alloc(0x4E0uLL);
  if ( !v9
    || (v11 = CDrawListEntryBatch::CSharedDirect3DResources::CSharedDirect3DResources(v9),
        (v12 = (CDrawListEntryBatch::CSharedDirect3DResources *)v11) == 0LL) )
  {
    v6 = -2147024882;
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x18u, 0LL);
    goto LABEL_23;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 8));
  v13 = CDrawListEntryBatch::CSharedDirect3DResources::Init(v12, v8);
  v6 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x19u, 0LL);
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v12);
    v20 = v6;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, 0x67u, 0LL);
    return v6;
  }
  *((_QWORD *)this + 15) = v12;
  if ( CCommonRegistryData::EnablePrimitiveReordering )
  {
    v15 = (__int64)this + 544;
    if ( !this )
      v15 = 568LL;
    if ( !*(_QWORD *)v15 || CCommonRegistryData::UseHWDrawListEntriesOnWARP )
    {
      v17 = (CBatchOptimizer *)DefaultHeap::Alloc(0x1098uLL);
      if ( v17 )
        v17 = CBatchOptimizer::CBatchOptimizer(v17, this);
      v18 = (_QWORD *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v17;
      if ( v18 )
      {
        *v18 = &CBatchOptimizer::`vftable';
        `vector destructor iterator'(v18 + 10, 0x208uLL, 8uLL, (void (*)(void *))SharedStateLayer::~SharedStateLayer);
        operator delete(v18, 0x1098uLL);
      }
      if ( !*((_QWORD *)this + 17) )
      {
        v6 = -2147024882;
        v21 = 112;
LABEL_25:
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, v21, 0LL);
      }
    }
  }
  return v6;
}

__int64 __fastcall CGlobalSurfaceManager::Create(void **a1, void **a2, struct CSurfaceManager **a3)
{
  CGlobalSurfaceManager *v6; // rax
  CGlobalSurfaceManager *v7; // rbx
  CGlobalSurfaceManager *v8; // rax
  __int64 v9; // rcx
  CGlobalSurfaceManager *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (CGlobalSurfaceManager *)DefaultHeap::AllocClear(0x1F8uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v6, 0, 0x1F8uLL);
  v8 = CGlobalSurfaceManager::CGlobalSurfaceManager(v7);
  v10 = v8;
  if ( v8 )
  {
    CMILRefCountImpl::AddReference((CGlobalSurfaceManager *)((char *)v8 + 8));
    v11 = CGlobalSurfaceManager::Initialize(v10, a1, a2);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x40u, 0LL);
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v10);
    }
    else
    {
      *a3 = v10;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x3Du, 0LL);
  }
  return v13;
}

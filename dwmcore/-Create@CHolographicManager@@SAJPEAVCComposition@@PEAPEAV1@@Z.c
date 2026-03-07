__int64 __fastcall CHolographicManager::Create(struct CComposition *a1, struct CHolographicManager **a2)
{
  CHolographicManager *v4; // rax
  CHolographicManager *v5; // rax
  __int64 v6; // rcx
  CHolographicManager *v7; // rdi
  HANDLE Event; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CHolographicManager *)DefaultHeap::AllocClear(0xF8uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CHolographicManager::CHolographicManager(v4, a1);
  v7 = v5;
  if ( v5 )
  {
    CMILRefCountImpl::AddReference((CHolographicManager *)((char *)v5 + 16));
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v7 + 29) = Event;
    if ( Event )
    {
      v10 = 0;
      *a2 = v7;
    }
    else
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x1Au, 0LL);
      CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v7 + 2);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x16u, 0LL);
  }
  return v10;
}

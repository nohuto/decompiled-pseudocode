__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  unsigned int v2; // ebx
  CExpressionManager *v3; // rax
  CExpressionManager *v4; // rax
  unsigned int v5; // ecx
  struct CExpressionManager *v6; // rdi
  bool v7; // zf
  int inited; // eax
  unsigned int v9; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CExpressionManager *)DefaultHeap::AllocClear(0x2D0uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v4 = CExpressionManager::CExpressionManager(v3);
  v6 = v4;
  if ( v4 )
  {
    CMILRefCountImpl::AddReference((CExpressionManager *)((char *)v4 + 8));
    v7 = byte_1803E2CA8 == 0;
    *a1 = v6;
    if ( v7 )
    {
      byte_1803E2CA8 = 1;
      inited = Time::PreInitClass();
      v2 = inited;
      if ( inited < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, inited, 0x20u, 0LL);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v2;
}

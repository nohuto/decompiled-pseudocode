bool __fastcall CPreComputeContext::SubTreeContext::IsDirtyCollectionEnabled(CPreComputeContext::SubTreeContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( !*((_DWORD *)this + 111) )
    return *(_BYTE *)(*((_QWORD *)this + 53) + 4420LL) == 0;
  return v1;
}

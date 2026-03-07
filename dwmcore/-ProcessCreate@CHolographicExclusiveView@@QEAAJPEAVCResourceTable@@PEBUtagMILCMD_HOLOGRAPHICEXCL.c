__int64 __fastcall CHolographicExclusiveView::ProcessCreate(
        CHolographicExclusiveView *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE *a3)
{
  bool v3; // zf

  v3 = *((_QWORD *)this + 8) == 0LL;
  *((_DWORD *)this + 19) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 5);
  *((_QWORD *)this + 13) = *((_QWORD *)a3 + 1);
  if ( !v3 )
    CHolographicManager::AddExclusiveView(*((RTL_SRWLOCK **)this + 8), (struct IUnknown *)this);
  return 0LL;
}

__int64 __fastcall CHolographicExclusiveView::ProcessSetViewData(
        CHolographicExclusiveView *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA *a3)
{
  bool v6; // zf
  CHolographicInteropTaskQueue **v7; // rcx
  __int64 v8; // rcx
  void *v9; // r8
  unsigned int v10; // r9d
  void *v11; // rdx
  void *v12; // rcx
  struct IHolographicExclusivePresentData *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  if ( *((_QWORD *)this + 11) )
    return 2147942487LL;
  v6 = *((_QWORD *)this + 15) == 0LL;
  *((_BYTE *)this + 83) = 1;
  if ( !v6 )
  {
    v7 = (CHolographicInteropTaskQueue **)*((_QWORD *)this + 8);
    if ( v7 )
      CHolographicManager::ReleaseExclusivePresentData(v7, *((_DWORD *)this + 18));
    v8 = *((_QWORD *)this + 15);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      *((_QWORD *)this + 15) = 0LL;
    }
  }
  v9 = (void *)*((_QWORD *)a3 + 3);
  if ( v9 )
  {
    v10 = *((_DWORD *)this + 19);
    v11 = (void *)*((_QWORD *)a3 + 1);
    v12 = (void *)*((_QWORD *)a3 + 2);
    v13 = 0LL;
    if ( (int)CHolographicExclusivePresentData::Create(v12, v11, v9, v10, *((_DWORD *)this + 18), &v13) < 0 )
    {
      CloseHandle(*((HANDLE *)a3 + 3));
    }
    else
    {
      *((_QWORD *)this + 15) = v13;
      CHolographicExclusiveView::PublishPresentData(this);
    }
  }
  return 0LL;
}

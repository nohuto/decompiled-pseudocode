__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  void *Instance; // rax
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  char *v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v7 = *(__int64 (__fastcall **)(__int64))a2;
  v8 = a1 + *(int *)(a2 + 8);
  *a3 = 0LL;
  v9 = v7(v8);
  v10 = v9;
  if ( !v9 )
    return 3223192324LL;
  v15 = 0LL;
  Instance = (void *)Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>::CreateInstance(v9);
  auto_ptr<Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>>::reset((void **)&v15, Instance);
  if ( v15 )
  {
    v13 = *(_DWORD *)(v10 + 24);
    v14 = v15 + 16;
    *a3 = v15 + 16;
    *v14 = v13;
  }
  else
  {
    v3 = -1073741801;
  }
  operator delete(0LL);
  return v3;
}

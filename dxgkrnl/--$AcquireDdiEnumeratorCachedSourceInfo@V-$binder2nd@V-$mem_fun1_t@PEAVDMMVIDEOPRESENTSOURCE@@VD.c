__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET,DMMVIDEOPRESENTSOURCE const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  void *Instance; // rax
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  char *v16; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v7 = *(__int64 (__fastcall **)(__int64, __int64))a2;
  v8 = a1 + *(int *)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  *a3 = 0LL;
  v10 = v7(v8, v9);
  v11 = v10;
  if ( !v10 )
    return 3223192324LL;
  v16 = 0LL;
  Instance = (void *)Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>::CreateInstance(v10);
  auto_ptr<Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>>::reset((void **)&v16, Instance);
  if ( v16 )
  {
    v14 = *(_DWORD *)(v11 + 24);
    v15 = v16 + 16;
    *a3 = v16 + 16;
    *v15 = v14;
  }
  else
  {
    v3 = -1073741801;
  }
  operator delete(0LL);
  return v3;
}

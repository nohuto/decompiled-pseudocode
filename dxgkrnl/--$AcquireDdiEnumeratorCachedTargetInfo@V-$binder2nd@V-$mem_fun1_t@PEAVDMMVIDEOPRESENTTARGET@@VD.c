__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET,DMMVIDEOPRESENTTARGET const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  _DWORD *v11; // rdi
  void *Instance; // rax
  int v14; // ecx
  _DWORD *v15; // rax
  char *v16; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v7 = *(__int64 (__fastcall **)(__int64, __int64))a2;
  v8 = a1 + *(int *)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  *a3 = 0LL;
  v10 = v7(v8, v9);
  v11 = (_DWORD *)v10;
  if ( !v10 )
    return 3223192325LL;
  v16 = 0LL;
  Instance = (void *)Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>::CreateInstance(v10);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v16, Instance);
  if ( v16 )
  {
    v14 = v11[6];
    v15 = v16 + 16;
    *a3 = v16 + 16;
    *v15 = v14;
    v15[1] = v11[20];
    v15[2] = v11[25];
    v15[3] = v11[26];
  }
  else
  {
    v3 = -1073741801;
  }
  operator delete(0LL);
  return v3;
}

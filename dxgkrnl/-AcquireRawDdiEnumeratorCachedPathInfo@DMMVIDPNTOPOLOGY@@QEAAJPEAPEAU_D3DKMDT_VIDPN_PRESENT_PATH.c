__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(
        DMMVIDPNTOPOLOGY *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a2)
{
  unsigned int v2; // ebx
  void *Instance; // rax
  char *v5; // rax
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (char *)this;
  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v7 = 0LL;
  Instance = (void *)Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(0LL);
  auto_ptr<Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>>::reset((void **)&v7, Instance);
  if ( v7 )
  {
    v5 = v7 + 16;
    *a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)(v7 + 16);
    *((_QWORD *)v5 + 1) = 0LL;
    *(_DWORD *)v5 = -1;
    *((_DWORD *)v5 + 1) = -1;
    *((_DWORD *)v5 + 5) = 0;
    *(_QWORD *)(v5 + 28) = 0LL;
    *(_QWORD *)(v5 + 36) = 0LL;
    *(_QWORD *)(v5 + 44) = 0LL;
    *(_QWORD *)(v5 + 52) = 0LL;
    *(_QWORD *)(v5 + 60) = 0LL;
    *(_QWORD *)(v5 + 68) = 0LL;
    *((_DWORD *)v5 + 84) = 0;
    *((_QWORD *)v5 + 43) = 0LL;
    *((_QWORD *)v5 + 44) = 0LL;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v2 = -1073741801;
  }
  operator delete(0LL);
  return v2;
}

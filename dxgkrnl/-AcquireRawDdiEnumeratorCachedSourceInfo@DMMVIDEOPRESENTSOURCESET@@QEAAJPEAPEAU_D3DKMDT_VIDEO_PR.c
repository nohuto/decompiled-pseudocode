__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AcquireRawDdiEnumeratorCachedSourceInfo(
        DMMVIDEOPRESENTSOURCESET *this,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a2)
{
  unsigned int v2; // ebx
  void *Instance; // rax
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE *v6; // rax
  unsigned int v7; // ecx
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE *v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *a2 = 0LL;
  v9 = 0LL;
  Instance = (void *)Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>::CreateInstance(0LL);
  auto_ptr<Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>>::reset((void **)&v9, Instance);
  if ( v9 )
  {
    v6 = v9 + 2;
    v7 = ++*((_DWORD *)this + 14);
    *a2 = v6;
    *v6 = (struct _D3DKMDT_VIDEO_PRESENT_SOURCE)v7;
  }
  else
  {
    v2 = -1073741801;
  }
  operator delete(0LL);
  return v2;
}

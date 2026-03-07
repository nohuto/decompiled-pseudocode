__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AcquireRawDdiEnumeratorCachedTargetInfo(
        DMMVIDEOPRESENTTARGETSET *this,
        struct _D3DKMDT_VIDEO_PRESENT_TARGET **a2)
{
  unsigned int v2; // ebx
  void *Instance; // rax
  struct _D3DKMDT_VIDEO_PRESENT_TARGET *v6; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v7; // ecx
  char *v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *a2 = 0LL;
  v9 = 0LL;
  Instance = (void *)Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>::CreateInstance(0LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v9, Instance);
  if ( v9 )
  {
    v6 = (struct _D3DKMDT_VIDEO_PRESENT_TARGET *)(v9 + 16);
    v7 = ++*((_DWORD *)this + 14);
    *a2 = v6;
    v6->Id = v7;
    v6->VideoOutputTechnology = D3DKMDT_VOT_UNINITIALIZED;
    *(_QWORD *)&v6->VideoOutputHpdAwareness = 0LL;
  }
  else
  {
    v2 = -1073741801;
  }
  operator delete(0LL);
  return v2;
}

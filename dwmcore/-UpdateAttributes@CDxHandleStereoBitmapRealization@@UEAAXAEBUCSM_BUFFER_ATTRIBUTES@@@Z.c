void __fastcall CDxHandleStereoBitmapRealization::UpdateAttributes(
        CDxHandleStereoBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  unsigned int v2; // edi
  int v3; // ebp
  int v4; // r14d
  int v5; // esi
  __int64 v7; // rdx
  int v8; // r8d
  char v9; // cl
  int v10; // eax

  v2 = 3;
  v3 = *((_DWORD *)this - 54);
  v4 = *((_DWORD *)this - 20);
  v5 = 3;
  if ( *((_DWORD *)this - 66) )
    v5 = *((_DWORD *)this - 66);
  CDxHandleBitmapRealization::UpdateAttributes(this, a2);
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    v8 = *((_DWORD *)this - 66);
    v9 = 0;
    v10 = 3;
    if ( v8 )
      v10 = *((_DWORD *)this - 66);
    if ( v5 != v10 )
    {
      if ( v8 )
        v2 = *((_DWORD *)this - 66);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v7 + 80) + 8LL))(v7 + 80, v2);
      v9 = 1;
    }
    if ( v3 != *((_DWORD *)this - 54) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 16LL))(*((_QWORD *)this + 5) + 80LL);
      v9 = 1;
    }
    if ( v4 == *((_DWORD *)this - 20) )
    {
      if ( !v9 )
        return;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 24LL))(*((_QWORD *)this + 5) + 80LL);
    }
    CD2DBitmapCache::InitializeCache(
      (CDxHandleStereoBitmapRealization *)((char *)this + 48),
      (struct ID2DBitmapCacheSource *)((*((_QWORD *)this + 5) + 96LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 5) >> 64)));
  }
}

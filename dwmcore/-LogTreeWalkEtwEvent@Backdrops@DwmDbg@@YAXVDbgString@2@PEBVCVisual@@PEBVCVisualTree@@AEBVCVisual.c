void __fastcall DwmDbg::Backdrops::LogTreeWalkEtwEvent(void **a1, __int64 a2, __int64 *a3, _QWORD *a4, const char **a5)
{
  void *v8; // rcx
  char *v9; // rcx
  char **DebugString; // rax
  int v11; // r9d
  int v12; // r8d
  const char *v13; // rcx
  void *v14; // rbx
  __int64 v15; // rax
  const char **v16; // rax
  char v17; // di
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // [rsp+68h] [rbp-21h] BYREF
  const char *v22; // [rsp+70h] [rbp-19h] BYREF
  const char *v23; // [rsp+78h] [rbp-11h] BYREF
  const char *v24; // [rsp+80h] [rbp-9h] BYREF
  const char *v25; // [rsp+88h] [rbp-1h] BYREF
  const char *v26; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int64 CurrentFrameId; // [rsp+98h] [rbp+Fh] BYREF
  const char *v28; // [rsp+A0h] [rbp+17h] BYREF
  void *lpMem; // [rsp+A8h] [rbp+1Fh] BYREF
  void *v30; // [rsp+B0h] [rbp+27h] BYREF
  void *v31; // [rsp+B8h] [rbp+2Fh] BYREF

  LODWORD(v21) = 0;
  if ( dword_1803E0760 )
  {
    if ( (unsigned int)dword_1803E0760 > 5 )
    {
      v22 = *a5;
      DebugString = CVisualTreePath::GetDebugString(a4, (char **)&v31, (__int64)a3);
      v11 = *(_DWORD *)(a2 + 268);
      v12 = *(_DWORD *)(a2 + 264);
      v13 = *DebugString;
      LODWORD(DebugString) = *(unsigned __int8 *)(a2 + 272);
      v23 = v13;
      DwmDbg::DbgString::DbgString(
        (char **)&v21,
        "BackdropsInSubgraph=%d, WindowBackdropsInSubgraph=%d, HasBackdropInput=%d, HasWindowBackdropInput=%d, HasBlurred"
        "WallpaperBackdropInput=%d",
        v12,
        v11,
        (unsigned __int8)DebugString & 1,
        ((unsigned int)DebugString >> 2) & 1,
        ((unsigned int)DebugString >> 1) & 1);
      v14 = v21;
      v15 = *a3;
      v24 = (const char *)v21;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v15 + 184))(a3) )
      {
        v16 = (const char **)DwmDbg::DbgString::DbgString((char **)&v30, "0x%p (DesktopTree)", a3);
        v17 = 1;
      }
      else
      {
        DwmDbg::DbgString::DbgString((char **)&v21, "0x%p", a3);
        v16 = (const char **)&v21;
        v17 = 2;
      }
      v25 = *v16;
      v26 = *(const char **)DwmDbg::DbgString::DbgString((char **)&lpMem, "0x%p", (const void *)a2);
      CurrentFrameId = GetCurrentFrameId();
      v28 = (const char *)*a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        v18,
        byte_18037ED70,
        v19,
        v20,
        &v28,
        (__int64)&CurrentFrameId,
        &v26,
        &v25,
        &v24,
        &v23,
        &v22);
      if ( lpMem )
        operator delete(lpMem);
      if ( (v17 & 2) != 0 )
      {
        v17 &= ~2u;
        if ( v21 )
          operator delete(v21);
      }
      if ( (v17 & 1) != 0 && v30 )
        operator delete(v30);
      if ( v14 )
        operator delete(v14);
      if ( v31 )
        operator delete(v31);
    }
    if ( *a1 )
      operator delete(*a1);
    v9 = (char *)*a5;
  }
  else
  {
    v8 = *a1;
    if ( v8 )
      operator delete(v8);
    v9 = (char *)*a5;
  }
  if ( v9 )
    operator delete(v9);
}

void __fastcall DwmDbg::Backdrops::LogBrushEtwEvent(const char **a1, const void *a2, void **a3)
{
  char *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 CurrentFrameId; // [rsp+48h] [rbp-20h] BYREF
  const char *v11; // [rsp+50h] [rbp-18h] BYREF
  void *lpMem; // [rsp+58h] [rbp-10h] BYREF
  const char *v13; // [rsp+88h] [rbp+20h] BYREF

  if ( dword_1803E0760 )
  {
    if ( (unsigned int)dword_1803E0760 > 5 )
    {
      v13 = (const char *)*a3;
      v9 = *(const char **)DwmDbg::DbgString::DbgString((char **)&lpMem, "0x%p", a2);
      CurrentFrameId = GetCurrentFrameId();
      v11 = *a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        v6,
        byte_18037EDF2,
        v7,
        v8,
        &v11,
        (__int64)&CurrentFrameId,
        &v9,
        &v13);
      if ( lpMem )
        operator delete(lpMem);
    }
    v5 = (char *)*a1;
  }
  else
  {
    v5 = (char *)*a1;
  }
  if ( v5 )
    operator delete(v5);
  if ( *a3 )
    operator delete(*a3);
}

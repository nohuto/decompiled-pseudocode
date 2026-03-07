__int64 __fastcall HideInkCursorProvider::ValidatePointer(
        HideInkCursorProvider *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  const struct tagPOINTER_INFO *v11; // [rsp+50h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  const char *v13; // [rsp+68h] [rbp+28h] BYREF

  v11 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, &v11, a3);
  v6 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    v7 = *(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)v11 + 2), 19) + 472);
    if ( *(_DWORD *)(v7 + 24) != 5 )
    {
      v6 = -1073741811;
      if ( (unsigned int)dword_1C03570E0 > 2 )
      {
        LOBYTE(v11) = *(_BYTE *)(v7 + 24);
        v13 = "Not an integrated pen device";
        LODWORD(v12) = -1073741811;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
          v7,
          byte_1C031F535,
          v8,
          v9,
          (__int64)&v12,
          (void **)&v13,
          (__int64)&v11);
      }
    }
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    LODWORD(v11) = PointerInfoByPointerId;
    v12 = (__int64)"Wrong thread (or invalid pointer id)";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C03570E0,
      byte_1C031EF8B,
      v4,
      v5,
      (__int64)&v11,
      (void **)&v12);
  }
  return v6;
}

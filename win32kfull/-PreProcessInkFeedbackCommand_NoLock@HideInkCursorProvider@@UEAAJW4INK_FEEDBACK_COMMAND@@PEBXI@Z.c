__int64 __fastcall HideInkCursorProvider::PreProcessInkFeedbackCommand_NoLock(
        HideInkCursorProvider *a1,
        int a2,
        unsigned int *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+50h] [rbp-9h] BYREF
  char v9; // [rsp+54h] [rbp-5h] BYREF
  __int64 v10; // [rsp+58h] [rbp-1h] BYREF
  HideInkCursorProvider *v11; // [rsp+60h] [rbp+7h] BYREF
  void *v12; // [rsp+68h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+70h] [rbp+17h] BYREF
  int *v14; // [rsp+90h] [rbp+37h]
  int v15; // [rsp+98h] [rbp+3Fh]
  int v16; // [rsp+9Ch] [rbp+43h]

  if ( a2 == 3 )
  {
    if ( (_DWORD)a4 != 4 )
    {
      v4 = -1073741811;
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v4;
      goto LABEL_13;
    }
    v4 = HideInkCursorProvider::ValidatePointer(a1, *a3);
    if ( (v4 & 0x80000000) == 0 || (unsigned int)dword_1C03570E0 <= 2 )
      return v4;
LABEL_16:
    v8 = v4;
    v10 = (__int64)"ValidatePointer failed";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C03570E0,
      byte_1C031EF8B,
      v5,
      v6,
      (__int64)&v8,
      (void **)&v10);
    return v4;
  }
  if ( a2 == 4 )
  {
    if ( (_DWORD)a4 != 4 )
    {
      v4 = -1073741811;
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v4;
LABEL_13:
      v16 = 0;
      v8 = -1073741811;
      v15 = 4;
      v14 = &v8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03570E0,
        (unsigned __int8 *)dword_1C031DA06,
        0LL,
        0LL,
        3u,
        &v13);
      return v4;
    }
    v4 = HideInkCursorProvider::ValidatePointer(a1, *a3);
    if ( (v4 & 0x80000000) == 0 || (unsigned int)dword_1C03570E0 <= 2 )
      return v4;
    goto LABEL_16;
  }
  v4 = -1073741637;
  if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v12 = (void *)*((_QWORD *)a1 + 6);
    v10 = (__int64)"Unsupported command";
    v9 = a2;
    v11 = a1;
    v8 = -1073741637;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)a1,
      byte_1C031F5EE,
      (unsigned int)(a2 - 3),
      a4,
      (__int64)&v8,
      (void **)&v10,
      &v12,
      (__int64)&v11,
      (__int64)&v9);
  }
  return v4;
}

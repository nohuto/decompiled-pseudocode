void __fastcall InputTraceLogging::Mouse::SetShellClip(struct tagRECT *a1, unsigned int a2)
{
  __int64 v3; // rdi
  LONG *p_right; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  LONG v7; // [rsp+40h] [rbp+7h] BYREF
  LONG v8; // [rsp+44h] [rbp+Bh] BYREF
  int v9; // [rsp+48h] [rbp+Fh] BYREF
  int v10; // [rsp+4Ch] [rbp+13h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp+17h] BYREF
  LONG *v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v3 = a2;
  if ( InputTraceLogging::Enabled(0) )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
    {
      v14 = 0;
      v12 = &v7;
      v7 = v3;
      v13 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02CA7E0,
        (unsigned __int8 *)dword_1C029B5E4,
        0LL,
        0LL,
        3u,
        &v11);
    }
    if ( (_DWORD)v3 )
    {
      p_right = &a1->right;
      do
      {
        if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
        {
          v7 = p_right[1];
          v8 = *p_right;
          v9 = *(p_right - 1);
          v10 = *(p_right - 2);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C02CA7E0,
            byte_1C029B612,
            v5,
            v6,
            (__int64)&v10,
            (__int64)&v9,
            (__int64)&v8,
            (__int64)&v7);
        }
        p_right += 4;
        --v3;
      }
      while ( v3 );
    }
  }
}

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const char **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const char *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-99h] BYREF
  __int64 v17; // [rsp+50h] [rbp-79h]
  __int64 v18; // [rsp+58h] [rbp-71h]
  __int64 v19; // [rsp+60h] [rbp-69h]
  __int64 v20; // [rsp+68h] [rbp-61h]
  const char *v21; // [rsp+70h] [rbp-59h]
  int v22; // [rsp+78h] [rbp-51h]
  int v23; // [rsp+7Ch] [rbp-4Dh]
  __int64 v24; // [rsp+80h] [rbp-49h]
  __int64 v25; // [rsp+88h] [rbp-41h]
  __int64 v26; // [rsp+90h] [rbp-39h]
  __int64 v27; // [rsp+98h] [rbp-31h]
  __int64 v28; // [rsp+A0h] [rbp-29h]
  __int64 v29; // [rsp+A8h] [rbp-21h]
  __int64 v30; // [rsp+B0h] [rbp-19h]
  __int64 v31; // [rsp+B8h] [rbp-11h]
  __int64 v32; // [rsp+C0h] [rbp-9h]
  __int64 v33; // [rsp+C8h] [rbp-1h]

  v32 = a12;
  v30 = a11;
  v28 = a10;
  v26 = a9;
  v24 = a8;
  v33 = 4LL;
  v31 = 4LL;
  v29 = 4LL;
  v12 = *a7;
  v27 = 8LL;
  v25 = 4LL;
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = word_180338FC0;
    v14 = 1;
  }
  v22 = v14;
  v19 = a6;
  v17 = a5;
  v21 = v12;
  v23 = 0;
  v20 = 4LL;
  v18 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 0xAu, &v16);
}

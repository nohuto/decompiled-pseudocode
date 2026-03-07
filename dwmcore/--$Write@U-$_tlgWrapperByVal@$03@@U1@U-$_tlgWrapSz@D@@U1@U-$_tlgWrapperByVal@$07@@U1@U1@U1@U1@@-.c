ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a12,
        __int64 a13)
{
  const char *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v18; // [rsp+50h] [rbp-91h]
  __int64 v19; // [rsp+58h] [rbp-89h]
  __int64 v20; // [rsp+60h] [rbp-81h]
  __int64 v21; // [rsp+68h] [rbp-79h]
  const char *v22; // [rsp+70h] [rbp-71h]
  int v23; // [rsp+78h] [rbp-69h]
  int v24; // [rsp+7Ch] [rbp-65h]
  __int64 v25; // [rsp+80h] [rbp-61h]
  __int64 v26; // [rsp+88h] [rbp-59h]
  __int64 v27; // [rsp+90h] [rbp-51h]
  __int64 v28; // [rsp+98h] [rbp-49h]
  __int64 v29; // [rsp+A0h] [rbp-41h]
  __int64 v30; // [rsp+A8h] [rbp-39h]
  __int64 v31; // [rsp+B0h] [rbp-31h]
  __int64 v32; // [rsp+B8h] [rbp-29h]
  __int64 v33; // [rsp+C0h] [rbp-21h]
  __int64 v34; // [rsp+C8h] [rbp-19h]
  __int64 v35; // [rsp+D0h] [rbp-11h]
  __int64 v36; // [rsp+D8h] [rbp-9h]

  v35 = a13;
  v33 = a12;
  v31 = a11;
  v29 = a10;
  v27 = a9;
  v25 = a8;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 4LL;
  v13 = *a7;
  v30 = 4LL;
  v28 = 8LL;
  v26 = 4LL;
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = word_180338FC0;
    v15 = 1;
  }
  v23 = v15;
  v20 = a6;
  v18 = a5;
  v22 = v13;
  v24 = 0;
  v21 = 4LL;
  v19 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 0xBu, &v17);
}

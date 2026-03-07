ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        wchar_t **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  wchar_t *v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v20; // [rsp+50h] [rbp-A9h]
  __int64 v21; // [rsp+58h] [rbp-A1h]
  wchar_t *v22; // [rsp+60h] [rbp-99h]
  int v23; // [rsp+68h] [rbp-91h]
  int v24; // [rsp+6Ch] [rbp-8Dh]
  __int64 v25; // [rsp+70h] [rbp-89h]
  __int64 v26; // [rsp+78h] [rbp-81h]
  __int64 v27; // [rsp+80h] [rbp-79h]
  __int64 v28; // [rsp+88h] [rbp-71h]
  __int64 v29; // [rsp+90h] [rbp-69h]
  __int64 v30; // [rsp+98h] [rbp-61h]
  __int64 v31; // [rsp+A0h] [rbp-59h]
  __int64 v32; // [rsp+A8h] [rbp-51h]
  __int64 v33; // [rsp+B0h] [rbp-49h]
  __int64 v34; // [rsp+B8h] [rbp-41h]
  __int64 v35; // [rsp+C0h] [rbp-39h]
  __int64 v36; // [rsp+C8h] [rbp-31h]
  __int64 v37; // [rsp+D0h] [rbp-29h]
  __int64 v38; // [rsp+D8h] [rbp-21h]
  __int64 v39; // [rsp+E0h] [rbp-19h]
  __int64 v40; // [rsp+E8h] [rbp-11h]

  v39 = a14;
  v37 = a13;
  v35 = a12;
  v33 = a11;
  v31 = a10;
  v29 = a9;
  v27 = a8;
  v25 = a7;
  v40 = 4LL;
  v38 = 8LL;
  v36 = 8LL;
  v15 = *a6;
  v34 = 8LL;
  v32 = 8LL;
  v30 = 1LL;
  v28 = 4LL;
  v26 = 4LL;
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = word_1803392B0;
    v17 = 2;
  }
  v20 = a5;
  v22 = v15;
  v23 = v17;
  v24 = 0;
  v21 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E0B40, a2, 0LL, 0LL, 0xCu, &v19);
}

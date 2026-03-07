NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7,
        void **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  _BYTE *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // ecx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v18; // [rsp+50h] [rbp-89h]
  __int64 v19; // [rsp+58h] [rbp-81h]
  __int64 v20; // [rsp+60h] [rbp-79h]
  __int64 v21; // [rsp+68h] [rbp-71h]
  _DWORD *v22; // [rsp+70h] [rbp-69h]
  __int64 v23; // [rsp+78h] [rbp-61h]
  __int64 v24; // [rsp+80h] [rbp-59h]
  _DWORD v25[2]; // [rsp+88h] [rbp-51h] BYREF
  _BYTE *v26; // [rsp+90h] [rbp-49h]
  int v27; // [rsp+98h] [rbp-41h]
  int v28; // [rsp+9Ch] [rbp-3Dh]
  __int64 v29; // [rsp+A0h] [rbp-39h]
  __int64 v30; // [rsp+A8h] [rbp-31h]
  __int64 v31; // [rsp+B0h] [rbp-29h]
  __int64 v32; // [rsp+B8h] [rbp-21h]
  __int64 v33; // [rsp+C0h] [rbp-19h]
  __int64 v34; // [rsp+C8h] [rbp-11h]
  __int64 v35; // [rsp+D0h] [rbp-9h]
  __int64 v36; // [rsp+D8h] [rbp-1h]

  v35 = a12;
  v33 = a11;
  v31 = a10;
  v29 = a9;
  v36 = 8LL;
  v34 = 8LL;
  v32 = 8LL;
  v12 = *a8;
  v30 = 8LL;
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
    v12 = &unk_1C00627B9;
    v14 = 1;
  }
  v27 = v14;
  v26 = v12;
  v22 = v25;
  v28 = 0;
  v23 = 2LL;
  v15 = **a7;
  v24 = *((_QWORD *)*a7 + 1);
  v20 = a6;
  v18 = a5;
  v25[0] = v15;
  v25[1] = 0;
  v21 = 8LL;
  v19 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, 0LL, 0LL, 0xBu, &v17);
}

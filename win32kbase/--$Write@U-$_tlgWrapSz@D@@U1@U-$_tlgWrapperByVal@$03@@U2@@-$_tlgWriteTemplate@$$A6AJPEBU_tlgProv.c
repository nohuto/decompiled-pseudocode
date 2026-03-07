__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  _BYTE *v14; // rdx
  int v15; // ecx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-39h] BYREF
  _BYTE *v18; // [rsp+50h] [rbp-19h]
  int v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  _BYTE *v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  __int64 v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  __int64 v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]

  v26 = a8;
  v24 = a7;
  v10 = -1LL;
  v27 = 4LL;
  v25 = 4LL;
  v11 = *a6;
  if ( *a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v11 = &unk_1C02A2108;
    v13 = 1;
  }
  v22 = v13;
  v21 = v11;
  v23 = 0;
  v14 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v14[v10] );
    v15 = v10 + 1;
  }
  else
  {
    v14 = &unk_1C02A2108;
    v15 = 1;
  }
  v18 = v14;
  v19 = v15;
  v20 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 6u, &v17);
}

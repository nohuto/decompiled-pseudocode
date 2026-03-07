NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        void **a12,
        __int64 a13,
        const WCHAR **a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        const WCHAR **a19,
        void **a20)
{
  __int64 v22; // rcx
  _BYTE *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // r8d
  const WCHAR *v27; // rdx
  __int64 v28; // rax
  int v29; // r9d
  const WCHAR *v30; // rdx
  __int64 v31; // rax
  _BYTE *v32; // rdx
  int v33; // ecx
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  _BYTE *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  __int64 v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  const WCHAR *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  __int64 v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int64 v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  __int64 v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  __int64 v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  const WCHAR *v66; // [rsp+130h] [rbp+30h]
  int v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+13Ch] [rbp+3Ch]
  _BYTE *v69; // [rsp+140h] [rbp+40h]
  int v70; // [rsp+148h] [rbp+48h]
  int v71; // [rsp+14Ch] [rbp+4Ch]

  v22 = -1LL;
  v23 = *a20;
  if ( *a20 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v23 = &unk_1C02A2108;
    v25 = 1;
  }
  v70 = v25;
  v26 = 2;
  v69 = v23;
  v71 = 0;
  v27 = *a19;
  if ( *a19 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v27 = &word_1C02856D8;
    v29 = 2;
  }
  v64 = a18;
  v62 = a17;
  v60 = a16;
  v58 = a15;
  v66 = v27;
  v67 = v29;
  v68 = 0;
  v30 = *a14;
  v65 = 4LL;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  if ( v30 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v26 = 2 * v31 + 2;
  }
  else
  {
    v30 = &word_1C02856D8;
  }
  v53 = a13;
  v55 = v30;
  v56 = v26;
  v57 = 0;
  v32 = *a12;
  v54 = 8LL;
  if ( v32 )
  {
    do
      ++v22;
    while ( v32[v22] );
    v33 = v22 + 1;
  }
  else
  {
    v32 = &unk_1C02A2108;
    v33 = 1;
  }
  v48 = a11;
  v46 = a10;
  v44 = a9;
  v42 = a8;
  v40 = a7;
  v38 = a6;
  v36 = a5;
  v50 = v32;
  v51 = v33;
  v52 = 0;
  v49 = 8LL;
  v47 = 4LL;
  v45 = 8LL;
  v43 = 4LL;
  v41 = 4LL;
  v39 = 8LL;
  v37 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x12u, &v35);
}

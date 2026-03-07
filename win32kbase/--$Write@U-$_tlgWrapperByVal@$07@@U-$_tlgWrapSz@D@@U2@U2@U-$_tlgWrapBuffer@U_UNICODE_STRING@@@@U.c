NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        void **a8,
        unsigned __int16 **a9,
        void **a10,
        __int64 *a11,
        const WCHAR **a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22)
{
  __int64 v24; // rdx
  const WCHAR *v25; // rcx
  __int64 v26; // rax
  int v27; // r8d
  _BYTE *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  int v31; // ecx
  _BYTE *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  _BYTE *v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  _BYTE *v38; // rcx
  int v39; // edx
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  _BYTE *v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+6Ch] [rbp-94h]
  _BYTE *v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+78h] [rbp-88h]
  int v49; // [rsp+7Ch] [rbp-84h]
  _BYTE *v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+88h] [rbp-78h]
  int v52; // [rsp+8Ch] [rbp-74h]
  _DWORD *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  _DWORD v56[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE *v57; // [rsp+B0h] [rbp-50h]
  int v58; // [rsp+B8h] [rbp-48h]
  int v59; // [rsp+BCh] [rbp-44h]
  __int64 v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  const WCHAR *v62; // [rsp+D0h] [rbp-30h]
  int v63; // [rsp+D8h] [rbp-28h]
  int v64; // [rsp+DCh] [rbp-24h]
  __int64 v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  __int64 v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  __int64 v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  __int64 v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  __int64 v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]
  __int64 v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  __int64 v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  __int64 v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+178h] [rbp+78h]

  v83 = a22;
  v81 = a21;
  v24 = -1LL;
  v79 = a20;
  v77 = a19;
  v75 = a18;
  v73 = a17;
  v71 = a16;
  v69 = a15;
  v67 = a14;
  v65 = a13;
  v84 = 8LL;
  v82 = 8LL;
  v80 = 4LL;
  v25 = *a12;
  v78 = 4LL;
  v76 = 4LL;
  v74 = 8LL;
  v72 = 1LL;
  v70 = 1LL;
  v68 = 1LL;
  v66 = 8LL;
  if ( v25 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = &word_1C02856D8;
    v27 = 2;
  }
  v62 = v25;
  v63 = v27;
  v64 = 0;
  v60 = *a11;
  v61 = 16LL;
  v28 = *a10;
  if ( *a10 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v28 = &unk_1C02A2108;
    v30 = 1;
  }
  v58 = v30;
  v53 = v56;
  v57 = v28;
  v59 = 0;
  v54 = 2LL;
  v31 = **a9;
  v55 = *((_QWORD *)*a9 + 1);
  v56[0] = v31;
  v56[1] = 0;
  v32 = *a8;
  if ( *a8 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( v32[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v32 = &unk_1C02A2108;
    v34 = 1;
  }
  v51 = v34;
  v50 = v32;
  v52 = 0;
  v35 = *a7;
  if ( *a7 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( v35[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v35 = &unk_1C02A2108;
    v37 = 1;
  }
  v48 = v37;
  v47 = v35;
  v49 = 0;
  v38 = *a6;
  if ( *a6 )
  {
    do
      ++v24;
    while ( v38[v24] );
    v39 = v24 + 1;
  }
  else
  {
    v38 = &unk_1C02A2108;
    v39 = 1;
  }
  v42 = a5;
  v44 = v38;
  v45 = v39;
  v46 = 0;
  v43 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x15u, &v41);
}

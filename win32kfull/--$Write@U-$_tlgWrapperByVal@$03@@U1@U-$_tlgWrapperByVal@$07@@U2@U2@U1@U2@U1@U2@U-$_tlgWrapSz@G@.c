NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
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
        __int64 a12,
        __int64 a13,
        const unsigned __int16 **a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        const unsigned __int16 **a19,
        void **a20)
{
  __int64 v22; // rcx
  _BYTE *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // r8d
  const unsigned __int16 *v27; // rdx
  __int64 v28; // rax
  int v29; // r9d
  const unsigned __int16 *v30; // rdx
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v51; // [rsp+E0h] [rbp-20h]
  int v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+ECh] [rbp-14h]
  __int64 v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  __int64 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v62; // [rsp+130h] [rbp+30h]
  int v63; // [rsp+138h] [rbp+38h]
  int v64; // [rsp+13Ch] [rbp+3Ch]
  _BYTE *v65; // [rsp+140h] [rbp+40h]
  int v66; // [rsp+148h] [rbp+48h]
  int v67; // [rsp+14Ch] [rbp+4Ch]

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
    v23 = &unk_1C03206E9;
    v25 = 1;
  }
  v66 = v25;
  v26 = 2;
  v65 = v23;
  v67 = 0;
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
    v27 = &word_1C03142AC;
    v29 = 2;
  }
  v60 = a18;
  v58 = a17;
  v56 = a16;
  v54 = a15;
  v62 = v27;
  v63 = v29;
  v64 = 0;
  v30 = *a14;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 4LL;
  if ( v30 )
  {
    do
      ++v22;
    while ( v30[v22] );
    v26 = 2 * v22 + 2;
  }
  else
  {
    v30 = &word_1C03142AC;
  }
  v49 = a13;
  v47 = a12;
  v45 = a11;
  v43 = a10;
  v41 = a9;
  v39 = a8;
  v37 = a7;
  v35 = a6;
  v33 = a5;
  v51 = v30;
  v52 = v26;
  v53 = 0;
  v50 = 8LL;
  v48 = 4LL;
  v46 = 8LL;
  v44 = 4LL;
  v42 = 8LL;
  v40 = 8LL;
  v38 = 8LL;
  v36 = 4LL;
  v34 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x12u, &v32);
}

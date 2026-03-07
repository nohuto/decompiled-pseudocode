NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        const unsigned __int16 **a10,
        void **a11,
        void **a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void **a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25)
{
  __int64 v26; // rdx
  _BYTE *v28; // r8
  __int64 v29; // rax
  int v30; // eax
  _BYTE *v31; // r8
  __int64 v32; // rax
  int v33; // eax
  _BYTE *v34; // r8
  __int64 v35; // rax
  int v36; // eax
  int v37; // r8d
  const unsigned __int16 *v38; // rcx
  __int64 v39; // rax
  int v40; // r9d
  const unsigned __int16 *v41; // rcx
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+30h] [rbp-D0h] BYREF
  const unsigned __int16 *v44; // [rsp+50h] [rbp-B0h]
  int v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+5Ch] [rbp-A4h]
  __int64 v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v55; // [rsp+A0h] [rbp-60h]
  int v56; // [rsp+A8h] [rbp-58h]
  int v57; // [rsp+ACh] [rbp-54h]
  _BYTE *v58; // [rsp+B0h] [rbp-50h]
  int v59; // [rsp+B8h] [rbp-48h]
  int v60; // [rsp+BCh] [rbp-44h]
  _BYTE *v61; // [rsp+C0h] [rbp-40h]
  int v62; // [rsp+C8h] [rbp-38h]
  int v63; // [rsp+CCh] [rbp-34h]
  __int64 v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  __int64 v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  __int64 v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  __int64 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  _BYTE *v72; // [rsp+110h] [rbp+10h]
  int v73; // [rsp+118h] [rbp+18h]
  int v74; // [rsp+11Ch] [rbp+1Ch]
  __int64 v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  __int64 v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  __int64 v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  __int64 v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  __int64 v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  __int64 v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  __int64 v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]

  v89 = a25;
  v87 = a24;
  v26 = -1LL;
  v85 = a23;
  v83 = a22;
  v81 = a21;
  v79 = a20;
  v77 = a19;
  v75 = a18;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 4LL;
  v28 = *a17;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 4LL;
  if ( v28 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v28 = &unk_1C03206E9;
    v30 = 1;
  }
  v73 = v30;
  v70 = a16;
  v68 = a15;
  v66 = a14;
  v64 = a13;
  v72 = v28;
  v74 = 0;
  v71 = 4LL;
  v31 = *a12;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 4LL;
  if ( v31 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v31 = &unk_1C03206E9;
    v33 = 1;
  }
  v62 = v33;
  v61 = v31;
  v63 = 0;
  v34 = *a11;
  if ( *a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v34 = &unk_1C03206E9;
    v36 = 1;
  }
  v59 = v36;
  v58 = v34;
  v37 = 2;
  v60 = 0;
  v38 = *a10;
  if ( *a10 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v38 = &word_1C03142AC;
    v40 = 2;
  }
  v53 = a9;
  v51 = a8;
  v49 = a7;
  v47 = a6;
  v55 = v38;
  v56 = v40;
  v57 = 0;
  v41 = *a5;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 4LL;
  if ( v41 )
  {
    do
      ++v26;
    while ( v41[v26] );
    v37 = 2 * v26 + 2;
  }
  else
  {
    v41 = &word_1C03142AC;
  }
  v44 = v41;
  v45 = v37;
  v46 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x17u, &v43);
}

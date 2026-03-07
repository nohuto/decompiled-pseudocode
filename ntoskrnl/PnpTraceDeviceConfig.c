char __fastcall PnpTraceDeviceConfig(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const size_t *a4,
        const size_t *a5,
        const size_t *a6,
        const size_t *a7,
        const size_t *a8,
        const size_t *a9,
        const size_t *a10,
        const size_t *a11,
        char a12,
        unsigned __int16 *a13,
        char a14,
        char a15,
        __int64 a16,
        int a17,
        int *a18)
{
  int v18; // eax
  unsigned __int16 *v20; // r9
  const size_t *v21; // r10
  int v22; // eax
  const size_t *v23; // r11
  char v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26; // [rsp+31h] [rbp-CFh] BYREF
  char v27; // [rsp+32h] [rbp-CEh] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  const size_t *v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  int *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  _DWORD *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  _DWORD v41[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int64 v44; // [rsp+D0h] [rbp-30h]
  _DWORD v45[2]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v46[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v47[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v48[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v49[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v50[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v51[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v52[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v53[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v54[16]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v55[16]; // [rsp+170h] [rbp+70h] BYREF
  char *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  char *v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  char *v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  __int64 *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  const size_t **v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  __int64 *v66; // [rsp+1D0h] [rbp+D0h]
  __int64 v67; // [rsp+1D8h] [rbp+D8h]

  LOBYTE(v18) = (_BYTE)a11;
  v29 = a11;
  v30 = 0LL;
  if ( a18 )
  {
    HIDWORD(v30) = a18[1];
    v18 = *a18;
    LODWORD(v30) = *a18;
  }
  if ( (unsigned int)dword_140C06930 > 5 )
  {
    LOBYTE(v18) = tlgKeywordOn((__int64)&dword_140C06930, 0x800000000000LL);
    if ( (_BYTE)v18 )
    {
      v34 = &v31;
      v36 = &v28;
      v38 = v41;
      v40 = *((_QWORD *)v20 + 1);
      v41[0] = *v20;
      v42 = v45;
      v44 = *((_QWORD *)a13 + 1);
      v22 = *a13;
      v28 = 0;
      v41[1] = 0;
      v45[1] = 0;
      v45[0] = v22;
      v31 = 2048LL;
      v35 = 8LL;
      v37 = 4LL;
      v39 = 2LL;
      v43 = 2LL;
      tlgCreate1Sz_wchar_t((__int64)v46, v21);
      tlgCreate1Sz_wchar_t((__int64)v47, v23);
      tlgCreate1Sz_wchar_t((__int64)v48, a4);
      tlgCreate1Sz_wchar_t((__int64)v49, a5);
      tlgCreate1Sz_wchar_t((__int64)v50, a6);
      tlgCreate1Sz_wchar_t((__int64)v51, a7);
      tlgCreate1Sz_wchar_t((__int64)v52, a8);
      tlgCreate1Sz_wchar_t((__int64)v53, a9);
      tlgCreate1Sz_wchar_t((__int64)v54, a10);
      tlgCreate1Sz_wchar_t((__int64)v55, v29);
      v56 = &v25;
      v26 = a14;
      v58 = &v26;
      v27 = a15;
      v60 = &v27;
      v32 = a16;
      v62 = &v32;
      LODWORD(v29) = a17;
      v64 = &v29;
      v25 = a12;
      v57 = 1LL;
      v59 = 1LL;
      v61 = 1LL;
      v63 = 8LL;
      v65 = 4LL;
      v66 = &v30;
      v67 = 8LL;
      LOBYTE(v18) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140C06930,
                      (unsigned __int8 *)byte_14002CBE0,
                      0LL,
                      0LL,
                      0x18u,
                      &v33);
    }
  }
  return v18;
}

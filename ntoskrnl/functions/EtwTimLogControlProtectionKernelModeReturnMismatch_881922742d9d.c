char __fastcall EtwTimLogControlProtectionKernelModeReturnMismatch(int a1, __int64 a2)
{
  int v2; // eax
  void *v3; // rsp
  unsigned __int16 Length; // di
  wchar_t *Buffer; // r13
  __int16 v6; // si
  int v7; // r15d
  __int16 v8; // ax
  int v9; // ecx
  void *v10; // rsp
  unsigned __int16 v11; // bx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  _DWORD v16[16]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v17[8]; // [rsp+60h] [rbp+0h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+48h] BYREF
  UNICODE_STRING v20; // [rsp+B0h] [rbp+50h] BYREF
  UNICODE_STRING v21; // [rsp+C0h] [rbp+60h] BYREF
  __int64 v22; // [rsp+D0h] [rbp+70h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+78h] BYREF
  __int64 v24; // [rsp+E0h] [rbp+80h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+88h] BYREF
  __int64 v26; // [rsp+F0h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+A0h] BYREF
  wchar_t *v28; // [rsp+110h] [rbp+B0h]
  int v29; // [rsp+118h] [rbp+B8h]
  int v30; // [rsp+11Ch] [rbp+BCh]
  char *v31; // [rsp+120h] [rbp+C0h]
  __int64 v32; // [rsp+128h] [rbp+C8h]
  wchar_t *v33; // [rsp+130h] [rbp+D0h]
  int v34; // [rsp+138h] [rbp+D8h]
  int v35; // [rsp+13Ch] [rbp+DCh]
  _QWORD *v36; // [rsp+140h] [rbp+E0h]
  __int64 v37; // [rsp+148h] [rbp+E8h]
  _QWORD *v38; // [rsp+150h] [rbp+F0h]
  __int64 v39; // [rsp+158h] [rbp+F8h]
  __int64 *v40; // [rsp+160h] [rbp+100h]
  __int64 v41; // [rsp+168h] [rbp+108h]
  char *v42; // [rsp+170h] [rbp+110h]
  __int64 v43; // [rsp+178h] [rbp+118h]
  _QWORD *v44; // [rsp+180h] [rbp+120h]
  __int64 v45; // [rsp+188h] [rbp+128h]
  __int64 *v46; // [rsp+190h] [rbp+130h]
  __int64 v47; // [rsp+198h] [rbp+138h]
  _QWORD *v48; // [rsp+1A0h] [rbp+140h]
  __int64 v49; // [rsp+1A8h] [rbp+148h]
  _QWORD *v50; // [rsp+1B0h] [rbp+150h]
  __int64 v51; // [rsp+1B8h] [rbp+158h]
  char *v52; // [rsp+1C0h] [rbp+160h]
  __int64 v53; // [rsp+1C8h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1D0h] [rbp+170h] BYREF
  char *v55; // [rsp+1F0h] [rbp+190h]
  __int64 v56; // [rsp+1F8h] [rbp+198h]
  _DWORD *v57; // [rsp+200h] [rbp+1A0h]
  __int64 v58; // [rsp+208h] [rbp+1A8h]
  wchar_t *v59; // [rsp+210h] [rbp+1B0h]
  _DWORD v60[2]; // [rsp+218h] [rbp+1B8h] BYREF
  _DWORD *v61; // [rsp+220h] [rbp+1C0h]
  __int64 v62; // [rsp+228h] [rbp+1C8h]
  __int64 v63; // [rsp+230h] [rbp+1D0h]
  _DWORD v64[2]; // [rsp+238h] [rbp+1D8h] BYREF
  __int64 *v65; // [rsp+240h] [rbp+1E0h]
  __int64 v66; // [rsp+248h] [rbp+1E8h]
  __int64 *v67; // [rsp+250h] [rbp+1F0h]
  __int64 v68; // [rsp+258h] [rbp+1F8h]
  __int64 *v69; // [rsp+260h] [rbp+200h]
  __int64 v70; // [rsp+268h] [rbp+208h]
  __int64 *v71; // [rsp+270h] [rbp+210h]
  __int64 v72; // [rsp+278h] [rbp+218h]
  _QWORD *v73; // [rsp+280h] [rbp+220h]
  __int64 v74; // [rsp+288h] [rbp+228h]
  _QWORD *v75; // [rsp+290h] [rbp+230h]
  __int64 v76; // [rsp+298h] [rbp+238h]
  __int64 *v77; // [rsp+2A0h] [rbp+240h]
  __int64 v78; // [rsp+2A8h] [rbp+248h]

  v17[3] = *(_QWORD *)a2;
  v17[4] = *(_QWORD *)(a2 + 8);
  HIDWORD(v17[2]) = *(_DWORD *)(a2 + 16);
  HIDWORD(v17[5]) = *(_DWORD *)(a2 + 20);
  LODWORD(v17[6]) = *(_DWORD *)(a2 + 24);
  v2 = *(_DWORD *)(a2 + 28);
  LODWORD(v17[2]) = v2;
  v17[1] = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( a1 == 1 )
  {
    v3 = alloca(64LL);
    memset(v17, 0, sizeof(v17));
    v20.MaximumLength = 64;
    v20.Buffer = (wchar_t *)v17;
    Length = 0;
    if ( (int)RtlPcToFileName(v17[3], &v20) >= 0 )
      Length = v20.Length;
    Buffer = v20.Buffer;
    v6 = 6;
    *(_QWORD *)&UserData.Size = 2LL;
    UserData.Ptr = (ULONGLONG)v17;
    v7 = 12;
    if ( Length )
    {
      v28 = v20.Buffer;
      v8 = Length >> 1;
      v9 = Length;
    }
    else
    {
      v28 = L"(null)";
      v8 = 6;
      v9 = 12;
    }
    LOWORD(v17[0]) = v8;
    v29 = v9;
    v30 = 0;
    v10 = alloca(64LL);
    memset(v16, 0, sizeof(v16));
    v21.Buffer = (wchar_t *)v16;
    v21.MaximumLength = 64;
    v11 = 0;
    if ( (int)RtlPcToFileName(v17[4], &v21) >= 0 )
      v11 = v21.Length;
    v31 = (char *)v17 + 4;
    v32 = 2LL;
    if ( v11 )
    {
      v33 = v21.Buffer;
      v6 = v11 >> 1;
      v7 = v11;
    }
    else
    {
      v33 = L"(null)";
    }
    WORD2(v17[0]) = v6;
    v34 = v7;
    v35 = 0;
    v36 = &v17[5];
    v37 = 4LL;
    RtlPcToFileHeader(v17[3], &v17[1]);
    if ( v17[1] )
      v12 = v17[3] - v17[1];
    else
      v12 = 0LL;
    v18 = v12;
    v38 = &v17[3];
    v40 = &v18;
    v42 = (char *)&v17[5] + 4;
    v39 = 8LL;
    v41 = 8LL;
    v43 = 4LL;
    RtlPcToFileHeader(v17[4], &v17[1]);
    if ( v17[1] )
      v13 = v17[4] - v17[1];
    else
      v13 = 0LL;
    v19 = v13;
    v45 = 8LL;
    v44 = &v17[4];
    v47 = 8LL;
    v46 = &v19;
    v48 = &v17[6];
    v50 = &v17[2];
    v52 = (char *)&v17[2] + 4;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    LOBYTE(v2) = EtwWriteEx(
                   EtwSecurityMitigationsRegHandle,
                   &MITIGATION_AUDIT_CONTROL_PROTECTION_KERNEL_MODE_RETURN_MISMATCH,
                   0LL,
                   0,
                   0LL,
                   0LL,
                   0xDu,
                   &UserData);
    if ( !Length )
    {
      Length = 0;
      Buffer = (wchar_t *)&word_14001ECF4;
    }
    if ( !v11 )
      v11 = 0;
    if ( (unsigned int)dword_140C06690 > 5 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        v63 = v14;
        v55 = (char *)&v17[6] + 4;
        HIDWORD(v17[6]) = 1;
        v57 = v60;
        v60[0] = Length;
        v56 = 4LL;
        v61 = v64;
        v64[0] = v11;
        v22 = v17[3];
        v65 = &v22;
        v23 = v18;
        v67 = &v23;
        v24 = v17[4];
        v69 = &v24;
        v25 = v19;
        v71 = &v25;
        LODWORD(v17[7]) = v17[2];
        v73 = &v17[7];
        LODWORD(v17[1]) = HIDWORD(v17[2]);
        v75 = &v17[1];
        v77 = &v26;
        v58 = 2LL;
        v59 = Buffer;
        v60[1] = 0;
        v62 = 2LL;
        v64[1] = 0;
        v66 = 8LL;
        v68 = 8LL;
        v70 = 8LL;
        v72 = 8LL;
        v74 = 4LL;
        v76 = 4LL;
        v26 = 0x1000000LL;
        v78 = 8LL;
        LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140C06690,
                       (unsigned __int8 *)byte_140035788,
                       0LL,
                       0LL,
                       0xEu,
                       &v54);
      }
    }
  }
  return v2;
}

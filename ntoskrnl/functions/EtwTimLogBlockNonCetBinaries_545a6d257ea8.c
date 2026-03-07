void __fastcall EtwTimLogBlockNonCetBinaries(int a1, __int64 a2, int a3, int a4, unsigned __int16 *a5, int a6)
{
  unsigned __int16 *v6; // r14
  __int64 *v7; // rdi
  const wchar_t *v8; // r13
  __int64 *v9; // rax
  ULONG v10; // r12d
  unsigned __int16 v11; // ax
  int v12; // eax
  const wchar_t *v13; // rcx
  int v14; // r15d
  void *v15; // rsi
  __int16 v16; // ax
  int v17; // ecx
  unsigned int v18; // eax
  __int16 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // r9d
  int v23; // r12d
  __int64 v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  ULONG v28; // r9d
  REGHANDLE v29; // rcx
  __int64 *v30; // rdi
  _WORD v31[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v32; // [rsp+3Ch] [rbp-CCh] BYREF
  int v33; // [rsp+40h] [rbp-C8h] BYREF
  int v34; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v36; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v40[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+88h] [rbp-80h] BYREF
  int *v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  _DWORD *v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  __int64 v46; // [rsp+C8h] [rbp-40h]
  _DWORD v47[2]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  void *v50; // [rsp+E8h] [rbp-20h]
  _DWORD v51[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 *v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]
  _DWORD *v54; // [rsp+108h] [rbp+0h]
  __int64 v55; // [rsp+110h] [rbp+8h]
  __int64 v56; // [rsp+118h] [rbp+10h]
  _DWORD v57[2]; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v58; // [rsp+128h] [rbp+20h]
  __int64 v59; // [rsp+130h] [rbp+28h]
  __int64 **v60; // [rsp+138h] [rbp+30h]
  __int64 v61; // [rsp+140h] [rbp+38h]
  __int64 *v62; // [rsp+148h] [rbp+40h]
  __int64 v63; // [rsp+150h] [rbp+48h]
  _QWORD *v64; // [rsp+158h] [rbp+50h]
  __int64 v65; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+168h] [rbp+60h] BYREF
  const wchar_t *v67; // [rsp+178h] [rbp+70h]
  int v68; // [rsp+180h] [rbp+78h]
  int v69; // [rsp+184h] [rbp+7Ch]
  int *v70; // [rsp+188h] [rbp+80h]
  __int64 v71; // [rsp+190h] [rbp+88h]
  const wchar_t *v72; // [rsp+198h] [rbp+90h]
  int v73; // [rsp+1A0h] [rbp+98h]
  int v74; // [rsp+1A4h] [rbp+9Ch]
  __int64 v75[22]; // [rsp+1A8h] [rbp+A0h] BYREF
  int v76; // [rsp+2B8h] [rbp+1B0h] BYREF
  int v77; // [rsp+2C0h] [rbp+1B8h] BYREF

  v77 = a4;
  v76 = a3;
  v6 = a5;
  v7 = &EmptyUnicodeString;
  v37 = a2;
  v34 = a1;
  v38 = 0LL;
  v8 = L"(null)";
  v9 = *(__int64 **)(a2 + 1472);
  *(_OWORD *)&v40[1] = 0LL;
  if ( v9 )
    v7 = v9;
  v36 = v7;
  v10 = 12;
  v11 = *(_WORD *)v7;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v11 )
  {
    v31[0] = v11 >> 1;
    UserData.Ptr = (ULONGLONG)v31;
    v12 = *(unsigned __int16 *)v7;
    v13 = (const wchar_t *)v7[1];
  }
  else
  {
    v31[0] = 6;
    UserData.Ptr = (ULONGLONG)v31;
    v13 = L"(null)";
    v12 = 12;
  }
  v67 = v13;
  v69 = 0;
  v68 = v12;
  EtwpQueryProcessCommandLine(a2, (__int64)&v40[1]);
  v14 = LOWORD(v40[1]);
  v15 = (void *)v40[2];
  v71 = 2LL;
  v70 = &v32;
  if ( LOWORD(v40[1]) )
  {
    v72 = (const wchar_t *)v40[2];
    v16 = LOWORD(v40[1]) >> 1;
    v17 = LOWORD(v40[1]);
  }
  else
  {
    v72 = L"(null)";
    v17 = 12;
    v16 = 6;
  }
  v73 = v17;
  LOWORD(v32) = v16;
  v74 = 0;
  v18 = EtwpTiFillProcessIdentity(v75, v37, &v38) + 4;
  if ( v6 && *v6 )
  {
    v8 = (const wchar_t *)*((_QWORD *)v6 + 1);
    v10 = *v6;
    LOWORD(v33) = *v6 >> 1;
  }
  else
  {
    LOWORD(v33) = v19;
  }
  v20 = 16LL * v18;
  v21 = 16LL * (v18 + 1);
  *(ULONGLONG *)((char *)&UserData.Ptr + v20) = (ULONGLONG)&v33;
  *(ULONG *)((char *)&UserData.Size + v20) = 2;
  *(ULONG *)((char *)&UserData.Reserved + v20) = 0;
  *(ULONGLONG *)((char *)&UserData.Ptr + v21) = (ULONGLONG)v8;
  *(ULONG *)((char *)&UserData.Size + v21) = v10;
  *(ULONG *)((char *)&UserData.Reserved + v21) = 0;
  v22 = v18 + 3;
  v23 = v34;
  v24 = 2LL * (v18 + 2);
  *(&UserData.Ptr + v24) = (ULONGLONG)&v76;
  v25 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_BLOCK_NON_CET_BINARIES;
  *((_QWORD *)&UserData.Size + v24) = 4LL;
  v26 = v22++;
  v26 *= 2LL;
  *(&UserData.Ptr + v26) = (ULONGLONG)&v77;
  *((_QWORD *)&UserData.Size + v26) = 4LL;
  v27 = 2LL * v22;
  v28 = v22 + 1;
  *(&UserData.Ptr + v27) = (ULONGLONG)&a6;
  v29 = EtwSecurityMitigationsRegHandle;
  *((_QWORD *)&UserData.Size + v27) = 4LL;
  if ( v23 != 1 )
    v25 = &MITIGATION_ENFORCE_BLOCK_NON_CET_BINARIES;
  EtwWrite(v29, v25, 0LL, v28, &UserData);
  v30 = v36;
  if ( (unsigned int)dword_140C06690 > 5 && tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL) )
  {
    v34 = v23;
    v42 = &v34;
    v43 = 4LL;
    v44 = v47;
    v46 = v30[1];
    v47[0] = *(unsigned __int16 *)v30;
    v48 = v51;
    v39 = v38;
    v52 = &v39;
    v54 = v57;
    v56 = *((_QWORD *)v6 + 1);
    v57[0] = *v6;
    LODWORD(v35) = v76;
    v58 = &v35;
    LODWORD(v36) = v77;
    v60 = &v36;
    LODWORD(v37) = a6;
    v62 = &v37;
    v64 = v40;
    v45 = 2LL;
    v47[1] = 0;
    v49 = 2LL;
    v50 = v15;
    v51[0] = v14;
    v51[1] = 0;
    v53 = 8LL;
    v55 = 2LL;
    v57[1] = 0;
    v59 = 4LL;
    v61 = 4LL;
    v63 = 4LL;
    v40[0] = 0x1000000LL;
    v65 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C06690,
      (unsigned __int8 *)&dword_140035314,
      0LL,
      0LL,
      0xEu,
      &v41);
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}

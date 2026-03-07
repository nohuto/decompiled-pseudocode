void __fastcall EtwTimLogProhibitNonMicrosoftBinaries(int a1, __int64 a2, char a3, char a4, unsigned __int16 *a5)
{
  __int64 *v5; // rax
  __int64 *v6; // rdi
  unsigned __int16 *v7; // r14
  const wchar_t *v8; // rsi
  unsigned __int16 v11; // ax
  int v12; // eax
  const wchar_t *v13; // rcx
  int v14; // eax
  __int16 v15; // cx
  int v16; // eax
  int v17; // eax
  __int16 v18; // r10
  int v19; // r8d
  unsigned int v20; // r8d
  __int64 v21; // rcx
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  __int64 v24; // rax
  unsigned int v25; // r9d
  ULONG v26; // r15d
  __int64 v27; // rcx
  __int64 v28; // r10
  ULONG v29; // r9d
  const EVENT_DESCRIPTOR *v30; // rdx
  void *v31; // rsi
  char v32; // [rsp+38h] [rbp-D0h] BYREF
  char v33; // [rsp+39h] [rbp-CFh] BYREF
  _WORD v34[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v36; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v39; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v42; // [rsp+98h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  _DWORD *v44; // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B0h] [rbp-58h]
  __int64 v46; // [rsp+B8h] [rbp-50h]
  _DWORD v47[2]; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD *v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-38h]
  void *v50; // [rsp+D8h] [rbp-30h]
  _DWORD v51[2]; // [rsp+E0h] [rbp-28h] BYREF
  unsigned __int64 *v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-18h]
  _DWORD *v54; // [rsp+F8h] [rbp-10h]
  __int64 v55; // [rsp+100h] [rbp-8h]
  __int64 v56; // [rsp+108h] [rbp+0h]
  _DWORD v57[2]; // [rsp+110h] [rbp+8h] BYREF
  char *v58; // [rsp+118h] [rbp+10h]
  __int64 v59; // [rsp+120h] [rbp+18h]
  char *v60; // [rsp+128h] [rbp+20h]
  __int64 v61; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+138h] [rbp+30h] BYREF
  const wchar_t *v63; // [rsp+148h] [rbp+40h]
  int v64; // [rsp+150h] [rbp+48h]
  int v65; // [rsp+154h] [rbp+4Ch]
  int *v66; // [rsp+158h] [rbp+50h]
  __int64 v67; // [rsp+160h] [rbp+58h]
  const wchar_t *v68; // [rsp+168h] [rbp+60h]
  int v69; // [rsp+170h] [rbp+68h]
  int v70; // [rsp+174h] [rbp+6Ch]
  _QWORD v71[24]; // [rsp+178h] [rbp+70h] BYREF
  char v72; // [rsp+298h] [rbp+190h] BYREF
  char v73; // [rsp+2A0h] [rbp+198h] BYREF

  v73 = a4;
  v72 = a3;
  v5 = *(__int64 **)(a2 + 1472);
  v6 = &EmptyUnicodeString;
  v7 = a5;
  v8 = L"(null)";
  v38 = 0LL;
  if ( v5 )
    v6 = v5;
  v39 = 0LL;
  v11 = *(_WORD *)v6;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v11 )
  {
    v34[0] = v11 >> 1;
    UserData.Ptr = (ULONGLONG)v34;
    v12 = *(unsigned __int16 *)v6;
    v13 = (const wchar_t *)v6[1];
  }
  else
  {
    v34[0] = 6;
    UserData.Ptr = (ULONGLONG)v34;
    v13 = L"(null)";
    v12 = 12;
  }
  v63 = v13;
  v64 = v12;
  v65 = 0;
  EtwpQueryProcessCommandLine(a2, (__int64)&v39);
  v67 = 2LL;
  v66 = &v35;
  if ( (_WORD)v39 )
  {
    v68 = (const wchar_t *)*((_QWORD *)&v39 + 1);
    v14 = (unsigned __int16)v39;
    v15 = (unsigned __int16)v39 >> 1;
  }
  else
  {
    v68 = L"(null)";
    v14 = 12;
    v15 = 6;
  }
  LOWORD(v35) = v15;
  v69 = v14;
  v70 = 0;
  v16 = EtwpTiFillProcessIdentity(v71, a2, &v38);
  v17 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v16 + 4)), (__int64)KeGetCurrentThread());
  v20 = v17 + v19;
  v21 = 2LL * v20;
  v22 = v20 + 1;
  *(&UserData.Ptr + v21) = (ULONGLONG)&v72;
  *((_QWORD *)&UserData.Size + v21) = 1LL;
  v23 = v20 + 2;
  v24 = 2LL * v22;
  *(&UserData.Ptr + v24) = (ULONGLONG)&v73;
  *((_QWORD *)&UserData.Size + v24) = 1LL;
  if ( v7 && *v7 )
  {
    v8 = (const wchar_t *)*((_QWORD *)v7 + 1);
    v25 = v23 + 1;
    v26 = *v7;
    v36 = *v7 >> 1;
  }
  else
  {
    v36 = v18;
    v25 = v22 + 2;
    v26 = 12;
  }
  v27 = 16LL * v25;
  v28 = 16LL * v23;
  v29 = v25 + 1;
  *(ULONGLONG *)((char *)&UserData.Ptr + v28) = (ULONGLONG)&v36;
  v30 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_PROHIBIT_NON_MICROSOFT_BINARIES;
  *(ULONG *)((char *)&UserData.Size + v28) = 2;
  *(ULONG *)((char *)&UserData.Reserved + v28) = 0;
  *(ULONGLONG *)((char *)&UserData.Ptr + v27) = (ULONGLONG)v8;
  *(ULONG *)((char *)&UserData.Size + v27) = v26;
  *(ULONG *)((char *)&UserData.Reserved + v27) = 0;
  if ( a1 != 1 )
    v30 = &MITIGATION_ENFORCE_PROHIBIT_NON_MICROSOFT_BINARIES;
  EtwWrite(EtwSecurityMitigationsRegHandle, v30, 0LL, v29, &UserData);
  v31 = (void *)*((_QWORD *)&v39 + 1);
  if ( (unsigned int)dword_140C06690 > 5 && tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL) )
  {
    LODWORD(v37) = a1;
    v42 = &v37;
    v43 = 4LL;
    v44 = v47;
    v46 = v6[1];
    v47[0] = *(unsigned __int16 *)v6;
    v48 = v51;
    v51[0] = (unsigned __int16)v39;
    v40 = v38;
    v52 = &v40;
    v54 = v57;
    v56 = *((_QWORD *)v7 + 1);
    v57[0] = *v7;
    v32 = v72;
    v58 = &v32;
    v33 = v73;
    v60 = &v33;
    v45 = 2LL;
    v47[1] = 0;
    v49 = 2LL;
    v50 = v31;
    v51[1] = 0;
    v53 = 8LL;
    v55 = 2LL;
    v57[1] = 0;
    v59 = 1LL;
    v61 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C06690,
      (unsigned __int8 *)byte_1400355C8,
      0LL,
      0LL,
      0xCu,
      &v41);
  }
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
}

void __fastcall EtwTimLogUserCetSetContextIpValidationFailure(int a1, __int64 a2, void *a3, int a4, int a5)
{
  __int64 *v6; // rsi
  __int64 *v7; // rax
  ULONG v8; // r13d
  unsigned __int16 v9; // ax
  int v10; // eax
  const wchar_t *v11; // rcx
  int v12; // r12d
  PVOID v13; // r15
  __int16 v14; // ax
  int v15; // ecx
  unsigned int v16; // r14d
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v18; // rbx
  __int64 v19; // rax
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // r9d
  const EVENT_DESCRIPTOR *v24; // rdx
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rax
  ULONG v28; // r9d
  REGHANDLE v29; // rcx
  unsigned __int16 *v30; // r9
  _WORD v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v32[2]; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+80h] [rbp-80h] BYREF
  int *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  _DWORD *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  _DWORD v47[2]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  PVOID v50; // [rsp+E0h] [rbp-20h]
  _DWORD v51[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  _DWORD *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  __int64 v56; // [rsp+110h] [rbp+10h]
  _DWORD v57[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  PVOID *p_BaseAddress; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  __int64 *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  const wchar_t *v65; // [rsp+160h] [rbp+60h]
  int v66; // [rsp+168h] [rbp+68h]
  int v67; // [rsp+16Ch] [rbp+6Ch]
  __int16 *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  const wchar_t *v70; // [rsp+180h] [rbp+80h]
  int v71; // [rsp+188h] [rbp+88h]
  int v72; // [rsp+18Ch] [rbp+8Ch]
  __int64 v73[20]; // [rsp+190h] [rbp+90h] BYREF
  int v74; // [rsp+298h] [rbp+198h] BYREF

  v74 = a4;
  v34 = a1;
  BaseAddress = a3;
  v6 = &EmptyUnicodeString;
  v37 = 0LL;
  v7 = *(__int64 **)(a2 + 1472);
  *(_OWORD *)P = 0LL;
  if ( v7 )
    v6 = v7;
  v8 = 12;
  v9 = *(_WORD *)v6;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v9 )
  {
    v31[0] = v9 >> 1;
    UserData.Ptr = (ULONGLONG)v31;
    v10 = *(unsigned __int16 *)v6;
    v11 = (const wchar_t *)v6[1];
  }
  else
  {
    v31[0] = 6;
    UserData.Ptr = (ULONGLONG)v31;
    v11 = L"(null)";
    v10 = 12;
  }
  v65 = v11;
  v67 = 0;
  v66 = v10;
  EtwpQueryProcessCommandLine(a2, (__int64)P);
  v12 = LOWORD(P[0]);
  v13 = P[1];
  v69 = 2LL;
  v68 = &v33;
  if ( LOWORD(P[0]) )
  {
    v70 = (const wchar_t *)P[1];
    v14 = LOWORD(P[0]) >> 1;
    v15 = LOWORD(P[0]);
  }
  else
  {
    v70 = L"(null)";
    v15 = 12;
    v14 = 6;
  }
  v71 = v15;
  v72 = 0;
  v33 = v14;
  v16 = EtwpTiFillProcessIdentity(v73, a2, &v37) + 4;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
  v18 = Pool2;
  if ( !Pool2 )
    goto LABEL_14;
  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         (MEMORY_INFORMATION_CLASS)2,
         Pool2,
         0x200uLL,
         0LL) < 0 )
    *v18 = 0;
  if ( *v18 )
  {
    v32[0] = *v18 >> 1;
    v19 = 2LL * v16;
    *(&UserData.Ptr + v19) = (ULONGLONG)v32;
    *((_QWORD *)&UserData.Size + v19) = 2LL;
    v8 = *v18;
    v20 = (const wchar_t *)*((_QWORD *)v18 + 1);
  }
  else
  {
LABEL_14:
    v32[0] = 6;
    v21 = 2LL * v16;
    *(&UserData.Ptr + v21) = (ULONGLONG)v32;
    v20 = L"(null)";
    *((_QWORD *)&UserData.Size + v21) = 2LL;
  }
  v22 = 16LL * (v16 + 1);
  v23 = v16 + 2;
  v24 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_USER_CET_SET_CONTEXT_IP_VALIDATION_FAILURE;
  *(ULONGLONG *)((char *)&UserData.Ptr + v22) = (ULONGLONG)v20;
  *(ULONG *)((char *)&UserData.Size + v22) = v8;
  *(ULONG *)((char *)&UserData.Reserved + v22) = 0;
  v25 = v34;
  v26 = 2LL * v23++;
  *(&UserData.Ptr + v26) = (ULONGLONG)&v74;
  *((_QWORD *)&UserData.Size + v26) = 4LL;
  v27 = 2LL * v23;
  v28 = v23 + 1;
  *(&UserData.Ptr + v27) = (ULONGLONG)&a5;
  v29 = EtwSecurityMitigationsRegHandle;
  *((_QWORD *)&UserData.Size + v27) = 4LL;
  if ( v25 != 1 )
    v24 = &MITIGATION_ENFORCE_USER_CET_SET_CONTEXT_IP_VALIDATION_FAILURE;
  EtwWrite(v29, v24, 0LL, v28, &UserData);
  if ( (unsigned int)dword_140C06690 > 5 && tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL) )
  {
    v34 = v25;
    v42 = &v34;
    v43 = 4LL;
    v44 = v47;
    v46 = v6[1];
    v47[0] = *(unsigned __int16 *)v6;
    v48 = v51;
    v38 = v37;
    v52 = &v38;
    v54 = v57;
    v56 = *((_QWORD *)v30 + 1);
    v57[0] = *v30;
    v35 = v74;
    v58 = &v35;
    LODWORD(BaseAddress) = a5;
    p_BaseAddress = &BaseAddress;
    v62 = &v39;
    v45 = 2LL;
    v47[1] = 0;
    v49 = 2LL;
    v50 = v13;
    v51[0] = v12;
    v51[1] = 0;
    v53 = 8LL;
    v55 = 2LL;
    v57[1] = 0;
    v59 = 4LL;
    v61 = 4LL;
    v39 = 0x1000000LL;
    v63 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C06690,
      (unsigned __int8 *)&byte_1400353DF,
      0LL,
      0LL,
      0xDu,
      &v41);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
}

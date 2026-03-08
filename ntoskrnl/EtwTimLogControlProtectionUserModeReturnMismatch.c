/*
 * XREFs of EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E6400
 * Callers:
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x1405799EC (KiLogControlProtectionUserModeReturnMismatch.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     EtwpTiFillProcessIdentity @ 0x140367BF4 (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x140412770 (ZwQueryVirtualMemory.c)
 *     EtwpQueryProcessCommandLine @ 0x14071DB40 (EtwpQueryProcessCommandLine.c)
 *     MmGetImageInformation @ 0x14077582C (MmGetImageInformation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogControlProtectionUserModeReturnMismatch(int a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int v5; // ecx
  int v6; // ecx
  const EVENT_DESCRIPTOR *v7; // r15
  __int64 *v8; // r12
  const wchar_t *v9; // rdi
  unsigned __int16 v10; // ax
  ULONG v11; // r13d
  int v12; // eax
  const wchar_t *v13; // rcx
  int v14; // ecx
  __int16 v15; // ax
  unsigned int v16; // ebx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v18; // r14
  __int64 v19; // rax
  ULONG v20; // r9d
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rax
  unsigned __int16 *v24; // rax
  unsigned __int16 *v25; // rdi
  __int64 v26; // rax
  unsigned int v27; // ecx
  const wchar_t *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // ebx
  __int64 v35; // rax
  PVOID v36; // rcx
  char *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // ebx
  PVOID v42; // rcx
  char *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ebx
  __int64 v47; // rax
  REGHANDLE v48; // rcx
  unsigned __int16 *v49; // r9
  unsigned __int16 *v50; // r10
  PVOID v51; // rbx
  _WORD v52[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v53[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v54[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v55[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v56; // [rsp+40h] [rbp-C0h] BYREF
  int v57; // [rsp+44h] [rbp-BCh] BYREF
  int v58; // [rsp+48h] [rbp-B8h] BYREF
  int v59; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-A8h] BYREF
  int v62; // [rsp+5Ch] [rbp-A4h] BYREF
  int v63; // [rsp+60h] [rbp-A0h] BYREF
  int v64; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h] BYREF
  PVOID v67; // [rsp+78h] [rbp-88h] BYREF
  char *v68; // [rsp+80h] [rbp-80h] BYREF
  char *v69; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v70; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v71; // [rsp+98h] [rbp-68h] BYREF
  PVOID v72; // [rsp+A0h] [rbp-60h] BYREF
  char *v73; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v74; // [rsp+B0h] [rbp-50h] BYREF
  char *v75; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v77; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+E0h] [rbp-20h] BYREF
  int *v79; // [rsp+100h] [rbp+0h]
  __int64 v80; // [rsp+108h] [rbp+8h]
  _DWORD *v81; // [rsp+110h] [rbp+10h]
  __int64 v82; // [rsp+118h] [rbp+18h]
  __int64 v83; // [rsp+120h] [rbp+20h]
  _DWORD v84[2]; // [rsp+128h] [rbp+28h] BYREF
  _DWORD *v85; // [rsp+130h] [rbp+30h]
  __int64 v86; // [rsp+138h] [rbp+38h]
  PVOID v87; // [rsp+140h] [rbp+40h]
  _DWORD v88[2]; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 *v89; // [rsp+150h] [rbp+50h]
  __int64 v90; // [rsp+158h] [rbp+58h]
  _DWORD *v91; // [rsp+160h] [rbp+60h]
  __int64 v92; // [rsp+168h] [rbp+68h]
  __int64 v93; // [rsp+170h] [rbp+70h]
  _DWORD v94[2]; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v95; // [rsp+180h] [rbp+80h]
  __int64 v96; // [rsp+188h] [rbp+88h]
  __int64 v97; // [rsp+190h] [rbp+90h]
  _DWORD v98[2]; // [rsp+198h] [rbp+98h] BYREF
  unsigned int *v99; // [rsp+1A0h] [rbp+A0h]
  __int64 v100; // [rsp+1A8h] [rbp+A8h]
  int *v101; // [rsp+1B0h] [rbp+B0h]
  __int64 v102; // [rsp+1B8h] [rbp+B8h]
  PVOID *v103; // [rsp+1C0h] [rbp+C0h]
  __int64 v104; // [rsp+1C8h] [rbp+C8h]
  char **v105; // [rsp+1D0h] [rbp+D0h]
  __int64 v106; // [rsp+1D8h] [rbp+D8h]
  PVOID *p_P; // [rsp+1E0h] [rbp+E0h]
  __int64 v108; // [rsp+1E8h] [rbp+E8h]
  PVOID *v109; // [rsp+1F0h] [rbp+F0h]
  __int64 v110; // [rsp+1F8h] [rbp+F8h]
  char **v111; // [rsp+200h] [rbp+100h]
  __int64 v112; // [rsp+208h] [rbp+108h]
  __int64 *v113; // [rsp+210h] [rbp+110h]
  __int64 v114; // [rsp+218h] [rbp+118h]
  __int64 *v115; // [rsp+220h] [rbp+120h]
  __int64 v116; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+230h] [rbp+130h] BYREF
  const wchar_t *v118; // [rsp+240h] [rbp+140h]
  int v119; // [rsp+248h] [rbp+148h]
  int v120; // [rsp+24Ch] [rbp+14Ch]
  _WORD *v121; // [rsp+250h] [rbp+150h]
  __int64 v122; // [rsp+258h] [rbp+158h]
  const wchar_t *v123; // [rsp+260h] [rbp+160h]
  int v124; // [rsp+268h] [rbp+168h]
  int v125; // [rsp+26Ch] [rbp+16Ch]
  __int64 v126[38]; // [rsp+270h] [rbp+170h] BYREF

  v3 = (*(_DWORD *)a3 >> 20) & 1;
  v59 = a1;
  v61 = v3;
  v62 = *(_DWORD *)(a3 + 4);
  BaseAddress = *(PVOID *)(a3 + 8);
  v67 = *(PVOID *)(a3 + 16);
  v63 = *(_DWORD *)(a3 + 24);
  v64 = *(_DWORD *)(a3 + 28);
  v55[0] = 0;
  v53[0] = 0;
  v68 = 0LL;
  v60 = 0LL;
  v52[0] = 0;
  v54[0] = 0;
  v69 = 0LL;
  v71 = 0LL;
  v77 = 0LL;
  v5 = a1 - 1;
  if ( !v5 )
  {
    v58 = 0;
    goto LABEL_7;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v58 = 1;
LABEL_7:
    v7 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_CONTROL_PROTECTION_USER_MODE_RETURN_MISMATCH;
    goto LABEL_8;
  }
  if ( v6 != 1 )
    return;
  v58 = -1;
  v7 = &MITIGATION_ENFORCE_CONTROL_PROTECTION_USER_MODE_RETURN_MISMATCH;
LABEL_8:
  v8 = &EmptyUnicodeString;
  v9 = L"(null)";
  if ( *(_QWORD *)(a2 + 1472) )
    v8 = *(__int64 **)(a2 + 1472);
  v10 = *(_WORD *)v8;
  v11 = 12;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v10 )
  {
    v52[0] = v10 >> 1;
    UserData.Ptr = (ULONGLONG)v52;
    v12 = *(unsigned __int16 *)v8;
    v13 = (const wchar_t *)v8[1];
  }
  else
  {
    v52[0] = 6;
    UserData.Ptr = (ULONGLONG)v52;
    v13 = L"(null)";
    v12 = 12;
  }
  v118 = v13;
  v119 = v12;
  v120 = 0;
  EtwpQueryProcessCommandLine(a2, (__int64)&v77);
  P = (PVOID)*((_QWORD *)&v77 + 1);
  LOWORD(v57) = v77;
  v122 = 2LL;
  if ( (_WORD)v77 )
  {
    v123 = (const wchar_t *)*((_QWORD *)&v77 + 1);
    v121 = v55;
    v14 = (unsigned __int16)v77;
    v15 = (unsigned __int16)v77 >> 1;
  }
  else
  {
    v123 = L"(null)";
    v121 = v55;
    v14 = 12;
    v15 = 6;
  }
  v124 = v14;
  v55[0] = v15;
  v125 = 0;
  v16 = EtwpTiFillProcessIdentity(v126, a2, &v71) + 4;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
  v18 = Pool2;
  if ( !Pool2 )
    goto LABEL_21;
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
    v53[0] = *v18 >> 1;
    v19 = 2LL * v16;
    *(&UserData.Ptr + v19) = (ULONGLONG)v53;
    *((_QWORD *)&UserData.Size + v19) = 2LL;
    v20 = *v18;
    v9 = (const wchar_t *)*((_QWORD *)v18 + 1);
  }
  else
  {
LABEL_21:
    v53[0] = 6;
    v20 = 12;
    v21 = 2LL * v16;
    *(&UserData.Ptr + v21) = (ULONGLONG)v53;
    *((_QWORD *)&UserData.Size + v21) = 2LL;
  }
  v22 = v16 + 1;
  v23 = 16LL * v22;
  v56 = v22 + 1;
  *(ULONGLONG *)((char *)&UserData.Ptr + v23) = (ULONGLONG)v9;
  *(ULONG *)((char *)&UserData.Size + v23) = v20;
  *(ULONG *)((char *)&UserData.Reserved + v23) = 0;
  v24 = (unsigned __int16 *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
  v25 = v24;
  if ( !v24 )
    goto LABEL_27;
  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v67, (MEMORY_INFORMATION_CLASS)2, v24, 0x200uLL, 0LL) < 0 )
    *v25 = 0;
  if ( *v25 )
  {
    v54[0] = *v25 >> 1;
    v26 = 2LL * v56;
    v27 = v56 + 1;
    *(&UserData.Ptr + v26) = (ULONGLONG)v54;
    *((_QWORD *)&UserData.Size + v26) = 2LL;
    v11 = *v25;
    v28 = (const wchar_t *)*((_QWORD *)v25 + 1);
  }
  else
  {
LABEL_27:
    v54[0] = 6;
    v28 = L"(null)";
    v29 = 2LL * (v22 + 1);
    *(&UserData.Ptr + v29) = (ULONGLONG)v54;
    v27 = v22 + 2;
    *((_QWORD *)&UserData.Size + v29) = 2LL;
  }
  v30 = 16LL * v27;
  v31 = v27 + 1;
  *(ULONGLONG *)((char *)&UserData.Ptr + v30) = (ULONGLONG)v28;
  *(ULONG *)((char *)&UserData.Size + v30) = v11;
  *(ULONG *)((char *)&UserData.Reserved + v30) = 0;
  v32 = 2LL * v31;
  *(&UserData.Ptr + v32) = (ULONGLONG)&v61;
  *((_QWORD *)&UserData.Size + v32) = 4LL;
  v33 = 2LL * (v31 + 1);
  *(&UserData.Ptr + v33) = (ULONGLONG)&v62;
  *((_QWORD *)&UserData.Size + v33) = 4LL;
  v34 = v31 + 3;
  v35 = 2LL * (v31 + 2);
  *(&UserData.Ptr + v35) = (ULONGLONG)&v58;
  v36 = BaseAddress;
  *((_QWORD *)&UserData.Size + v35) = 4LL;
  if ( (int)MmGetImageInformation((unsigned __int64)v36, &v60, &v70, (int *)&v56) < 0 )
    v37 = 0LL;
  else
    v37 = (char *)BaseAddress - v60;
  v68 = v37;
  v38 = 2LL * v34;
  *(&UserData.Ptr + v38) = (ULONGLONG)&BaseAddress;
  *((_QWORD *)&UserData.Size + v38) = 8LL;
  v39 = 2LL * (v34 + 1);
  *(&UserData.Ptr + v39) = (ULONGLONG)&v68;
  *((_QWORD *)&UserData.Size + v39) = 8LL;
  v40 = v34 + 2;
  v41 = v34 + 3;
  v40 *= 2LL;
  *(&UserData.Ptr + v40) = (ULONGLONG)&v63;
  v42 = v67;
  *((_QWORD *)&UserData.Size + v40) = 4LL;
  if ( (int)MmGetImageInformation((unsigned __int64)v42, &v60, &v70, (int *)&v56) < 0 )
    v43 = 0LL;
  else
    v43 = (char *)v67 - v60;
  v69 = v43;
  v44 = 2LL * v41;
  *(&UserData.Ptr + v44) = (ULONGLONG)&v67;
  *((_QWORD *)&UserData.Size + v44) = 8LL;
  v45 = v41 + 1;
  v46 = v41 + 2;
  v45 *= 2LL;
  *(&UserData.Ptr + v45) = (ULONGLONG)&v69;
  *((_QWORD *)&UserData.Size + v45) = 8LL;
  v47 = 2LL * v46;
  *(&UserData.Ptr + v47) = (ULONGLONG)&v64;
  v48 = EtwSecurityMitigationsRegHandle;
  *((_QWORD *)&UserData.Size + v47) = 4LL;
  EtwWrite(v48, v7, 0LL, v46 + 1, &UserData);
  if ( (unsigned int)dword_140C06690 > 5 && tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL) )
  {
    v51 = P;
    v79 = &v59;
    v81 = v84;
    v83 = v8[1];
    v84[0] = *(unsigned __int16 *)v8;
    v85 = v88;
    v88[0] = (unsigned __int16)v57;
    v70 = v71;
    v89 = &v70;
    v91 = v94;
    v93 = *((_QWORD *)v50 + 1);
    v94[0] = *v50;
    v95 = v98;
    v97 = *((_QWORD *)v49 + 1);
    v98[0] = *v49;
    v56 = v61;
    v99 = &v56;
    v57 = v62;
    v101 = &v57;
    v72 = BaseAddress;
    v103 = &v72;
    v73 = v68;
    v105 = &v73;
    LODWORD(P) = v63;
    p_P = &P;
    v74 = v67;
    v109 = &v74;
    v75 = v69;
    v111 = &v75;
    LODWORD(v60) = v64;
    v113 = &v60;
    v80 = 4LL;
    v82 = 2LL;
    v84[1] = 0;
    v86 = 2LL;
    v87 = v51;
    v88[1] = 0;
    v90 = 8LL;
    v92 = 2LL;
    v94[1] = 0;
    v96 = 2LL;
    v98[1] = 0;
    v100 = 4LL;
    v102 = 4LL;
    v104 = 8LL;
    v106 = 8LL;
    v108 = 4LL;
    v110 = 8LL;
    v112 = 8LL;
    v114 = 4LL;
    v115 = &v76;
    v76 = 0x1000000LL;
    v116 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C06690,
      (unsigned __int8 *)&dword_14003548C,
      0LL,
      0LL,
      0x15u,
      &v78);
  }
  else
  {
    v51 = P;
  }
  if ( v51 )
    ExFreePoolWithTag(v51, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
}

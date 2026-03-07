void __fastcall EtwTimLogRedirectionTrustPolicy(
        int a1,
        const EVENT_DESCRIPTOR *a2,
        int a3,
        void *a4,
        unsigned __int8 a5)
{
  unsigned int v5; // edi
  PCEVENT_DESCRIPTOR v6; // r13
  signed __int64 Keyword; // r15
  UNICODE_STRING *v8; // rbx
  signed __int32 v9; // r14d
  char v10; // r12
  ULONG v11; // eax
  unsigned __int16 v12; // si
  unsigned __int16 i; // cx
  unsigned int v14; // edx
  void *Pool2; // rax
  bool v16; // cf
  _DWORD *v17; // rcx
  __int64 v18; // r15
  _QWORD *v19; // r12
  PVOID *v20; // rdi
  wchar_t *p_Length; // r14
  unsigned __int16 v22; // cx
  __int64 *v23; // rax
  __int64 *v24; // r14
  __int64 *v25; // rax
  unsigned __int16 Length; // di
  int v27; // eax
  const wchar_t *v28; // rcx
  int v29; // eax
  __int16 v30; // di
  int v31; // eax
  ULONG v32; // r9d
  unsigned __int16 *v33; // r10
  ULONGLONG v34; // r11
  __int64 v35; // rcx
  int v36; // r8d
  unsigned int v37; // edx
  ULONGLONG v38; // r15
  unsigned int v39; // r8d
  __int16 v40; // ax
  __int64 v41; // rax
  __int64 v42; // rdx
  ULONG v43; // r10d
  unsigned __int16 v44; // r14
  wchar_t *v45; // r15
  UNICODE_STRING *v46; // r11
  ULONG v47; // r12d
  __int64 v48; // rax
  PVOID *v49; // r13
  unsigned __int16 MaximumLength; // ax
  const wchar_t *v51; // r9
  int v52; // eax
  __int64 v53; // r8
  ULONG v54; // edi
  ULONG v55; // edx
  __int64 v56; // rax
  ULONG v57; // ecx
  __int64 v58; // rax
  int v59; // r9d
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING *v61; // rcx
  UNICODE_STRING *v62; // rcx
  UNICODE_STRING *v63; // rcx
  UNICODE_STRING *v64; // rcx
  UNICODE_STRING *v65; // rcx
  char v66; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v67; // [rsp+32h] [rbp-CEh] BYREF
  _WORD v68[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v69[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v70; // [rsp+3Ch] [rbp-C4h] BYREF
  int v71; // [rsp+40h] [rbp-C0h]
  int v72; // [rsp+44h] [rbp-BCh] BYREF
  int v73; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v75; // [rsp+60h] [rbp-A0h]
  int v76; // [rsp+64h] [rbp-9Ch] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v79; // [rsp+78h] [rbp-88h] BYREF
  PVOID v80; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v81; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v82; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v84; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v85; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v86; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v87; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v88; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v89; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD MemoryInformation[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v92; // [rsp+140h] [rbp+40h]
  __int64 v93; // [rsp+148h] [rbp+48h]
  int *v94; // [rsp+150h] [rbp+50h]
  __int64 v95; // [rsp+158h] [rbp+58h]
  int *v96; // [rsp+160h] [rbp+60h]
  __int64 v97; // [rsp+168h] [rbp+68h]
  unsigned __int16 *v98; // [rsp+170h] [rbp+70h]
  __int64 v99; // [rsp+178h] [rbp+78h]
  _DWORD *v100; // [rsp+180h] [rbp+80h]
  __int64 v101; // [rsp+188h] [rbp+88h]
  wchar_t *v102; // [rsp+190h] [rbp+90h]
  _DWORD v103[2]; // [rsp+198h] [rbp+98h] BYREF
  PVOID *v104; // [rsp+1A0h] [rbp+A0h]
  __int64 v105; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v106; // [rsp+1B0h] [rbp+B0h]
  __int64 v107; // [rsp+1B8h] [rbp+B8h]
  wchar_t *v108; // [rsp+1C0h] [rbp+C0h]
  _DWORD v109[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  PVOID *v110; // [rsp+1D0h] [rbp+D0h]
  __int64 v111; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v112; // [rsp+1E0h] [rbp+E0h]
  __int64 v113; // [rsp+1E8h] [rbp+E8h]
  wchar_t *v114; // [rsp+1F0h] [rbp+F0h]
  _DWORD v115[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  PVOID *v116; // [rsp+200h] [rbp+100h]
  __int64 v117; // [rsp+208h] [rbp+108h]
  _DWORD *v118; // [rsp+210h] [rbp+110h]
  __int64 v119; // [rsp+218h] [rbp+118h]
  wchar_t *v120; // [rsp+220h] [rbp+120h]
  _DWORD v121[2]; // [rsp+228h] [rbp+128h] BYREF
  PVOID *v122; // [rsp+230h] [rbp+130h]
  __int64 v123; // [rsp+238h] [rbp+138h]
  _DWORD *v124; // [rsp+240h] [rbp+140h]
  __int64 v125; // [rsp+248h] [rbp+148h]
  wchar_t *v126; // [rsp+250h] [rbp+150h]
  _DWORD v127[2]; // [rsp+258h] [rbp+158h] BYREF
  PVOID *v128; // [rsp+260h] [rbp+160h]
  __int64 v129; // [rsp+268h] [rbp+168h]
  _DWORD *v130; // [rsp+270h] [rbp+170h]
  __int64 v131; // [rsp+278h] [rbp+178h]
  wchar_t *v132; // [rsp+280h] [rbp+180h]
  _DWORD v133[2]; // [rsp+288h] [rbp+188h] BYREF
  __int64 *v134; // [rsp+290h] [rbp+190h]
  __int64 v135; // [rsp+298h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v136; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 *v137; // [rsp+2C0h] [rbp+1C0h]
  __int64 v138; // [rsp+2C8h] [rbp+1C8h]
  int *v139; // [rsp+2D0h] [rbp+1D0h]
  __int64 v140; // [rsp+2D8h] [rbp+1D8h]
  int *v141; // [rsp+2E0h] [rbp+1E0h]
  __int64 v142; // [rsp+2E8h] [rbp+1E8h]
  unsigned __int16 *v143; // [rsp+2F0h] [rbp+1F0h]
  __int64 v144; // [rsp+2F8h] [rbp+1F8h]
  _DWORD *v145; // [rsp+300h] [rbp+200h]
  __int64 v146; // [rsp+308h] [rbp+208h]
  wchar_t *v147; // [rsp+310h] [rbp+210h]
  _DWORD v148[2]; // [rsp+318h] [rbp+218h] BYREF
  PVOID Callers[16]; // [rsp+320h] [rbp+220h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3A0h] [rbp+2A0h] BYREF
  const wchar_t *v151; // [rsp+3B0h] [rbp+2B0h]
  int v152; // [rsp+3B8h] [rbp+2B8h]
  int v153; // [rsp+3BCh] [rbp+2BCh]
  _WORD *v154; // [rsp+3C0h] [rbp+2C0h]
  __int64 v155; // [rsp+3C8h] [rbp+2C8h]
  wchar_t *Buffer; // [rsp+3D0h] [rbp+2D0h]
  int v157; // [rsp+3D8h] [rbp+2D8h]
  int v158; // [rsp+3DCh] [rbp+2DCh]
  __int64 v159[84]; // [rsp+3E0h] [rbp+2E0h] BYREF
  int v160; // [rsp+6E0h] [rbp+5E0h] BYREF

  v160 = a3;
  EventDescriptor = a2;
  v5 = 0;
  v71 = a1;
  v6 = a2;
  v82 = 0LL;
  v68[0] = 0;
  v69[0] = 0;
  v70 = 0;
  P = a4;
  v89 = 0LL;
  DestinationString = 0LL;
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  memset(Callers, 0, sizeof(Callers));
  Keyword = v6[180].Keyword;
  v76 = a5;
  v8 = 0LL;
  v66 = 0;
  v80 = 0LL;
  v9 = 0;
  v10 = 1;
  v11 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  v12 = v11;
  v75 = v11;
  for ( i = 1; ; ++i )
  {
    v14 = 7;
    if ( (unsigned __int16)v11 <= 7u )
      v14 = (unsigned __int16)v11;
    if ( i >= v14 )
      break;
    v9 += LODWORD(Callers[i]);
  }
  if ( !v9 )
    v9 = 1;
  while ( 1 )
  {
    if ( !Keyword )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 40LL, 1853049172LL);
      if ( !Pool2 )
        return;
      Keyword = _InterlockedCompareExchange64((volatile signed __int64 *)&v6[180].Keyword, (signed __int64)Pool2, 0LL);
      if ( Keyword )
        ExFreePoolWithTag(Pool2, 0);
      else
        Keyword = (signed __int64)Pool2;
    }
    v16 = v5 < 0xA;
    if ( v5 < 0xA )
    {
      v17 = (_DWORD *)(Keyword + 4LL * v5);
      do
      {
        if ( !*v17 )
          break;
        if ( *v17 == v9 )
          return;
        ++v5;
        ++v17;
      }
      while ( v5 < 0xA );
      v16 = v5 < 0xA;
    }
    v10 = v16 ? v10 : 0;
    if ( !v10 )
      break;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v6[180].Keyword + 4LL * v5), v9, 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"Unknown");
      if ( v12 )
      {
        v18 = v12;
        v8 = (UNICODE_STRING *)ExAllocatePool2(256LL, 80LL * v12, 1853049172LL);
        v19 = (_QWORD *)ExAllocatePool2(256LL, 538LL, 1853049172LL);
        v80 = v19;
        if ( v8 && v19 )
        {
          v20 = Callers;
          p_Length = &v8[1].Length;
          do
          {
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   *v20,
                   (MEMORY_INFORMATION_CLASS)2,
                   v19,
                   0x218uLL,
                   0LL) < 0
              || *(_WORD *)v19 <= 1u )
            {
              goto LABEL_34;
            }
            v22 = (*(_WORD *)v19 >> 1) - 1;
            if ( *(_WORD *)v19 >> 1 != 1 )
            {
              while ( *(_WORD *)(v19[1] + 2LL * v22) != 92 )
              {
                if ( !--v22 )
                  goto LABEL_32;
              }
              ++v22;
            }
LABEL_32:
            RtlStringCbCopyW(p_Length, 0x40uLL, (NTSTRSAFE_PCWSTR)(v19[1] + 2LL * v22));
            RtlInitUnicodeString((PUNICODE_STRING)p_Length - 1, p_Length);
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   *v20,
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL) < 0 )
LABEL_34:
              *v20 = 0LL;
            else
              *v20 = (char *)*v20 - *((_QWORD *)&MemoryInformation[0] + 1);
            p_Length += 40;
            ++v20;
            --v18;
          }
          while ( v18 );
          v12 = v75;
          v6 = EventDescriptor;
        }
        else
        {
          memset(Callers, 0, 8LL * v12);
        }
      }
      v23 = MITIGATION_AUDIT_REDIRECTION_TRUST_POLICY;
      v24 = &EmptyUnicodeString;
      if ( v71 != 1 )
        v23 = MITIGATION_ENFORCE_REDIRECTION_TRUST_POLICY;
      EventDescriptor = (PCEVENT_DESCRIPTOR)v23;
      v25 = *(__int64 **)&v6[92].Id;
      v81 = 0LL;
      if ( v25 )
        v24 = v25;
      EtwpQueryProcessCommandLine((__int64)v6, (__int64)&v81);
      Length = v81.Length;
      if ( v81.Length )
      {
        v66 = 1;
      }
      else
      {
        RtlInitUnicodeString(&v81, L"Unknown");
        Length = v81.Length;
      }
      if ( !P )
        RtlInitUnicodeString(&v89, L"Unknown");
      if ( v24 && *(_WORD *)v24 )
      {
        v68[0] = *(_WORD *)v24 >> 1;
        UserData.Ptr = (ULONGLONG)v68;
        *(_QWORD *)&UserData.Size = 2LL;
        v27 = *(unsigned __int16 *)v24;
        v28 = (const wchar_t *)v24[1];
      }
      else
      {
        v68[0] = 6;
        UserData.Ptr = (ULONGLONG)v68;
        v28 = L"(null)";
        v27 = 12;
        *(_QWORD *)&UserData.Size = 2LL;
      }
      v152 = v27;
      P = v81.Buffer;
      v151 = v28;
      v153 = 0;
      v155 = 2LL;
      if ( Length )
      {
        Buffer = v81.Buffer;
        v29 = Length;
        v154 = v69;
        v30 = Length >> 1;
      }
      else
      {
        Buffer = L"(null)";
        v154 = v69;
        v30 = 6;
        v29 = 12;
      }
      v69[0] = v30;
      v157 = v29;
      v158 = 0;
      v31 = EtwpTiFillProcessIdentity(v159, (__int64)v6, &v82);
      v35 = 2LL * (unsigned int)(v31 + 4);
      v36 = v31 + 4;
      v37 = v31 + 5;
      *(&UserData.Ptr + v35) = (ULONGLONG)&v160;
      *((_QWORD *)&UserData.Size + v35) = 4LL;
      if ( v33 && *v33 )
      {
        v38 = *((_QWORD *)v33 + 1);
        v39 = v31 + 6;
        v32 = *v33;
        v40 = *v33 >> 1;
      }
      else
      {
        v40 = 6;
        v39 = v36 + 2;
        v38 = v34;
      }
      v70 = v40;
      v41 = 16LL * v37;
      v42 = 16LL * v39;
      *(ULONGLONG *)((char *)&UserData.Ptr + v41) = (ULONGLONG)&v70;
      v43 = v39 + 2;
      *(ULONG *)((char *)&UserData.Size + v41) = 2;
      *(ULONG *)((char *)&UserData.Reserved + v41) = 0;
      v44 = 0;
      *(ULONGLONG *)((char *)&UserData.Ptr + v42) = v38;
      *(ULONG *)((char *)&UserData.Size + v42) = v32;
      *(ULONG *)((char *)&UserData.Reserved + v42) = 0;
      v45 = DestinationString.Buffer;
      v46 = v8;
      v47 = DestinationString.Length;
      v48 = 2LL * (v39 + 1);
      *((_QWORD *)&UserData.Size + v48) = 4LL;
      v49 = Callers;
      *(&UserData.Ptr + v48) = (ULONGLONG)&v76;
      MaximumLength = DestinationString.MaximumLength;
      v67 = DestinationString.MaximumLength;
      do
      {
        if ( v44 < v12 && v8 )
        {
          if ( v46 && (v51 = v46->Buffer) != 0LL && (v52 = v46->Length, (_WORD)v52) )
          {
            v53 = 16LL * v43;
            v54 = v52 + 2;
            if ( v46->MaximumLength <= (unsigned int)(v52 + 1) )
              v54 = v46->Length;
          }
          else
          {
            v51 = L"(null)";
            v53 = 16LL * v43;
            v54 = 14;
          }
          *(ULONGLONG *)((char *)&UserData.Ptr + v53) = (ULONGLONG)v51;
          *(ULONG *)((char *)&UserData.Size + v53) = v54;
          *(ULONG *)((char *)&UserData.Reserved + v53) = 0;
        }
        else if ( v45 && (_WORD)v47 )
        {
          v55 = v47 + 2;
          if ( MaximumLength <= v47 + 1 )
            v55 = v47;
          *(&UserData.Size + 4 * v43) = v55;
          *(&UserData.Ptr + 2 * v43) = (ULONGLONG)v45;
          *(&UserData.Reserved + 4 * v43) = 0;
        }
        else
        {
          v56 = 2LL * v43;
          *(&UserData.Ptr + v56) = (ULONGLONG)L"(null)";
          *((_QWORD *)&UserData.Size + v56) = 14LL;
        }
        ++v44;
        v46 += 5;
        v57 = v43 + 1;
        v43 += 2;
        v58 = 2LL * v57;
        *(&UserData.Ptr + v58) = (ULONGLONG)v49++;
        *((_QWORD *)&UserData.Size + v58) = 8LL;
        MaximumLength = v67;
      }
      while ( v44 < 0x10u );
      EtwWrite(EtwSecurityMitigationsRegHandle, EventDescriptor, 0LL, v43, &UserData);
      if ( v8 )
      {
        if ( (unsigned int)dword_140C06690 > 5 && tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL) )
        {
          v83 = 0x2000000LL;
          v92 = &v83;
          v72 = v160;
          v94 = &v72;
          v73 = v71;
          v96 = &v73;
          LOBYTE(v67) = a5;
          v98 = &v67;
          v93 = 8LL;
          v95 = (unsigned int)(v59 - 1);
          v97 = v95;
          v99 = (unsigned int)(v59 - 4);
          if ( v12 <= (unsigned __int16)(v59 - 4) || (p_DestinationString = v8 + 5, !v8[5].Buffer) )
            p_DestinationString = &DestinationString;
          v103[1] = 0;
          v100 = v103;
          v102 = p_DestinationString->Buffer;
          v103[0] = p_DestinationString->Length;
          v84 = Callers[1];
          v104 = &v84;
          v101 = 2LL;
          v105 = 8LL;
          if ( v12 <= 2u || (v61 = v8 + 10, !v8[10].Buffer) )
            v61 = &DestinationString;
          v107 = 2LL;
          v106 = v109;
          v108 = v61->Buffer;
          v109[0] = v61->Length;
          v85 = Callers[2];
          v110 = &v85;
          v109[1] = 0;
          v111 = 8LL;
          if ( v12 <= 3u || (v62 = v8 + 15, !v8[15].Buffer) )
            v62 = &DestinationString;
          v113 = 2LL;
          v112 = v115;
          v114 = v62->Buffer;
          v115[0] = v62->Length;
          v86 = Callers[3];
          v116 = &v86;
          v115[1] = 0;
          v117 = 8LL;
          if ( v12 <= (unsigned __int16)(v59 - 1) || (v63 = v8 + 20, !v8[20].Buffer) )
            v63 = &DestinationString;
          v119 = 2LL;
          v118 = v121;
          v120 = v63->Buffer;
          v121[0] = v63->Length;
          v87 = Callers[4];
          v122 = &v87;
          v121[1] = 0;
          v123 = 8LL;
          if ( v12 <= (unsigned __int16)v59 || (v64 = v8 + 25, !v8[25].Buffer) )
            v64 = &DestinationString;
          v125 = 2LL;
          v124 = v127;
          v126 = v64->Buffer;
          v127[0] = v64->Length;
          v88 = Callers[5];
          v128 = &v88;
          v127[1] = 0;
          v129 = 8LL;
          if ( v12 <= 6u || (v65 = v8 + 30, !v8[30].Buffer) )
            v65 = &DestinationString;
          v131 = 2LL;
          v130 = v133;
          v132 = v65->Buffer;
          v133[0] = v65->Length;
          v79 = (__int64)Callers[6];
          v134 = &v79;
          v133[1] = 0;
          v135 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C06690,
            (unsigned __int8 *)byte_1400356BD,
            0LL,
            0LL,
            0x18u,
            &v91);
        }
      }
      else if ( (unsigned int)dword_140C06690 > 5 && tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL) )
      {
        v79 = 0x2000000LL;
        v137 = &v79;
        v73 = v160;
        v139 = &v73;
        v72 = v71;
        v141 = &v72;
        LOBYTE(v67) = a5;
        v143 = &v67;
        v145 = v148;
        v138 = 8LL;
        v140 = 4LL;
        v142 = 4LL;
        v144 = 1LL;
        v146 = 2LL;
        v147 = v45;
        v148[0] = v47;
        v148[1] = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C06690,
          (unsigned __int8 *)byte_140035660,
          0LL,
          0LL,
          8u,
          &v136);
      }
      if ( v66 )
        ExFreePoolWithTag(P, 0);
      if ( v80 )
        ExFreePoolWithTag(v80, 0);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      return;
    }
  }
}

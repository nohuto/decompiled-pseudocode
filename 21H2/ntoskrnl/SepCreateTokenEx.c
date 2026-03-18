/*
 * XREFs of SepCreateTokenEx @ 0x1402022FC
 * Callers:
 *     NtCreateTokenEx @ 0x1406647E0 (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x14084895C (SepCreateToken.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1402A4964 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlSidHashInitialize @ 0x1402E1660 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SepFinalizeTokenAcls @ 0x140659D50 (SepFinalizeTokenAcls.c)
 *     RtlCopySidAndAttributesArray @ 0x14066A420 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     RtlIdentifierAuthoritySid @ 0x14066A54C (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x14066A560 (RtlLengthRequiredSid.c)
 *     SepSetTokenClaims @ 0x14066B7B4 (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x14066B8C8 (SepReferenceLogonSession.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     SeDeleteAccessState @ 0x14066C150 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     SepSetTokenTrust @ 0x1407259B0 (SepSetTokenTrust.c)
 *     SepSetTokenUserAndGroups @ 0x1409CCE04 (SepSetTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1409CD320 (SepAddTokenLogonSession.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        char a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        void **a9,
        unsigned int a10,
        __int64 a11,
        unsigned int a12,
        unsigned int a13,
        char **a14,
        PSID a15,
        void *a16,
        void *a17,
        _OWORD *a18,
        __int64 a19,
        __int64 a20,
        int a21,
        __int64 a22,
        _DWORD *a23,
        char a24)
{
  void **v25; // r14
  PSID v27; // rdi
  unsigned int v28; // r13d
  int v29; // r12d
  __int64 v30; // rdx
  __int64 result; // rax
  void *v32; // rsi
  unsigned int v33; // ebx
  unsigned int v34; // r14d
  __int64 v35; // rax
  bool v36; // bl
  int v37; // r11d
  bool v38; // si
  int v39; // eax
  _DWORD *v40; // r14
  int v41; // r15d
  int v42; // edx
  unsigned __int8 *v43; // rdi
  PSID_IDENTIFIER_AUTHORITY v44; // rax
  char v45; // dl
  __int64 v46; // r8
  int v47; // ecx
  __int64 v48; // rbx
  __int64 v49; // r10
  __int64 v50; // rdi
  __int64 v51; // r9
  _DWORD *Pool2; // rax
  __int64 v53; // r9
  _DWORD *v54; // rsi
  _QWORD *v55; // rax
  PVOID v56; // rbx
  struct _ERESOURCE *v57; // r14
  int v58; // ebx
  __int64 v59; // rax
  unsigned int v60; // r15d
  ULONG v61; // r12d
  unsigned int v62; // ecx
  int v63; // eax
  NTSTATUS inserted; // ebx
  _QWORD *v65; // rbx
  char *v66; // rdi
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  PVOID v70; // rax
  char *v71; // r14
  __int64 v72; // rcx
  int v73; // esi
  int v74; // edx
  unsigned int v75; // r15d
  __int64 v76; // rcx
  __int64 v77; // r9
  char *v78; // rsi
  unsigned __int8 *v79; // r15
  ULONG v80; // ebx
  unsigned __int16 *v81; // rcx
  char *v82; // rsi
  void *v83; // rcx
  int v84; // r8d
  int v85; // r9d
  unsigned int v86; // eax
  BOOLEAN v87; // al
  void *v88; // rdx
  int *v89; // rdx
  unsigned __int64 v90; // r8
  int v91; // ecx
  BOOLEAN v92; // al
  PVOID v93; // rdi
  void *v94; // rcx
  __int64 v95; // rdx
  _KPROCESS *Process; // rcx
  ULONG v97; // eax
  int v98; // edx
  unsigned int v99; // [rsp+30h] [rbp-D0h]
  char v100; // [rsp+50h] [rbp-B0h]
  char v101; // [rsp+51h] [rbp-AFh] BYREF
  char v102; // [rsp+52h] [rbp-AEh]
  char v103; // [rsp+53h] [rbp-ADh]
  __int64 v104; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v105; // [rsp+5Ch] [rbp-A4h]
  char **v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  PSID v109; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  int v111[2]; // [rsp+88h] [rbp-78h]
  PSID DestinationSid; // [rsp+90h] [rbp-70h] BYREF
  PSID Sid1; // [rsp+98h] [rbp-68h]
  int v114; // [rsp+A0h] [rbp-60h]
  unsigned int v115; // [rsp+A4h] [rbp-5Ch]
  __int64 v116; // [rsp+A8h] [rbp-58h]
  int v117[2]; // [rsp+B0h] [rbp-50h]
  PHANDLE Handle; // [rsp+B8h] [rbp-48h]
  _QWORD *v119; // [rsp+C0h] [rbp-40h]
  __int64 v120; // [rsp+C8h] [rbp-38h]
  __int64 v121; // [rsp+D0h] [rbp-30h]
  __int64 v122; // [rsp+D8h] [rbp-28h]
  __int64 v123; // [rsp+E0h] [rbp-20h]
  void *Src; // [rsp+E8h] [rbp-18h]
  __int64 v125; // [rsp+F0h] [rbp-10h]
  __int64 v126; // [rsp+F8h] [rbp-8h]
  __int64 v127; // [rsp+100h] [rbp+0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v129[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  v25 = a9;
  v27 = a15;
  v28 = a10;
  v104 = 0xFFFFFFFFLL;
  v123 = a7;
  v106 = a14;
  Sid1 = a16;
  Src = a17;
  v127 = a19;
  v126 = a20;
  v125 = a22;
  v115 = a3;
  v29 = 0;
  v103 = a2;
  Handle = a1;
  Object = 0LL;
  DestinationSid = 0LL;
  v119 = a4;
  *(_QWORD *)v111 = a9;
  *(_QWORD *)v117 = a11;
  v109 = a15;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v129, 0, sizeof(v129));
  LOBYTE(v30) = a2;
  v116 = 0LL;
  v100 = 0;
  v102 = 0;
  v101 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, v30, &v101);
  if ( (int)result >= 0 )
  {
    v32 = *a9;
    v33 = 0;
    if ( a10 )
    {
      do
      {
        v34 = v33;
        while ( v34 < v28 )
        {
          if ( !RtlEqualSid(v32, *(PSID *)(a11 + 16LL * v34)) || (*(_DWORD *)(a11 + 16LL * v34 + 8) & 0x20) != 0 )
            ++v34;
          else
            *(_OWORD *)(a11 + 16LL * v34) = *(_OWORD *)(a11 + 16LL * --v28);
        }
        v35 = v33++;
        v32 = *(void **)(a11 + 16 * v35);
      }
      while ( v33 < v28 );
      v25 = *(void ***)v111;
      v27 = v109;
      v32 = **(void ***)v111;
    }
    v36 = RtlEqualSid(Sid1, v32) != 0;
    if ( v27 )
    {
      v92 = RtlEqualSid(v27, v32);
      LOBYTE(v37) = 1;
      v38 = v92 != 0;
    }
    else
    {
      LOBYTE(v37) = 1;
      v38 = 1;
    }
    v39 = *((_DWORD *)v25 + 2);
    if ( (v39 & 0x10) != 0 )
    {
      if ( (v39 & 6) != 0 )
        return 3221225485LL;
      v29 = 2048;
      HIDWORD(v104) = 2048;
    }
    v107 = 0;
    if ( v28 )
    {
      v107 = 0;
      v40 = (_DWORD *)(*(_QWORD *)v117 + 8LL);
      v41 = 1;
      do
      {
        v42 = *v40;
        v105 = v41;
        if ( ((unsigned __int8)v42 & (unsigned __int8)v37) != 0 )
        {
          v42 |= 6u;
          *v40 = v42;
        }
        if ( (v42 & 0x10) != 0 )
        {
          if ( (v42 & 6) != 0 )
            return 3221225485LL;
          v29 |= 0x800u;
          HIDWORD(v104) = v29;
        }
        v43 = (unsigned __int8 *)*((_QWORD *)v40 - 1);
        RtlIdentifierAuthoritySid(v43);
        v44 = RtlIdentifierAuthoritySid(SeUntrustedMandatorySid);
        v47 = *(_DWORD *)v44->Value - *(_DWORD *)v46;
        if ( *(_DWORD *)v44->Value == *(_DWORD *)v46 )
          v47 = *(unsigned __int16 *)&v44->Value[4] - *(unsigned __int16 *)(v46 + 4);
        if ( !v47 )
        {
          v84 = v43[1];
          if ( (_BYTE)v84 )
          {
            v85 = v43[1];
            if ( *(_DWORD *)&v43[4 * (v84 - 1) + 8] > 0x4000u )
              return 3221226566LL;
          }
          else
          {
            v85 = 0;
          }
          if ( (v45 & 0x40) != 0 )
          {
            if ( (_DWORD)v104 != -1 )
              return 3221225485LL;
            LODWORD(v104) = v41;
            if ( !(_BYTE)v84 )
              goto LABEL_71;
            v86 = *(_DWORD *)&v43[4 * (v85 - 1) + 8];
            if ( v86 < 0x3000 )
            {
              if ( v86 >= 0x2000 )
              {
                v29 |= 0x2000u;
                HIDWORD(v104) = v29;
              }
              else
              {
LABEL_71:
                v102 = v37;
              }
              v100 = 0;
              goto LABEL_20;
            }
            v29 |= 0x2000u;
            v100 = v37;
            HIDWORD(v104) = v29;
          }
        }
LABEL_20:
        if ( !v36 )
        {
          v87 = RtlEqualSid(Sid1, v43);
          v37 = 1;
          v36 = v87 != 0;
        }
        if ( !v38 )
        {
          if ( RtlEqualSid(v109, v43) )
          {
            if ( (*v40 & 8) == 0 )
              return 3221225562LL;
            v37 = 1;
            v107 = v41;
            v38 = 1;
          }
          else
          {
            v37 = 1;
          }
        }
        v41 += v37;
        v40 += 4;
      }
      while ( v105 < v28 );
    }
    if ( !v36 )
      return 3221225563LL;
    if ( !v38 )
      return 3221225562LL;
    v48 = 0LL;
    v122 = 0LL;
    v49 = 0LL;
    v120 = 0LL;
    v50 = 0LL;
    v121 = 0LL;
    v51 = 0LL;
    if ( a13 )
    {
      v89 = (int *)(v106 + 1);
      while ( (*v89 & 0x7FFFFFF8) == 0 )
      {
        v90 = (unsigned int)*(v89 - 2);
        v91 = *v89 & 3;
        *v89 = v91;
        if ( (unsigned int)v90 > 0x24 )
          return 3221225568LL;
        if ( _bittest64(&v49, v90) )
          return 3221225894LL;
        v49 |= 1LL << v90;
        v120 = v49;
        if ( (v91 & 2) != 0 )
        {
          _bittestandset64(&v50, (unsigned int)v90);
          v121 = v50;
        }
        if ( (v91 & 1) != 0 )
        {
          v48 |= 1LL << v90;
          v122 = v48;
        }
        v51 = (unsigned int)(v51 + 1);
        v89 += 3;
        if ( (unsigned int)v51 >= a13 )
          goto LABEL_27;
      }
      return 3221225485LL;
    }
LABEL_27:
    if ( a23 && (*a23 & 0xFFFFFFFC) != 0 )
      return 3221225485LL;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, 48LL, 1950442835LL, v51);
    v54 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *Pool2 = 0;
    v55 = Pool2 + 2;
    v54[6] = 0;
    v55[1] = v55;
    *v55 = v55;
    *((_QWORD *)v54 + 5) = v54 + 8;
    *((_QWORD *)v54 + 4) = v54 + 8;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      P = (PVOID)ExAllocatePool2(256LL, 288LL, 1950442835LL, v53);
      v56 = P;
      if ( !P )
      {
        v94 = v54;
        goto LABEL_116;
      }
    }
    else
    {
      v56 = P;
    }
    v116 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v57 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1817470291LL, v53);
    if ( v57 )
    {
      v58 = 16 * v28;
      LODWORD(v109) = 16 * v28;
      if ( SepTokenSidSharingEnabled )
      {
        v60 = (v58 + 23) & 0xFFFFFFF8;
        v105 = a12;
      }
      else
      {
        v59 = **(_QWORD **)v111;
        v105 = (a12 + 7) & 0xFFFFFFF8;
        v60 = v58 + ((RtlLengthRequiredSid(*(unsigned __int8 *)(v59 + 1)) + 3) & 0xFFFFFFFC) + v105 + 16;
      }
      v61 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
      if ( Src )
        v61 += (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
      v62 = v60 + 1168;
      v63 = 4096;
      if ( v61 >= 0x1000 )
        v63 = v61;
      v114 = v63;
      v99 = v62 + v63;
      LOBYTE(v62) = v103;
      inserted = ObCreateObject(
                   v62,
                   (_DWORD)SeTokenObjectType,
                   (_DWORD)v119,
                   1,
                   0,
                   v60 + 1168,
                   v99,
                   0,
                   (__int64)&Object);
      if ( inserted < 0 )
      {
        ExFreePoolWithTag(v54, 0);
        if ( HIDWORD(NlsMbOemCodePageTag) )
          ExFreePoolWithTag(P, 0);
        ExFreePoolWithTag(v57, 0);
        return (unsigned int)inserted;
      }
      v65 = Object;
      *((_QWORD *)Object + 6) = v57;
      ExInitializeResourceLite(v57);
      v66 = (char *)Object;
      v65[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      *((_QWORD *)v66 + 4) = 0LL;
      v67 = (_QWORD *)v123;
      *((_QWORD *)v66 + 28) = 0LL;
      v106 = 0LL;
      *((_QWORD *)v66 + 3) = *v67;
      v68 = v116;
      v66[204] = 0;
      *((_QWORD *)v66 + 7) = v68;
      *((_QWORD *)v66 + 5) = *a8;
      *((_DWORD *)v66 + 48) = a5;
      *((_DWORD *)v66 + 49) = a6;
      LODWORD(v68) = HIDWORD(v104);
      *(_OWORD *)v66 = *a18;
      *((_DWORD *)v66 + 50) = v68;
      LODWORD(v68) = v114;
      *((_DWORD *)v66 + 30) = 0;
      *((_QWORD *)v66 + 145) = 0LL;
      *((_DWORD *)v66 + 34) = v68;
      LODWORD(v68) = v107;
      *((_DWORD *)v66 + 35) = 0;
      *((_DWORD *)v66 + 36) = v68;
      *((_QWORD *)v66 + 23) = 0LL;
      *((_QWORD *)v66 + 140) = 0LL;
      *((_QWORD *)v66 + 141) = 0LL;
      *((_DWORD *)v66 + 33) = v60;
      v106 = (char **)(v66 + 184);
      *((_DWORD *)v66 + 52) = v104;
      v69 = v120;
      *((_DWORD *)v66 + 53) = 0;
      *((_QWORD *)v66 + 8) = v69;
      *((_QWORD *)v66 + 9) = v121;
      *((_QWORD *)v66 + 10) = v122;
      *((_DWORD *)v66 + 200) = 0;
      *((_QWORD *)v66 + 99) = 0LL;
      *((_QWORD *)v66 + 98) = 0LL;
      *((_QWORD *)v66 + 135) = 0LL;
      *((_QWORD *)v66 + 136) = 0LL;
      *((_QWORD *)v66 + 144) = 0LL;
      memset(v66 + 808, 0, 0x110uLL);
      v70 = P;
      v71 = v66 + 1144;
      *((_QWORD *)v66 + 138) = 0LL;
      *((_QWORD *)v66 + 139) = 0LL;
      *((_QWORD *)v66 + 142) = 0LL;
      *((_QWORD *)v66 + 143) = v70;
      if ( a23 )
        *((_DWORD *)v66 + 53) = *a23;
      if ( !v100 )
      {
        *((_QWORD *)v66 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
        *((_QWORD *)v66 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
      }
      if ( v102 == 1 )
      {
        *((_QWORD *)v66 + 9) &= 0x202800000uLL;
        *((_QWORD *)v66 + 10) &= 0x202800000uLL;
      }
      v72 = v123;
      *(_OWORD *)(v66 + 88) = 0LL;
      *((_QWORD *)v66 + 13) = 0LL;
      *((_DWORD *)v66 + 28) = 0;
      *((_WORD *)v66 + 58) = 0;
      v66[118] = 0;
      *((_QWORD *)v66 + 97) = v54;
      *((_QWORD *)v66 + 137) = 0LL;
      *((_QWORD *)v66 + 22) = 0LL;
      v119 = v66 + 176;
      v73 = SepReferenceLogonSession(v72, v66 + 216);
      if ( v73 < 0 )
      {
        *((_DWORD *)v66 + 50) |= 0x20u;
        *((_QWORD *)v66 + 27) = 0LL;
        ObfDereferenceObjectWithTag(v66, 0x746C6644u);
        return (unsigned int)v73;
      }
      if ( HIDWORD(NlsMbOemCodePageTag) )
      {
        **(_QWORD **)v71 = KeGetCurrentThread()[1].CycleTime;
        *(_QWORD *)(*(_QWORD *)v71 + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(*(_QWORD *)v71 + 32LL) = 12;
        *(_DWORD *)(*(_QWORD *)v71 + 280LL) = 0;
        *(_DWORD *)(*(_QWORD *)v71 + 284LL) = 0;
        v95 = *(_QWORD *)v71;
        Process = KeGetCurrentThread()->ApcState.Process;
        *(_QWORD *)(v95 + 16) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
        *(_DWORD *)(v95 + 24) = Process[1].ActiveProcessors.Bitmap[0];
        *(_WORD *)(v95 + 28) = WORD2(Process[1].ActiveProcessors.StaticBitmap[0]);
        *(_BYTE *)(v95 + 30) = BYTE6(Process[1].ActiveProcessors.StaticBitmap[0]);
        v97 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v71 + 40LL), 0x1Eu, 0);
        if ( KeGetCurrentIrql() < 2u )
          RtlWalkFrameChain((PVOID *)(*(_QWORD *)v71 + 40LL + 8LL * v97), 30 - v97, 1u);
        v66 = (char *)Object;
        SepAddTokenLogonSession(Object);
      }
      v74 = v111[0];
      if ( SepTokenSidSharingEnabled )
      {
        inserted = SepSetTokenUserAndGroups((_DWORD)v66, v111[0], v28, v117[0], v105);
        if ( inserted < 0 )
          goto LABEL_60;
      }
      else
      {
        v75 = v60 - (_DWORD)v109;
        *((_QWORD *)v66 + 19) = v66 + 1168;
        v76 = v28 + 1;
        *((_DWORD *)v66 + 31) = v76;
        DestinationSid = &v66[16 * v76 + 1168];
        LODWORD(v104) = v75 - 16;
        RtlCopySidAndAttributesArray(
          1,
          v74,
          v75 - 16,
          (_DWORD)v66 + 1168,
          DestinationSid,
          (__int64)&DestinationSid,
          (__int64)&v104);
        RtlCopySidAndAttributesArray(
          v28,
          v117[0],
          v104,
          (_DWORD)v66 + 1184,
          DestinationSid,
          (__int64)&DestinationSid,
          (__int64)&v104);
      }
      RtlSidHashInitialize(*((_QWORD *)v66 + 19), *((unsigned int *)v66 + 31), v66 + 232);
      *((_QWORD *)v66 + 20) = 0LL;
      *((_DWORD *)v66 + 32) = 0;
      v78 = (char *)ExAllocatePool2(256LL, v61, 1683252563LL, v77);
      *v119 = v78;
      if ( v78 )
      {
        v79 = (unsigned __int8 *)Sid1;
        *((_QWORD *)v66 + 21) = v78;
        v80 = RtlLengthRequiredSid(v79[1]);
        RtlCopySid(v80, v78, v79);
        v81 = (unsigned __int16 *)Src;
        v82 = &v78[(v80 + 3) & 0xFFFFFFFC];
        if ( Src )
        {
          v88 = Src;
          *v106 = v82;
          memmove(v82, v88, v81[1]);
        }
        inserted = SepSetTokenClaims((_DWORD)v66, v127, v126, a21, v125);
        if ( inserted >= 0 )
        {
          if ( !a24 || (inserted = SepSetTokenTrust(v66, SeProcTrustWinTcbSid), inserted >= 0) )
          {
            if ( HIDWORD(NlsMbOemCodePageTag) && SepTokenLeakMethodWatch == 12 )
            {
              if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
              {
                *(_DWORD *)(*(_QWORD *)v71 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                v98 = *(_DWORD *)(*(_QWORD *)v71 + 280LL);
                if ( v98 >= SepTokenLeakBreakCount )
                {
                  DbgPrint("\nToken number 0x%x = 0x%p\n", v98, Object);
                  __debugbreak();
                }
              }
              v66 = (char *)Object;
            }
            if ( a24 )
            {
              v93 = Object;
              if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5] )
                inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
              if ( inserted < 0 )
              {
                *Handle = 0LL;
              }
              else
              {
                if ( !v101 )
                  SepFinalizeTokenAcls(v93);
                *Handle = v93;
              }
              return (unsigned int)inserted;
            }
            inserted = SeCreateAccessState(&PassedAccessState, v129, v115, (char *)SeTokenObjectType + 76);
            v83 = v66;
            if ( inserted < 0 )
              goto LABEL_61;
            inserted = ObInsertObject(v66, &PassedAccessState, 0, 1u, 0LL, Handle);
            SeDeleteAccessState(&PassedAccessState);
            if ( inserted < 0 )
              return (unsigned int)inserted;
            if ( !v101 )
              SepFinalizeTokenAcls(v66);
          }
        }
      }
      else
      {
        inserted = -1073741801;
      }
LABEL_60:
      v83 = v66;
LABEL_61:
      ObfDereferenceObjectWithTag(v83, 0x746C6644u);
      return (unsigned int)inserted;
    }
    ExFreePoolWithTag(v54, 0);
    if ( !HIDWORD(NlsMbOemCodePageTag) )
      return 3221225626LL;
    v94 = v56;
LABEL_116:
    ExFreePoolWithTag(v94, 0);
    return 3221225626LL;
  }
  return result;
}

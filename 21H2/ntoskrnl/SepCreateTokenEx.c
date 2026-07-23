/*
 * XREFs of SepCreateTokenEx @ 0x1402A6428
 * Callers:
 *     NtCreateTokenEx @ 0x1406CC0B0 (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x14079DEB8 (SepCreateToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     RtlWalkFrameChain @ 0x1402C17B0 (RtlWalkFrameChain.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     RtlSidHashInitialize @ 0x140360B30 (RtlSidHashInitialize.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14036138C (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     SepFinalizeTokenAcls @ 0x1405D00A0 (SepFinalizeTokenAcls.c)
 *     SeCreateAccessState @ 0x1406566A0 (SeCreateAccessState.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     RtlIdentifierAuthoritySid @ 0x1406CB9C8 (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x1406CB9E0 (RtlLengthRequiredSid.c)
 *     RtlCopySidAndAttributesArray @ 0x1406CBA00 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenClaims @ 0x1406CBE28 (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x1406CBF44 (SepReferenceLogonSession.c)
 *     SeDeleteAccessState @ 0x1406CC080 (SeDeleteAccessState.c)
 *     RtlCopySid @ 0x14071E2B0 (RtlCopySid.c)
 *     SepSetTokenTrust @ 0x14071E6F0 (SepSetTokenTrust.c)
 *     SepSetTokenUserAndGroups @ 0x14092331C (SepSetTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x140923830 (SepAddTokenLogonSession.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
        _SID_AND_ATTRIBUTES *a9,
        ULONG Count,
        _SID_AND_ATTRIBUTES *a11,
        unsigned int a12,
        unsigned int a13,
        char **a14,
        void *a15,
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
  PSID v26; // rdi
  ULONG v27; // r13d
  int v28; // r12d
  __int64 v29; // rdx
  __int64 result; // rax
  PSID Sid; // rsi
  ULONG v32; // ebx
  ULONG v33; // r14d
  __int64 v34; // rax
  PSID_AND_ATTRIBUTES v35; // r15
  BOOLEAN v36; // al
  __int64 v37; // r10
  bool v38; // bl
  int v39; // r11d
  bool v40; // r14
  ULONG Attributes; // eax
  int v42; // r15d
  ULONG *p_Attributes; // rsi
  ULONG v44; // edx
  unsigned __int8 *v45; // rdi
  PSID_IDENTIFIER_AUTHORITY v46; // rax
  char v47; // dl
  __int64 v48; // r8
  int v49; // ecx
  __int64 v50; // r11
  __int64 v51; // rsi
  __int64 v52; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v54; // rsi
  _QWORD *v55; // rax
  PVOID v56; // rbx
  struct _ERESOURCE *v57; // r15
  int v58; // ebx
  unsigned __int8 *v59; // rax
  ULONG v60; // r14d
  ULONG v61; // r12d
  ULONG v62; // ecx
  int v63; // eax
  NTSTATUS inserted; // ebx
  _QWORD *v65; // rbx
  char *v66; // rdi
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  PVOID v70; // rax
  char *v71; // r15
  __int64 v72; // rcx
  int v73; // esi
  _SID_AND_ATTRIBUTES *v74; // rdx
  ULONG v75; // r14d
  __int64 v76; // rcx
  char *v77; // rsi
  unsigned __int8 *v78; // r14
  ULONG v79; // ebx
  unsigned __int16 *v80; // rcx
  char *v81; // rsi
  void *v82; // rcx
  int v83; // r8d
  int v84; // r9d
  unsigned int v85; // edx
  BOOLEAN v86; // al
  BOOLEAN v87; // al
  void *v88; // rdx
  int *v89; // rcx
  int v90; // r9d
  unsigned __int64 v91; // r8
  BOOLEAN v92; // al
  PVOID v93; // rdi
  void *v94; // rcx
  __int64 v95; // rdx
  _KPROCESS *Process; // rcx
  ULONG v97; // eax
  int v98; // edx
  ULONG RemainingSidAreaSize; // [rsp+30h] [rbp-D0h]
  char v100; // [rsp+50h] [rbp-B0h]
  char v101; // [rsp+51h] [rbp-AFh] BYREF
  char v102; // [rsp+52h] [rbp-AEh]
  char v103; // [rsp+53h] [rbp-ADh]
  int v104; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  char **v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+68h] [rbp-98h]
  int v108; // [rsp+6Ch] [rbp-94h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v110; // [rsp+78h] [rbp-88h]
  PSID_AND_ATTRIBUTES Src; // [rsp+80h] [rbp-80h]
  PSID v112; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  PSID SidArea; // [rsp+98h] [rbp-68h] BYREF
  PSID Sid1; // [rsp+A0h] [rbp-60h]
  int v116; // [rsp+A8h] [rbp-58h]
  unsigned int v117; // [rsp+ACh] [rbp-54h]
  __int64 v118; // [rsp+B0h] [rbp-50h]
  PSID_AND_ATTRIBUTES v119; // [rsp+B8h] [rbp-48h]
  PHANDLE Handle; // [rsp+C0h] [rbp-40h]
  _QWORD *v121; // [rsp+C8h] [rbp-38h]
  __int64 v122; // [rsp+D0h] [rbp-30h]
  __int64 v123; // [rsp+D8h] [rbp-28h]
  __int64 v124; // [rsp+E0h] [rbp-20h]
  __int64 v125; // [rsp+E8h] [rbp-18h]
  void *v126; // [rsp+F0h] [rbp-10h]
  __int64 v127; // [rsp+F8h] [rbp-8h]
  __int64 v128; // [rsp+100h] [rbp+0h]
  __int64 v129; // [rsp+108h] [rbp+8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v131[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  v26 = a15;
  v27 = Count;
  v108 = -1;
  v125 = a7;
  v106 = a14;
  Sid1 = a16;
  v126 = a17;
  v129 = a19;
  v128 = a20;
  v127 = a22;
  v117 = a3;
  v28 = 0;
  v103 = a2;
  Handle = a1;
  Object = 0LL;
  SidArea = 0LL;
  v104 = 0;
  v121 = a4;
  Src = a9;
  v119 = a11;
  v112 = a15;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v131, 0, sizeof(v131));
  LOBYTE(v29) = a2;
  v118 = 0LL;
  v100 = 0;
  v102 = 0;
  v101 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, v29, &v101);
  if ( (int)result >= 0 )
  {
    Sid = a9->Sid;
    v32 = 0;
    if ( Count )
    {
      do
      {
        v33 = v32;
        while ( v33 < v27 )
        {
          if ( !RtlEqualSid(Sid, a11[v33].Sid) || (a11[v33].Attributes & 0x20) != 0 )
            ++v33;
          else
            a11[v33] = a11[--v27];
        }
        v34 = v32++;
        Sid = a11[v34].Sid;
      }
      while ( v32 < v27 );
      v35 = Src;
      v26 = v112;
      Sid = Src->Sid;
    }
    else
    {
      v35 = Src;
    }
    v36 = RtlEqualSid(Sid1, Sid);
    v37 = 0LL;
    v38 = v36 != 0;
    if ( v26 )
    {
      v92 = RtlEqualSid(v26, Sid);
      v37 = 0LL;
      LOBYTE(v39) = 1;
      v40 = v92 != 0;
    }
    else
    {
      LOBYTE(v39) = 1;
      v40 = 1;
    }
    Attributes = v35->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v28 = 2048;
      v104 = 2048;
    }
    v107 = 0;
    if ( v27 )
    {
      v42 = 1;
      p_Attributes = &v119->Attributes;
      v107 = 0;
      while ( 1 )
      {
        v44 = *p_Attributes;
        if ( ((unsigned __int8)*p_Attributes & (unsigned __int8)v39) != 0 )
        {
          v44 |= 6u;
          *p_Attributes = v44;
        }
        if ( (v44 & 0x10) != 0 )
        {
          if ( (v44 & 6) != 0 )
            return 3221225485LL;
          v28 |= 0x800u;
          v104 = v28;
        }
        v45 = (unsigned __int8 *)*((_QWORD *)p_Attributes - 1);
        RtlIdentifierAuthoritySid(v45);
        v46 = RtlIdentifierAuthoritySid(SeUntrustedMandatorySid);
        v49 = *(_DWORD *)v46->Value - *(_DWORD *)v48;
        if ( *(_DWORD *)v46->Value == *(_DWORD *)v48 )
          v49 = *(unsigned __int16 *)&v46->Value[4] - *(unsigned __int16 *)(v48 + 4);
        if ( !v49 )
        {
          v83 = v45[1];
          if ( (_BYTE)v83 )
          {
            v84 = v45[1];
            if ( *(_DWORD *)&v45[4 * (v83 - 1) + 8] > 0x4000u )
              return 3221226566LL;
          }
          else
          {
            v84 = v37;
          }
          if ( (v47 & 0x40) != 0 )
            break;
        }
LABEL_20:
        if ( !v38 )
        {
          v86 = RtlEqualSid(Sid1, v45);
          v37 = 0LL;
          v39 = 1;
          v38 = v86 != 0;
        }
        if ( !v40 )
        {
          v87 = RtlEqualSid(v112, v45);
          v37 = 0LL;
          if ( v87 )
          {
            if ( (*p_Attributes & 8) == 0 )
              return 3221225562LL;
            v39 = 1;
            v107 = v42;
            v40 = 1;
          }
          else
          {
            v39 = 1;
          }
        }
        v42 += v39;
        p_Attributes += 4;
        if ( v42 - 1 >= v27 )
          goto LABEL_24;
      }
      if ( v108 != -1 )
        return 3221225485LL;
      v108 = v42;
      if ( (_BYTE)v83 )
      {
        v85 = *(_DWORD *)&v45[4 * (v84 - 1) + 8];
        if ( v85 >= 0x3000 )
        {
          v100 = v39;
          v28 |= 0x2000u;
LABEL_74:
          v104 = v28;
          goto LABEL_20;
        }
        if ( v85 >= 0x2000 )
        {
LABEL_72:
          v100 = v37;
          if ( v85 >= 0x2000 )
            v28 |= 0x2000u;
          goto LABEL_74;
        }
      }
      else
      {
        v85 = v37;
      }
      v102 = v39;
      goto LABEL_72;
    }
LABEL_24:
    if ( !v38 )
      return 3221225563LL;
    if ( !v40 )
      return 3221225562LL;
    v50 = v37;
    v122 = v37;
    v51 = v37;
    v123 = v37;
    v52 = v37;
    v124 = v37;
    if ( a13 )
    {
      v89 = (int *)(v106 + 1);
      do
      {
        v90 = *v89;
        if ( (*v89 & 0x7FFFFFF8) != 0 )
          return 3221225485LL;
        v91 = (unsigned int)*(v89 - 2);
        *v89 &= 3u;
        if ( (unsigned int)v91 > 0x24 )
          return 3221225568LL;
        if ( _bittest64(&v50, v91) )
          return 3221225894LL;
        v50 |= 1LL << v91;
        v122 = v50;
        if ( (v90 & 2) != 0 )
        {
          _bittestandset64(&v51, (unsigned int)v91);
          v123 = v51;
        }
        if ( (v90 & 1) != 0 )
        {
          _bittestandset64(&v52, (unsigned int)v91);
          v124 = v52;
        }
        LODWORD(v37) = v37 + 1;
        v89 += 3;
      }
      while ( (unsigned int)v37 < a13 );
    }
    if ( a23 && (*a23 & 0xFFFFFFFC) != 0 )
      return 3221225485LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
    v54 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0;
    v55 = PoolWithTag + 2;
    v54[6] = 0;
    v55[1] = v55;
    *v55 = v55;
    *((_QWORD *)v54 + 5) = v54 + 8;
    *((_QWORD *)v54 + 4) = v54 + 8;
    if ( SeTokenLeakTracking )
    {
      P = ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
      v56 = P;
      if ( !P )
      {
        v94 = v54;
        goto LABEL_119;
      }
    }
    else
    {
      v56 = 0LL;
    }
    v118 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v57 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
    if ( v57 )
    {
      v58 = 16 * v27;
      LODWORD(v112) = 16 * v27;
      if ( SepTokenSidSharingEnabled )
      {
        v60 = (v58 + 23) & 0xFFFFFFF8;
        v110 = a12;
      }
      else
      {
        v59 = (unsigned __int8 *)Src->Sid;
        v110 = (a12 + 7) & 0xFFFFFFF8;
        v60 = v58 + ((RtlLengthRequiredSid(v59[1]) + 3) & 0xFFFFFFFC) + v110 + 16;
      }
      SidAreaSize = v60;
      v61 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
      if ( v126 )
        v61 += (*((unsigned __int16 *)v126 + 1) + 3) & 0xFFFFFFFC;
      v62 = v60 + 1168;
      v63 = 4096;
      if ( v61 >= 0x1000 )
        v63 = v61;
      v116 = v63;
      RemainingSidAreaSize = v62 + v63;
      LOBYTE(v62) = v103;
      inserted = ObCreateObject(
                   v62,
                   (_DWORD)SeTokenObjectType,
                   (_DWORD)v121,
                   1,
                   0,
                   v60 + 1168,
                   RemainingSidAreaSize,
                   0,
                   (__int64)&Object);
      if ( inserted < 0 )
      {
        ExFreePoolWithTag(v54, 0);
        if ( SeTokenLeakTracking )
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
      v67 = (_QWORD *)v125;
      *((_QWORD *)v66 + 28) = 0LL;
      v106 = 0LL;
      *((_QWORD *)v66 + 3) = *v67;
      v68 = v118;
      v66[204] = 0;
      *((_QWORD *)v66 + 7) = v68;
      *((_QWORD *)v66 + 5) = *a8;
      *((_DWORD *)v66 + 48) = a5;
      *((_DWORD *)v66 + 49) = a6;
      LODWORD(v68) = v104;
      *(_OWORD *)v66 = *a18;
      *((_DWORD *)v66 + 50) = v68;
      LODWORD(v68) = v116;
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
      *((_DWORD *)v66 + 52) = v108;
      v69 = v122;
      *((_DWORD *)v66 + 53) = 0;
      *((_QWORD *)v66 + 8) = v69;
      *((_QWORD *)v66 + 9) = v123;
      *((_QWORD *)v66 + 10) = v124;
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
      v72 = v125;
      v121 = v66 + 176;
      *(_OWORD *)(v66 + 88) = 0LL;
      *(_OWORD *)(v66 + 104) = 0LL;
      *((_QWORD *)v66 + 97) = v54;
      *((_QWORD *)v66 + 137) = 0LL;
      *((_QWORD *)v66 + 22) = 0LL;
      v73 = SepReferenceLogonSession(v72, v66 + 216);
      if ( v73 < 0 )
      {
        *((_DWORD *)v66 + 50) |= 0x20u;
        *((_QWORD *)v66 + 27) = 0LL;
        ObfDereferenceObjectWithTag(v66, 0x746C6644u);
        return (unsigned int)v73;
      }
      if ( SeTokenLeakTracking )
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
        *(_WORD *)(v95 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[0]);
        *(_BYTE *)(v95 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[0]);
        v97 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v71 + 40LL), 0x1Eu, 0);
        if ( KeGetCurrentIrql() < 2u )
          RtlWalkFrameChain((PVOID *)(*(_QWORD *)v71 + 40LL + 8LL * v97), 30 - v97, 1u);
        v66 = (char *)Object;
        SepAddTokenLogonSession(Object);
      }
      v74 = Src;
      if ( SepTokenSidSharingEnabled )
      {
        inserted = SepSetTokenUserAndGroups((_DWORD)v66, (_DWORD)Src, v27, (_DWORD)v119, v110);
        if ( inserted < 0 )
          goto LABEL_60;
      }
      else
      {
        v75 = v60 - (_DWORD)v112;
        *((_QWORD *)v66 + 19) = v66 + 1168;
        v76 = v27 + 1;
        *((_DWORD *)v66 + 31) = v76;
        SidArea = &v66[16 * v76 + 1168];
        SidAreaSize = v75 - 16;
        RtlCopySidAndAttributesArray(1u, v74, v75 - 16, (PSID_AND_ATTRIBUTES)v66 + 73, SidArea, &SidArea, &SidAreaSize);
        RtlCopySidAndAttributesArray(
          v27,
          v119,
          SidAreaSize,
          (PSID_AND_ATTRIBUTES)v66 + 74,
          SidArea,
          &SidArea,
          &SidAreaSize);
      }
      RtlSidHashInitialize(
        *((PSID_AND_ATTRIBUTES *)v66 + 19),
        *((_DWORD *)v66 + 31),
        (PSID_AND_ATTRIBUTES_HASH)(v66 + 232));
      *((_QWORD *)v66 + 20) = 0LL;
      *((_DWORD *)v66 + 32) = 0;
      v77 = (char *)ExAllocatePoolWithTag(PagedPool, v61, 0x64546553u);
      *v121 = v77;
      if ( v77 )
      {
        v78 = (unsigned __int8 *)Sid1;
        *((_QWORD *)v66 + 21) = v77;
        v79 = RtlLengthRequiredSid(v78[1]);
        RtlCopySid(v79, v77, v78);
        v80 = (unsigned __int16 *)v126;
        v81 = &v77[(v79 + 3) & 0xFFFFFFFC];
        if ( v126 )
        {
          v88 = v126;
          *v106 = v81;
          memmove(v81, v88, v80[1]);
        }
        inserted = SepSetTokenClaims((_DWORD)v66, v129, v128, a21, v127);
        if ( inserted >= 0 )
        {
          if ( !a24 || (inserted = SepSetTokenTrust(v66, SeProcTrustWinTcbSid), inserted >= 0) )
          {
            if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 12 )
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
              if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] )
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
            inserted = SeCreateAccessState(&PassedAccessState, v131, v117, (char *)SeTokenObjectType + 76);
            v82 = v66;
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
      v82 = v66;
LABEL_61:
      ObfDereferenceObjectWithTag(v82, 0x746C6644u);
      return (unsigned int)inserted;
    }
    ExFreePoolWithTag(v54, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v94 = v56;
LABEL_119:
    ExFreePoolWithTag(v94, 0);
    return 3221225626LL;
  }
  return result;
}

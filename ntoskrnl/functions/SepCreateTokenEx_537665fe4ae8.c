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
        struct _ERESOURCE *a14,
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
  void **v24; // rdi
  PSID v27; // r15
  unsigned int v28; // r13d
  __int64 v29; // rdx
  __int64 result; // rax
  void *v31; // r14
  unsigned int v32; // ebx
  unsigned int v33; // esi
  __int64 v34; // rax
  PSID v35; // rbx
  BOOLEAN v36; // al
  __int64 v37; // r10
  bool v38; // si
  int v39; // r11d
  bool v40; // r14
  int v41; // eax
  int v42; // r9d
  int v43; // r15d
  _DWORD *v44; // r12
  int v45; // ebx
  unsigned __int8 *v46; // rdi
  PSID_IDENTIFIER_AUTHORITY v47; // rax
  __int64 v48; // rdx
  int v49; // r9d
  int v50; // ecx
  int v51; // edx
  int v52; // r8d
  __int64 v53; // r8
  __int64 v54; // r15
  __int64 v55; // r11
  unsigned int v56; // r9d
  _DWORD *Pool2; // rax
  _DWORD *v58; // rsi
  _QWORD *v59; // rax
  PVOID v60; // rbx
  PERESOURCE v61; // rdi
  int v62; // ebx
  __int64 v63; // rax
  ULONG v64; // eax
  unsigned int v65; // r14d
  int v66; // r9d
  ULONG v67; // r12d
  unsigned int v68; // ecx
  int v69; // eax
  NTSTATUS inserted; // ebx
  _QWORD *v71; // rbx
  char *v72; // rdi
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  PVOID v76; // rax
  char *v77; // r15
  __int64 v78; // rcx
  int v79; // esi
  int v80; // edx
  unsigned int v81; // r14d
  __int64 v82; // rcx
  char *v83; // rsi
  unsigned __int8 *v84; // r14
  ULONG v85; // ebx
  unsigned __int16 *v86; // rcx
  struct _LIST_ENTRY *v87; // rsi
  void *v88; // rcx
  BOOLEAN v89; // al
  BOOLEAN v90; // al
  void *v91; // rdx
  struct _LIST_ENTRY **p_Blink; // rdx
  unsigned __int64 v93; // r8
  int v94; // ecx
  int v95; // r9d
  BOOLEAN v96; // al
  PVOID v97; // rdi
  void *v98; // rcx
  __int64 v99; // rdx
  _KPROCESS *Process; // rcx
  ULONG v101; // eax
  int v102; // edx
  unsigned int v103; // [rsp+30h] [rbp-D0h]
  char v104; // [rsp+50h] [rbp-B0h]
  char v105; // [rsp+51h] [rbp-AFh] BYREF
  char v106; // [rsp+52h] [rbp-AEh]
  char v107; // [rsp+53h] [rbp-ADh]
  int v108; // [rsp+54h] [rbp-ACh]
  __int64 v109; // [rsp+58h] [rbp-A8h] BYREF
  PERESOURCE Resource; // [rsp+60h] [rbp-A0h]
  unsigned int v111; // [rsp+68h] [rbp-98h]
  int v112; // [rsp+6Ch] [rbp-94h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  PSID v114; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  int v116[2]; // [rsp+88h] [rbp-78h]
  PSID DestinationSid; // [rsp+90h] [rbp-70h] BYREF
  PSID Sid1; // [rsp+98h] [rbp-68h]
  int v119; // [rsp+A0h] [rbp-60h]
  unsigned int v120; // [rsp+A4h] [rbp-5Ch]
  __int64 v121; // [rsp+A8h] [rbp-58h]
  PHANDLE Handle; // [rsp+B0h] [rbp-50h]
  _QWORD *v123; // [rsp+B8h] [rbp-48h]
  __int64 v124; // [rsp+C0h] [rbp-40h]
  __int64 v125; // [rsp+C8h] [rbp-38h]
  __int64 v126; // [rsp+D0h] [rbp-30h]
  int v127[2]; // [rsp+D8h] [rbp-28h]
  void *Src; // [rsp+E0h] [rbp-20h]
  __int64 v129; // [rsp+E8h] [rbp-18h]
  __int64 v130; // [rsp+F0h] [rbp-10h]
  __int64 v131; // [rsp+F8h] [rbp-8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v133[224]; // [rsp+1A0h] [rbp+A0h] BYREF

  v24 = a9;
  v27 = a15;
  v28 = a10;
  LODWORD(v109) = -1;
  v126 = a7;
  Resource = a14;
  Sid1 = a16;
  Src = a17;
  v131 = a19;
  v130 = a20;
  v120 = a3;
  v107 = a2;
  Handle = a1;
  v129 = a22;
  v123 = a4;
  *(_QWORD *)v116 = a9;
  *(_QWORD *)v127 = a11;
  v114 = a15;
  Object = 0LL;
  DestinationSid = 0LL;
  v108 = 0;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v133, 0, sizeof(v133));
  v121 = 0LL;
  LOBYTE(v29) = a2;
  v104 = 0;
  v106 = 0;
  v105 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, v29, &v105);
  if ( (int)result >= 0 )
  {
    v31 = *a9;
    v32 = 0;
    if ( a10 )
    {
      do
      {
        v33 = v32;
        while ( v33 < v28 )
        {
          if ( !RtlEqualSid(v31, *(PSID *)(a11 + 16LL * v33)) || (*(_DWORD *)(a11 + 16LL * v33 + 8) & 0x20) != 0 )
            ++v33;
          else
            *(_OWORD *)(a11 + 16LL * v33) = *(_OWORD *)(a11 + 16LL * --v28);
        }
        v34 = v32++;
        v31 = *(void **)(a11 + 16 * v34);
      }
      while ( v32 < v28 );
      v27 = v114;
      v24 = *(void ***)v116;
    }
    v35 = *v24;
    v36 = RtlEqualSid(Sid1, *v24);
    v37 = 0LL;
    v38 = v36 != 0;
    if ( v27 )
    {
      v96 = RtlEqualSid(v27, v35);
      v37 = 0LL;
      LOBYTE(v39) = 1;
      v40 = v96 != 0;
    }
    else
    {
      LOBYTE(v39) = 1;
      v40 = 1;
    }
    v41 = *((_DWORD *)v24 + 2);
    if ( (v41 & 0x10) != 0 )
    {
      if ( (v41 & 6) != 0 )
        return 3221225485LL;
      v42 = 2048;
      v108 = 2048;
    }
    else
    {
      v42 = v108;
    }
    v112 = 0;
    if ( v28 )
    {
      v112 = 0;
      v43 = 1;
      v44 = (_DWORD *)(a11 + 8);
      while ( 1 )
      {
        v45 = *v44;
        v111 = v43;
        if ( ((unsigned __int8)v45 & (unsigned __int8)v39) != 0 )
        {
          v45 |= 6u;
          *v44 = v45;
        }
        if ( (v45 & 0x10) != 0 )
        {
          if ( (v45 & 6) != 0 )
            return 3221225485LL;
          v108 = v42 | 0x800;
        }
        v46 = (unsigned __int8 *)*((_QWORD *)v44 - 1);
        RtlIdentifierAuthoritySid(v46);
        v47 = RtlIdentifierAuthoritySid(SeUntrustedMandatorySid);
        v50 = *(_DWORD *)v47->Value - *(_DWORD *)v48;
        if ( *(_DWORD *)v47->Value == *(_DWORD *)v48 )
          v50 = *(unsigned __int16 *)&v47->Value[4] - *(unsigned __int16 *)(v48 + 4);
        if ( !v50 )
        {
          v51 = v46[1];
          if ( (_BYTE)v51 )
          {
            v52 = v46[1];
            if ( *(_DWORD *)&v46[4 * (v51 - 1) + 8] > 0x4000u )
              return 3221226566LL;
          }
          else
          {
            v52 = v37;
          }
          if ( (v45 & 0x40) != 0 )
          {
            if ( (_DWORD)v109 != -1 )
              return 3221225485LL;
            LODWORD(v109) = v43;
            if ( !(_BYTE)v51 )
            {
              v104 = v37;
LABEL_33:
              v106 = v39;
              goto LABEL_21;
            }
            v53 = (unsigned int)(v52 - 1);
            if ( *(_DWORD *)&v46[4 * v53 + 8] >= 0x3000u )
            {
              v104 = v39;
              v95 = v49 | 0x2000;
            }
            else
            {
              v104 = v37;
              if ( *(_DWORD *)&v46[4 * v53 + 8] < 0x2000u )
                goto LABEL_33;
              v95 = v49 | 0x2000;
            }
            v108 = v95;
          }
        }
LABEL_21:
        if ( !v38 )
        {
          v89 = RtlEqualSid(Sid1, v46);
          v37 = 0LL;
          v39 = 1;
          v38 = v89 != 0;
        }
        if ( !v40 )
        {
          v90 = RtlEqualSid(v114, v46);
          v37 = 0LL;
          if ( v90 )
          {
            if ( (v45 & 8) == 0 )
              return 3221225562LL;
            v39 = 1;
            v112 = v43;
            v40 = 1;
          }
          else
          {
            v39 = 1;
          }
        }
        v43 += v39;
        v44 += 4;
        if ( v111 >= v28 )
          break;
        v42 = v108;
      }
    }
    if ( !v38 )
      return 3221225563LL;
    if ( !v40 )
      return 3221225562LL;
    v124 = v37;
    v54 = v37;
    v125 = v37;
    v55 = v37;
    v56 = 0;
    if ( a13 )
    {
      p_Blink = &Resource->SystemResourcesList.Blink;
      while ( (*(_DWORD *)p_Blink & 0x7FFFFFF8) == 0 )
      {
        v93 = *((unsigned int *)p_Blink - 2);
        v94 = *(_DWORD *)p_Blink & 3;
        *(_DWORD *)p_Blink = v94;
        if ( (unsigned int)v93 > 0x24 )
          return 3221225568LL;
        if ( _bittest64(&v54, v93) )
          return 3221225894LL;
        v54 |= 1LL << v93;
        if ( (v94 & 2) != 0 )
        {
          _bittestandset64(&v55, (unsigned int)v93);
          v124 = v55;
        }
        if ( (v94 & 1) != 0 )
        {
          _bittestandset64(&v37, (unsigned int)v93);
          v125 = v37;
        }
        ++v56;
        p_Blink = (struct _LIST_ENTRY **)((char *)p_Blink + 12);
        if ( v56 >= a13 )
          goto LABEL_37;
      }
      return 3221225485LL;
    }
LABEL_37:
    if ( a23 && (*a23 & 0xFFFFFFFC) != 0 )
      return 3221225485LL;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, 48LL, 1950442835LL);
    v58 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *Pool2 = 0;
    v59 = Pool2 + 2;
    v58[6] = 0;
    v59[1] = v59;
    *v59 = v59;
    *((_QWORD *)v58 + 5) = v58 + 8;
    *((_QWORD *)v58 + 4) = v58 + 8;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      P = (PVOID)ExAllocatePool2(256LL, 288LL, 1950442835LL);
      v60 = P;
      if ( !P )
      {
        v98 = v58;
        goto LABEL_119;
      }
    }
    else
    {
      v60 = 0LL;
    }
    v121 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    Resource = (PERESOURCE)ExAllocatePool2(64LL, 104LL, 1817470291LL);
    v61 = Resource;
    if ( Resource )
    {
      v62 = 16 * v28;
      LODWORD(v114) = 16 * v28;
      if ( SepTokenSidSharingEnabled )
      {
        v65 = (v62 + 23) & 0xFFFFFFF8;
        v111 = a12;
      }
      else
      {
        v63 = **(_QWORD **)v116;
        v111 = (a12 + 7) & 0xFFFFFFF8;
        v64 = RtlLengthRequiredSid(*(unsigned __int8 *)(v63 + 1));
        v61 = Resource;
        v65 = v62 + ((v64 + 3) & 0xFFFFFFFC) + ((a12 + 7) & 0xFFFFFFF8) + 16;
      }
      v67 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
      if ( Src )
        v67 += (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
      v68 = v65 + 1168;
      v69 = 4096;
      LOBYTE(v66) = 1;
      if ( v67 >= 0x1000 )
        v69 = v67;
      v119 = v69;
      v103 = v68 + v69;
      LOBYTE(v68) = v107;
      inserted = ObCreateObject(
                   v68,
                   (_DWORD)SeTokenObjectType,
                   (_DWORD)v123,
                   v66,
                   0,
                   v65 + 1168,
                   v103,
                   0,
                   (__int64)&Object);
      if ( inserted < 0 )
      {
        ExFreePoolWithTag(v58, 0);
        if ( HIDWORD(NlsMbOemCodePageTag) )
          ExFreePoolWithTag(P, 0);
        ExFreePoolWithTag(v61, 0);
        return (unsigned int)inserted;
      }
      v71 = Object;
      *((_QWORD *)Object + 6) = v61;
      ExInitializeResourceLite(v61);
      v72 = (char *)Object;
      v71[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      *((_QWORD *)v72 + 4) = 0LL;
      v73 = (_QWORD *)v126;
      *((_QWORD *)v72 + 28) = 0LL;
      Resource = 0LL;
      *((_QWORD *)v72 + 3) = *v73;
      v74 = v121;
      v72[204] = 0;
      *((_QWORD *)v72 + 7) = v74;
      *((_QWORD *)v72 + 5) = *a8;
      *((_DWORD *)v72 + 48) = a5;
      *((_DWORD *)v72 + 49) = a6;
      LODWORD(v74) = v108;
      *(_OWORD *)v72 = *a18;
      *((_DWORD *)v72 + 50) = v74;
      LODWORD(v74) = v119;
      *((_DWORD *)v72 + 30) = 0;
      *((_QWORD *)v72 + 145) = 0LL;
      *((_DWORD *)v72 + 34) = v74;
      LODWORD(v74) = v112;
      *((_DWORD *)v72 + 35) = 0;
      *((_DWORD *)v72 + 36) = v74;
      *((_QWORD *)v72 + 23) = 0LL;
      *((_QWORD *)v72 + 140) = 0LL;
      *((_QWORD *)v72 + 141) = 0LL;
      *((_DWORD *)v72 + 33) = v65;
      Resource = (PERESOURCE)(v72 + 184);
      *((_DWORD *)v72 + 52) = v109;
      v75 = v124;
      *((_DWORD *)v72 + 53) = 0;
      *((_QWORD *)v72 + 8) = v54;
      *((_QWORD *)v72 + 9) = v75;
      *((_QWORD *)v72 + 10) = v125;
      *((_DWORD *)v72 + 200) = 0;
      *((_QWORD *)v72 + 99) = 0LL;
      *((_QWORD *)v72 + 98) = 0LL;
      *((_QWORD *)v72 + 135) = 0LL;
      *((_QWORD *)v72 + 136) = 0LL;
      *((_QWORD *)v72 + 144) = 0LL;
      memset(v72 + 808, 0, 0x110uLL);
      v76 = P;
      v77 = v72 + 1144;
      *((_QWORD *)v72 + 138) = 0LL;
      *((_QWORD *)v72 + 139) = 0LL;
      *((_QWORD *)v72 + 142) = 0LL;
      *((_QWORD *)v72 + 143) = v76;
      if ( a23 )
        *((_DWORD *)v72 + 53) = *a23;
      if ( !v104 )
      {
        *((_QWORD *)v72 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
        *((_QWORD *)v72 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
      }
      if ( v106 == 1 )
      {
        *((_QWORD *)v72 + 9) &= 0x202800000uLL;
        *((_QWORD *)v72 + 10) &= 0x202800000uLL;
      }
      v78 = v126;
      *(_OWORD *)(v72 + 88) = 0LL;
      *((_QWORD *)v72 + 13) = 0LL;
      *((_DWORD *)v72 + 28) = 0;
      *((_WORD *)v72 + 58) = 0;
      v72[118] = 0;
      *((_QWORD *)v72 + 97) = v58;
      *((_QWORD *)v72 + 137) = 0LL;
      *((_QWORD *)v72 + 22) = 0LL;
      v123 = v72 + 176;
      v79 = SepReferenceLogonSession(v78, v72 + 216);
      if ( v79 < 0 )
      {
        *((_DWORD *)v72 + 50) |= 0x20u;
        *((_QWORD *)v72 + 27) = 0LL;
        ObfDereferenceObjectWithTag(v72, 0x746C6644u);
        return (unsigned int)v79;
      }
      if ( HIDWORD(NlsMbOemCodePageTag) )
      {
        **(_QWORD **)v77 = KeGetCurrentThread()[1].CycleTime;
        *(_QWORD *)(*(_QWORD *)v77 + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(*(_QWORD *)v77 + 32LL) = 12;
        *(_DWORD *)(*(_QWORD *)v77 + 280LL) = 0;
        *(_DWORD *)(*(_QWORD *)v77 + 284LL) = 0;
        v99 = *(_QWORD *)v77;
        Process = KeGetCurrentThread()->ApcState.Process;
        *(_QWORD *)(v99 + 16) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
        *(_DWORD *)(v99 + 24) = Process[1].ActiveProcessors.Bitmap[0];
        *(_WORD *)(v99 + 28) = WORD2(Process[1].ActiveProcessors.StaticBitmap[0]);
        *(_BYTE *)(v99 + 30) = BYTE6(Process[1].ActiveProcessors.StaticBitmap[0]);
        v101 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v77 + 40LL), 0x1Eu, 0);
        if ( KeGetCurrentIrql() < 2u )
          RtlWalkFrameChain((PVOID *)(*(_QWORD *)v77 + 40LL + 8LL * v101), 30 - v101, 1u);
        v72 = (char *)Object;
        SepAddTokenLogonSession(Object);
      }
      v80 = v116[0];
      if ( SepTokenSidSharingEnabled )
      {
        inserted = SepSetTokenUserAndGroups((_DWORD)v72, v116[0], v28, v127[0], v111);
        if ( inserted < 0 )
          goto LABEL_70;
      }
      else
      {
        v81 = v65 - (_DWORD)v114;
        *((_QWORD *)v72 + 19) = v72 + 1168;
        v82 = v28 + 1;
        *((_DWORD *)v72 + 31) = v82;
        DestinationSid = &v72[16 * v82 + 1168];
        LODWORD(v109) = v81 - 16;
        RtlCopySidAndAttributesArray(
          1,
          v80,
          v81 - 16,
          (_DWORD)v72 + 1168,
          DestinationSid,
          (__int64)&DestinationSid,
          (__int64)&v109);
        RtlCopySidAndAttributesArray(
          v28,
          v127[0],
          v109,
          (_DWORD)v72 + 1184,
          DestinationSid,
          (__int64)&DestinationSid,
          (__int64)&v109);
      }
      RtlSidHashInitialize(*((_QWORD *)v72 + 19), *((unsigned int *)v72 + 31), v72 + 232);
      *((_QWORD *)v72 + 20) = 0LL;
      *((_DWORD *)v72 + 32) = 0;
      v83 = (char *)ExAllocatePool2(256LL, v67, 1683252563LL);
      *v123 = v83;
      if ( v83 )
      {
        v84 = (unsigned __int8 *)Sid1;
        *((_QWORD *)v72 + 21) = v83;
        v85 = RtlLengthRequiredSid(v84[1]);
        RtlCopySid(v85, v83, v84);
        v86 = (unsigned __int16 *)Src;
        v87 = (struct _LIST_ENTRY *)&v83[(v85 + 3) & 0xFFFFFFFC];
        if ( Src )
        {
          v91 = Src;
          Resource->SystemResourcesList.Flink = v87;
          memmove(v87, v91, v86[1]);
        }
        inserted = SepSetTokenClaims((_DWORD)v72, v131, v130, a21, v129);
        if ( inserted >= 0 )
        {
          if ( !a24 || (inserted = SepSetTokenTrust(v72, SeProcTrustWinTcbSid), inserted >= 0) )
          {
            if ( HIDWORD(NlsMbOemCodePageTag) && SepTokenLeakMethodWatch == 12 )
            {
              if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
              {
                *(_DWORD *)(*(_QWORD *)v77 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                v102 = *(_DWORD *)(*(_QWORD *)v77 + 280LL);
                if ( v102 >= SepTokenLeakBreakCount )
                {
                  DbgPrint("\nToken number 0x%x = 0x%p\n", v102, Object);
                  __debugbreak();
                }
              }
              v72 = (char *)Object;
            }
            if ( a24 )
            {
              v97 = Object;
              if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5] )
                inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
              if ( inserted < 0 )
              {
                *Handle = 0LL;
              }
              else
              {
                if ( !v105 )
                  SepFinalizeTokenAcls(v97);
                *Handle = v97;
              }
              return (unsigned int)inserted;
            }
            inserted = SeCreateAccessState(&PassedAccessState, v133, v120, (char *)SeTokenObjectType + 76);
            v88 = v72;
            if ( inserted < 0 )
              goto LABEL_71;
            inserted = ObInsertObject(v72, &PassedAccessState, 0, 1u, 0LL, Handle);
            SeDeleteAccessState(&PassedAccessState);
            if ( inserted < 0 )
              return (unsigned int)inserted;
            if ( !v105 )
              SepFinalizeTokenAcls(v72);
          }
        }
      }
      else
      {
        inserted = -1073741801;
      }
LABEL_70:
      v88 = v72;
LABEL_71:
      ObfDereferenceObjectWithTag(v88, 0x746C6644u);
      return (unsigned int)inserted;
    }
    ExFreePoolWithTag(v58, 0);
    if ( !HIDWORD(NlsMbOemCodePageTag) )
      return 3221225626LL;
    v98 = v60;
LABEL_119:
    ExFreePoolWithTag(v98, 0);
    return 3221225626LL;
  }
  return result;
}

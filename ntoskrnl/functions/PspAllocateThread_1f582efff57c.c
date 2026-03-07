__int64 __fastcall PspAllocateThread(
        PRKPROCESS PROCESS,
        ULONG_PTR a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        _BYTE *a11,
        size_t a12)
{
  ULONG_PTR v13; // r9
  size_t v15; // r11
  __int64 v16; // r12
  char v17; // r8
  __int64 v18; // rdi
  __int64 v19; // r8
  int v20; // r10d
  _QWORD *v21; // rdx
  signed int v22; // ebx
  int v23; // edi
  int v24; // ebx
  USHORT MaximumGroupCount; // ax
  int v26; // r9d
  __int64 v27; // r12
  unsigned int v28; // r14d
  PVOID *p_Object; // rcx
  char *v30; // rdi
  int v31; // r14d
  char *v32; // rcx
  char *v33; // rcx
  int inited; // r14d
  int v35; // r8d
  __int16 v36; // dx
  __int16 v37; // cx
  __int16 v38; // r12
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rbx
  __int64 v45; // rax
  unsigned __int16 ProcessorNodeNumber; // ax
  unsigned __int16 v47; // ax
  int v48; // ecx
  int v49; // eax
  void *v50; // rcx
  volatile signed __int64 *v51; // rdi
  __int64 v52; // rax
  _QWORD *v53; // rcx
  __int64 Pool2; // rax
  __int64 ExtendedFeature; // rax
  __int64 v56; // rax
  __int16 v57; // ax
  __int16 v58; // dx
  __int16 v59; // dx
  int v60; // [rsp+20h] [rbp-1D8h]
  int v61; // [rsp+28h] [rbp-1D0h]
  int v62; // [rsp+38h] [rbp-1C0h]
  char v63; // [rsp+50h] [rbp-1A8h]
  signed int v64; // [rsp+54h] [rbp-1A4h]
  int v65; // [rsp+54h] [rbp-1A4h]
  char v66; // [rsp+58h] [rbp-1A0h]
  int v67; // [rsp+5Ch] [rbp-19Ch]
  __int64 v68; // [rsp+60h] [rbp-198h]
  PVOID Object; // [rsp+68h] [rbp-190h] BYREF
  __int64 v70; // [rsp+70h] [rbp-188h] BYREF
  _BYTE *v71; // [rsp+78h] [rbp-180h]
  ULONG_PTR v72; // [rsp+80h] [rbp-178h]
  __int64 v73; // [rsp+88h] [rbp-170h]
  unsigned int v74; // [rsp+90h] [rbp-168h] BYREF
  __int64 v75; // [rsp+98h] [rbp-160h]
  __int64 v76; // [rsp+A0h] [rbp-158h]
  __int64 CurrentThread; // [rsp+A8h] [rbp-150h]
  __int64 v78; // [rsp+B0h] [rbp-148h]
  size_t Size; // [rsp+B8h] [rbp-140h]
  PRKPROCESS v80; // [rsp+C0h] [rbp-138h]
  __int64 v81; // [rsp+C8h] [rbp-130h]
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp-128h]
  _QWORD *v83; // [rsp+D8h] [rbp-120h]
  __int64 v84; // [rsp+E0h] [rbp-118h]
  char v85; // [rsp+E8h] [rbp-110h] BYREF
  int v86; // [rsp+E9h] [rbp-10Fh]
  __int16 v87; // [rsp+EDh] [rbp-10Bh]
  char v88; // [rsp+EFh] [rbp-109h]
  __int64 v89; // [rsp+F0h] [rbp-108h]
  __int64 v90; // [rsp+F8h] [rbp-100h]
  __int64 v91; // [rsp+100h] [rbp-F8h]
  __int64 v92; // [rsp+110h] [rbp-E8h] BYREF
  __int64 (__fastcall *v93)(void (__fastcall *)(__int64), __int64); // [rsp+118h] [rbp-E0h]
  __int64 v94; // [rsp+120h] [rbp-D8h]
  __int64 v95; // [rsp+128h] [rbp-D0h]
  __int128 v96; // [rsp+130h] [rbp-C8h]
  PRKPROCESS v97; // [rsp+140h] [rbp-B8h]
  int v98; // [rsp+148h] [rbp-B0h]
  int v99; // [rsp+14Ch] [rbp-ACh]
  __int64 v100; // [rsp+150h] [rbp-A8h]
  int v101; // [rsp+160h] [rbp-98h]
  int v102; // [rsp+164h] [rbp-94h]
  int v103; // [rsp+168h] [rbp-90h]
  int v104; // [rsp+16Ch] [rbp-8Ch]
  __int64 v105; // [rsp+170h] [rbp-88h]
  __int64 v106; // [rsp+178h] [rbp-80h]
  _QWORD *v107; // [rsp+180h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+188h] [rbp-70h] BYREF

  v13 = a2;
  v72 = a2;
  v80 = PROCESS;
  BugCheckParameter2 = a2;
  v81 = a5;
  v83 = a6;
  v76 = a7;
  v84 = a8;
  v107 = a10;
  v71 = a11;
  v15 = a12;
  Size = a12;
  memset(&ApcState, 0, sizeof(ApcState));
  v70 = 0LL;
  Object = 0LL;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v74 = 0;
  CurrentThread = (__int64)KeGetCurrentThread();
  v67 = 0;
  v16 = 0LL;
  v73 = 0LL;
  v75 = 0LL;
  v17 = PROCESS->SecureState.SecureHandle & 1;
  v63 = v17;
  if ( a6 )
    v18 = *a6;
  else
    v18 = 0LL;
  v78 = v18;
  v68 = v18;
  if ( a4 )
  {
    v19 = 0LL;
    v20 = *(_DWORD *)(a4 + 4);
    v21 = (_QWORD *)((a4 + 320) & -(__int64)((v20 & 0x1000) != 0));
    if ( (v20 & 0x4000) != 0 )
      v19 = KiProcessorBlock[*(unsigned int *)(a4 + 252)];
    if ( _bittest64(&KeFeatureBits, 0x37u) )
    {
      v16 = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)PROCESS->ExtendedFeatureDisableMask & 0x40000;
      v73 = v16;
      v75 = v16;
    }
    v13 = v72;
    if ( (v20 & 0x40000000) != 0 )
    {
      if ( PROCESS[1].Affinity.StaticBitmap[30] )
        return 3221225485LL;
      if ( (HIDWORD(PROCESS[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        return 3221225659LL;
      v73 = *(_QWORD *)(a4 + 496) | v16;
      v75 = v73;
    }
    if ( v19 )
    {
      if ( v21 )
      {
        if ( *(unsigned __int8 *)(v19 + 208) != *(_WORD *)(((a4 + 320) & -(__int64)((v20 & 0x1000) != 0)) + 8)
          || *v21 && (*v21 & *(_QWORD *)(v19 + 200)) == 0LL )
        {
          v22 = -1073741776;
          goto LABEL_93;
        }
      }
      else
      {
        *(_DWORD *)(a4 + 4) = v20 | 0x1000;
        *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v19 + 208);
        *(_QWORD *)(a4 + 320) = qword_140D1EFE8[*(unsigned __int8 *)(v19 + 208)];
      }
      ProcessorNodeNumber = KeGetProcessorNodeNumber(v19);
    }
    else
    {
      if ( !v21 || !*v21 )
        goto LABEL_11;
      v47 = KeSelectInitialIdealProcessorForThread(PROCESS, v21);
      *(_DWORD *)(a4 + 252) = v47;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      ProcessorNodeNumber = KeGetProcessorNodeNumberByIndex(v47);
      v13 = v72;
      v15 = Size;
    }
    v67 = ProcessorNodeNumber + 1;
LABEL_11:
    v17 = v63;
  }
  *(_DWORD *)(v15 + 384) = 0;
  *(_BYTE *)(v15 + 388) = a3;
  v22 = 0;
  v64 = 0;
  if ( a5 )
  {
    if ( PROCESS == PsInitialSystemProcess )
    {
      v22 = -1073741811;
      goto LABEL_93;
    }
    v22 = v17 != 0 ? 0xC000000D : 0;
    v64 = v22;
    if ( v17 )
      goto LABEL_93;
  }
  if ( v13 )
  {
    if ( a3 == 1 )
    {
      if ( (v13 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_DWORD *)(v15 + 384) = *(_DWORD *)(v13 + 24) & 0x1DF2;
      v22 = v64;
      v23 = v72;
    }
    else
    {
      *(_DWORD *)(v15 + 384) = *(_DWORD *)(v13 + 24) & 0x11FF2;
      v23 = v72;
    }
    if ( v22 < 0 )
      goto LABEL_93;
  }
  else
  {
    v23 = v72;
  }
  v66 = PoEnergyEstimationEnabled();
  v24 = v66 != 0 ? 2520 : 2320;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v27 = MaximumGroupCount;
  v28 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v28 = (v66 != 0 ? 2527 : 2327) & 0xFFFFFFF8;
    v24 = v28 + 8 * MaximumGroupCount;
  }
  LODWORD(v72) = (v24 + 7) & 0xFFFFFFF8;
  LODWORD(Size) = v72 + 16 + 16 * MaximumGroupCount;
  p_Object = &Object;
  v62 = Size;
  v61 = Size;
  LOBYTE(v26) = a3;
  LOBYTE(p_Object) = a3;
  v22 = ObCreateObjectEx((_DWORD)p_Object, (_DWORD)PsThreadType, v23, v26);
  if ( v22 < 0 )
  {
LABEL_93:
    ObfDereferenceObjectWithTag(PROCESS, 0x72437350u);
    return (unsigned int)v22;
  }
  v30 = (char *)Object;
  memset(Object, 0, (unsigned int)Size);
  if ( v66 )
  {
    *((_QWORD *)v30 + 201) = v30 + 2320;
    _interlockedbittestandset((volatile signed __int32 *)v30, 0x15u);
    v30 = (char *)Object;
  }
  if ( KiSchedulerAssistThreadFlagEnabled )
  {
    _interlockedbittestandset((volatile signed __int32 *)v30, 0x16u);
    v30 = (char *)Object;
  }
  if ( v28 )
  {
    *((_DWORD *)v30 + 344) |= 0x20000u;
    *((_QWORD *)v30 + 202) = &v30[v28];
  }
  v31 = v72;
  v32 = &v30[(unsigned int)v72];
  *((_QWORD *)v30 + 72) = v32;
  *(_WORD *)v32 = 1;
  *((_WORD *)v32 + 1) = v27;
  *((_DWORD *)v32 + 1) = 0;
  memset(v32 + 8, 0, 8 * v27);
  v33 = &v30[(unsigned int)(v31 + 8 + 8 * v27)];
  *((_QWORD *)v30 + 69) = v33;
  *(_WORD *)v33 = 1;
  *((_WORD *)v33 + 1) = v27;
  *((_DWORD *)v33 + 1) = 0;
  memset(v33 + 8, 0, 8 * v27);
  ExInitializePushLock((PEX_RUNDOWN_REF)v30 + 169);
  *((_QWORD *)v30 + 153) = PROCESS[1].Header.WaitListHead.Flink;
  if ( (*a9 & 4) != 0 )
    *((_DWORD *)v30 + 344) |= 4u;
  if ( (*a9 & 0x200) != 0 )
    *((_DWORD *)v30 + 29) |= 0x200000u;
  *((_DWORD *)v30 + 257) = 32;
  *((_QWORD *)v30 + 170) = 0LL;
  *((_DWORD *)v30 + 342) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)(v30 + 1240), 0, 1);
  *((_QWORD *)v30 + 146) = v30 + 1160;
  *((_QWORD *)v30 + 145) = v30 + 1160;
  *((_QWORD *)v30 + 183) = v30 + 1456;
  *((_QWORD *)v30 + 182) = v30 + 1456;
  *((_QWORD *)v30 + 185) = v30 + 1472;
  *((_QWORD *)v30 + 184) = v30 + 1472;
  *((_QWORD *)v30 + 186) = 0LL;
  *((_QWORD *)v30 + 196) = v30 + 1560;
  *((_QWORD *)v30 + 195) = v30 + 1560;
  *((_QWORD *)v30 + 197) = 0LL;
  *((_QWORD *)v30 + 161) = v30 + 1280;
  *((_QWORD *)v30 + 160) = v30 + 1280;
  *((_QWORD *)v30 + 187) = 0LL;
  *((_QWORD *)v30 + 150) = 0LL;
  *((_QWORD *)v30 + 152) = v30 + 1208;
  *((_QWORD *)v30 + 151) = v30 + 1208;
  *((_QWORD *)v30 + 203) = -3LL;
  if ( KeQuerySystemTimeUnsafe() )
  {
    KeQuerySystemTimePrecise((_QWORD *)v30 + 144);
  }
  else
  {
    v30 = (char *)Object;
    *((_QWORD *)Object + 144) = MEMORY[0xFFFFF78000000014];
  }
  *((_QWORD *)v30 + 208) = v30 + 1656;
  *((_QWORD *)v30 + 207) = v30 + 1656;
  *((_QWORD *)v30 + 209) = 0LL;
  *((_QWORD *)v30 + 211) = v30 + 1680;
  *((_QWORD *)v30 + 210) = v30 + 1680;
  BugCheckParameter2 = (ULONG_PTR)(v30 + 1360);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v30 + 1360), 0LL);
  inited = PsAssignThreadId((__int64)v30);
  v65 = inited;
  if ( inited < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 170, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v30 + 170);
    KeAbPostRelease((ULONG_PTR)(v30 + 1360));
    v30 = (char *)Object;
    goto LABEL_97;
  }
  if ( !a5 )
  {
    v45 = v76;
    *((_QWORD *)v30 + 148) = v76;
    *((_QWORD *)v30 + 164) = v45;
    v92 = 0LL;
    v94 = v45;
    v95 = v84;
    v96 = 0LL;
    v97 = PROCESS;
    v98 = v67;
    v99 = 0;
    v93 = PspSystemThreadStartup;
    if ( (*a9 & 0x400) != 0 && v63 )
    {
      v93 = (__int64 (__fastcall *)(void (__fastcall *)(__int64), __int64))PspSecureThreadStartup;
      v99 = 16;
    }
    v43 = v70;
    goto LABEL_54;
  }
  v35 = *a9;
  v36 = (16 * (*a9 & 0x40)) | 8;
  if ( (*a9 & 2) == 0 )
    v36 = 16 * (v35 & 0x40);
  v37 = v36 | 0x2000;
  if ( (v35 & 0x80u) == 0 )
    v37 = v36;
  v38 = v37 | 0x4000;
  if ( (v35 & 0x100) == 0 )
    v38 = v37;
  v39 = (__int64)v71;
  if ( v71 )
  {
    if ( (HIDWORD(PROCESS[2].ReadyListHead.Blink) & 0x4000) != 0 )
      *((_DWORD *)v30 + 29) |= 0x100000u;
    v60 = v67;
    if ( PROCESS[1].Affinity.StaticBitmap[30] )
    {
      v85 = 0;
      v90 = 0x8000LL;
      v91 = 0x40000LL;
      v89 = 0LL;
      inited = PspSetupUserStack((__int64)PROCESS, a5, v68, (__int64)&v85);
      v65 = inited;
      if ( inited < 0 )
      {
LABEL_48:
        v42 = v68;
        goto LABEL_49;
      }
      v48 = (int)v71;
      *v71 ^= (*v71 ^ v85) & 2;
      v42 = v68;
      v49 = PspWow64SetupUserStack((_DWORD)PROCESS, v40, v68, v48, v67);
    }
    else
    {
      inited = PspSetupUserStack((__int64)PROCESS, a5, v68, v39);
      v65 = inited;
      if ( inited < 0 || (*((_DWORD *)v30 + 29) & 0x100000) == 0 )
        goto LABEL_48;
      v42 = v68;
      v49 = PspSetupUserShadowStack(PROCESS, v67);
    }
    inited = v49;
    v65 = v49;
LABEL_49:
    if ( inited < 0 )
      goto LABEL_97;
    inited = MmCreateTeb(PROCESS, v42, (_QWORD *)v30 + 153, v41, &v70);
    v65 = inited;
    if ( inited < 0 )
      goto LABEL_97;
    *((_QWORD *)v30 + 148) = *(_QWORD *)(a5 + 248);
    *((_QWORD *)v30 + 164) = *(_QWORD *)(a5 + 128);
    v43 = v70;
    if ( PROCESS[1].Affinity.StaticBitmap[30] )
    {
      inited = PspWow64InitThread(PROCESS);
      v65 = inited;
      if ( inited < 0 )
        goto LABEL_97;
    }
    if ( !v38 )
      goto LABEL_53;
    KeStackAttachProcess(PROCESS, &ApcState);
    *(_WORD *)(v43 + 6126) = v38;
    if ( PROCESS[1].Affinity.StaticBitmap[30] )
    {
      if ( WORD2(PROCESS[2].Affinity.StaticBitmap[20]) == 0x8664 )
      {
        v105 = v43 + 0x2000;
        *(_WORD *)(v43 + 14318) = v38;
      }
      else
      {
        v106 = v43 + 0x2000;
        *(_WORD *)(v43 + 12234) = v38;
      }
    }
    inited = 0;
    v65 = 0;
    goto LABEL_64;
  }
  if ( *(_QWORD *)&PROCESS[2].Affinity.Count )
  {
    v52 = *(_QWORD *)(a5 + 248);
    *((_QWORD *)v30 + 148) = v52;
    *((_QWORD *)v30 + 164) = v52;
    v53 = v83;
    *((_QWORD *)v30 + 199) = v83[1];
    *((_QWORD *)v30 + 200) = v53[2];
    _interlockedbittestandset((volatile signed __int32 *)v30, 0x1Au);
    RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, (__int64)&v74);
    Pool2 = ExAllocatePool2(256LL, v74, 1666413392LL);
    v30 = (char *)Object;
    *((_QWORD *)Object + 205) = Pool2;
    if ( !Pool2 )
    {
      inited = -1073741670;
      v65 = -1073741670;
      goto LABEL_97;
    }
    v43 = v70;
LABEL_53:
    v92 = 0LL;
    v93 = (__int64 (__fastcall *)(void (__fastcall *)(__int64), __int64))PspUserThreadStartup;
    v94 = v76;
    v95 = *((_QWORD *)v30 + 148);
    *(_QWORD *)&v96 = a5;
    *((_QWORD *)&v96 + 1) = v43;
    v97 = PROCESS;
    v98 = v67;
    v99 = 0;
LABEL_54:
    v100 = v73;
    inited = KeInitThread(v30, &v92);
    v65 = inited;
    if ( inited >= 0 )
    {
      *v107 = v30;
      return 0LL;
    }
    if ( v43 && v71 )
      MmDeleteTeb(PROCESS, v43);
    goto LABEL_97;
  }
  v43 = *(_QWORD *)(CurrentThread + 240);
  v70 = v43;
  *((_QWORD *)v30 + 148) = PsQueryThreadStartAddress(CurrentThread, 1);
  *((_QWORD *)v30 + 164) = *(_QWORD *)(CurrentThread + 1312);
  *((_DWORD *)v30 + 345) |= 0x10u;
  if ( (HIDWORD(PROCESS[2].ReadyListHead.Blink) & 0x4000) != 0
    && (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040
    && (*(_DWORD *)(*(int *)(a5 + 1248) + a5 + 1232) & 0x800LL) != 0 )
  {
    ExtendedFeature = RtlLocateExtendedFeature(a5 + 1232, 11LL, 0LL);
    if ( ExtendedFeature )
    {
      if ( (*(_BYTE *)ExtendedFeature & 1) != 0 && *(_QWORD *)(ExtendedFeature + 8) )
        *((_DWORD *)v30 + 29) |= 0x100000u;
    }
  }
  if ( PROCESS[1].Affinity.StaticBitmap[30] )
  {
    v56 = 14416LL;
    if ( WORD2(PROCESS[2].Affinity.StaticBitmap[20]) != 0x8664 )
      v56 = 12312LL;
    CurrentThread = v56;
  }
  else
  {
    CurrentThread = 6224LL;
  }
  KeStackAttachProcess(PROCESS, &ApcState);
  if ( MmSecureVirtualMemoryEx(v43, CurrentThread, 4LL) )
  {
    *(_OWORD *)(v43 + 64) = *(_OWORD *)(v30 + 1224);
    *(_OWORD *)(v43 + 2008) = *(_OWORD *)(v30 + 1224);
    *(_DWORD *)(v43 + 6044) = 0;
    *(_DWORD *)(v43 + 6120) = 0;
    v57 = *(_WORD *)(v43 + 6126) & 0x62C;
    *(_WORD *)(v43 + 6126) = v57;
    *(_WORD *)(v43 + 6126) = v38 | v57 | 0x40;
    if ( PROCESS[1].Affinity.StaticBitmap[30] )
    {
      if ( WORD2(PROCESS[2].Affinity.StaticBitmap[20]) == 0x8664 )
      {
        v105 = v43 + 0x2000;
        *(_QWORD *)(v43 + 8256) = *((_QWORD *)v30 + 153);
        *(_QWORD *)(v43 + 8264) = *((_QWORD *)v30 + 154);
        *(_QWORD *)(v43 + 10200) = *((_QWORD *)v30 + 153);
        *(_QWORD *)(v43 + 10208) = *((_QWORD *)v30 + 154);
        *(_DWORD *)(v43 + 14236) = 0;
        *(_DWORD *)(v43 + 14312) = 0;
        v58 = *(_WORD *)(v43 + 14318) & 0x62C;
        *(_WORD *)(v43 + 14318) = v58;
        *(_WORD *)(v43 + 14318) = v38 | v58 | 0x40;
      }
      else
      {
        v106 = v43 + 0x2000;
        v101 = *((_DWORD *)v30 + 306);
        *(_DWORD *)(v43 + 8224) = v101;
        v102 = *((_DWORD *)v30 + 308);
        *(_DWORD *)(v43 + 8228) = v102;
        v103 = *((_DWORD *)v30 + 306);
        *(_DWORD *)(v43 + 9908) = v103;
        v104 = *((_DWORD *)v30 + 308);
        *(_DWORD *)(v43 + 9912) = v104;
        *(_DWORD *)(v43 + 12188) = 0;
        *(_DWORD *)(v43 + 12228) = 0;
        v59 = *(_WORD *)(v43 + 12234) & 0x62C;
        *(_WORD *)(v43 + 12234) = v59;
        *(_WORD *)(v43 + 12234) = v38 | v59 | 0x40;
      }
    }
  }
  else
  {
    inited = -1073741503;
    v65 = -1073741503;
  }
LABEL_64:
  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  if ( inited >= 0 )
    goto LABEL_53;
LABEL_97:
  if ( v71 && *v71 )
    PspDeleteUserStack(PROCESS, v40, v68, v71, v60, v61, 0, v62, &Object, 0LL);
  v50 = (void *)*((_QWORD *)v30 + 205);
  if ( v50 )
  {
    ExFreePoolWithTag(v50, 0x63537350u);
    *((_QWORD *)v30 + 205) = 0LL;
  }
  if ( *((_QWORD *)v30 + 154) )
  {
    v51 = (volatile signed __int64 *)BugCheckParameter2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v51);
    KeAbPostRelease((ULONG_PTR)v51);
    inited = v65;
    v30 = (char *)Object;
  }
  if ( !*((_QWORD *)v30 + 68) )
    ObfDereferenceObjectWithTag(PROCESS, 0x72437350u);
  ObfDereferenceObject(v30);
  return (unsigned int)inited;
}

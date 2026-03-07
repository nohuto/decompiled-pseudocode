__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        __int64 a2,
        void **a3,
        unsigned __int64 a4,
        unsigned int *a5,
        int a6,
        int a7)
{
  __int64 v9; // r8
  void **v10; // r11
  unsigned __int64 v11; // r12
  __int64 v12; // rsi
  unsigned int *v13; // r15
  unsigned int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  int v17; // r9d
  int v18; // r8d
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r8
  _QWORD *v25; // r10
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r9
  int v28; // r10d
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rcx
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  unsigned int ProtectionMask; // esi
  int v34; // r8d
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // edi
  void **v39; // r11
  int v40; // eax
  int v41; // eax
  size_t v43; // r14
  unsigned __int64 v44; // rax
  BOOLEAN v45; // al
  int v46; // eax
  void *v47; // [rsp+40h] [rbp-F8h] BYREF
  void *Src; // [rsp+48h] [rbp-F0h] BYREF
  int v49; // [rsp+50h] [rbp-E8h]
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-E0h]
  void **v51; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v52; // [rsp+68h] [rbp-D0h]
  unsigned int *v53; // [rsp+70h] [rbp-C8h]
  __int64 v54; // [rsp+78h] [rbp-C0h]
  unsigned int *v55; // [rsp+80h] [rbp-B8h]
  __int64 v56; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+90h] [rbp-A8h]
  size_t v58; // [rsp+98h] [rbp-A0h]
  PRKPROCESS v59; // [rsp+A0h] [rbp-98h]
  __int64 v60; // [rsp+A8h] [rbp-90h]
  __int64 v61; // [rsp+B0h] [rbp-88h]
  void **v62; // [rsp+C0h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-70h] BYREF

  v52 = a4;
  v51 = a3;
  v61 = a2;
  v62 = a3;
  v55 = a5;
  memset(&ApcState, 0, sizeof(ApcState));
  v47 = 0LL;
  Src = 0LL;
  PROCESS = *(PRKPROCESS *)(a2 + 88);
  v59 = PROCESS;
  v49 = 0;
  v56 = a1;
  v11 = MiSectionControlArea(a1);
  v57 = v11;
  v12 = *(_QWORD *)v11;
  v54 = *(_QWORD *)(a2 + 24);
  if ( !a7 )
  {
    if ( (unsigned int)(a6 - 1) > 1 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v11 + 56) & 0x400) == 0 && *(_QWORD *)(a2 + 16) >= 0x10000uLL && (*(_WORD *)v10 || *(_WORD *)a5) )
      return 3221226016LL;
  }
  v13 = (unsigned int *)(a2 + 40);
  v53 = (unsigned int *)(a2 + 40);
  if ( !a7 && (*v13 & 0x9F2BDFFF) != 0 )
    return 3221225485LL;
  v60 = a2 + 40;
  v14 = *v13;
  if ( (*v13 & 0x40000000) != 0 && !a7 && !*(_QWORD *)(v9 + 2240) )
    return 3221225485LL;
  v15 = *(_DWORD *)(a2 + 44);
  if ( (v15 & 0xF0) != 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    *(_DWORD *)(a2 + 60) |= 8u;
  if ( (v15 & 0x40000000) != 0 )
  {
    if ( (v15 & 0xF0) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      return 3221225485LL;
    v15 &= ~0x40000000u;
    *(_DWORD *)(a2 + 44) = v15;
    *(_DWORD *)(a2 + 120) |= 2u;
  }
  if ( (*(_DWORD *)(a2 + 120) & 8) != 0 && ((v15 & 0xF0) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0) )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
  {
    v16 = MmCompatibleProtectionMask[MiMakeProtectionMask(*(_DWORD *)(a1 + 60) & 0xFFF) & 7] | 0x700;
    if ( (v16 | v18) != v16 )
      return 3221225550LL;
    if ( (v17 & 0x840000) == 0
      && !*(_WORD *)(a2 + 58)
      && ((*(_DWORD *)(v11 + 56) & 0x400) == 0 || (v17 & 0x20002000) == 0) )
    {
      goto LABEL_19;
    }
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 72) || (v14 & 0x2000) != 0 )
    return 3221225485LL;
  if ( (v14 & 0x20000000) != 0 )
  {
    if ( *(_QWORD *)a5
      || (MiFlags & 0x20000) != 0
      || (*(_DWORD *)(v11 + 56) & 0x20000) != 0
      || (v45 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a2 + 57)), v10 = v51, !v45) )
    {
      *v13 &= ~0x20000000u;
    }
  }
LABEL_19:
  v19 = *(_QWORD *)(a2 + 24);
  v20 = *(_QWORD *)a5 + v19;
  if ( v20 < *(_QWORD *)a5 )
    return 3221225503LL;
  v21 = *(_QWORD *)(a1 + 48);
  if ( v20 > v21 && (*v13 & 0x2000) == 0 )
    return 3221225503LL;
  if ( !v19 )
    *(_QWORD *)(a2 + 24) = v21 - *(_QWORD *)a5;
  if ( (*(_DWORD *)(v11 + 56) & 0x400) != 0 )
  {
    if ( (*a5 & 0xFFF) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
        return 3221226016LL;
      *a5 &= 0xFFFFF000;
    }
    goto LABEL_73;
  }
  v22 = *(_QWORD *)(a2 + 16);
  if ( v22 > 0x10000 && *(_QWORD *)(v11 + 64) )
    v22 = 0x10000LL;
  v23 = *a5;
  v24 = v23 & (v22 - 1);
  v25 = (_QWORD *)(a2 + 16);
  if ( v24 )
  {
    if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
      return 3221226016LL;
    *a5 = v23 & -(int)v22;
    v25 = (_QWORD *)(a2 + 16);
    if ( (*(_DWORD *)(v11 + 56) & 0x20) == 0 )
    {
      v44 = *(_QWORD *)(a2 + 24);
      if ( v44 + v24 < v44 )
        return 3221225503LL;
      *(_QWORD *)(a2 + 24) = v44 + v24;
LABEL_73:
      v25 = (_QWORD *)(a2 + 16);
    }
  }
  if ( *(__int64 *)(a2 + 24) <= 0 )
    return 3221225503LL;
  if ( ((*v25 - 1LL) & (unsigned __int64)*v10) == 0 )
    goto LABEL_28;
  if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
    return 3221226016LL;
  *v10 = (void *)((unsigned __int64)*v10 & -*v25);
LABEL_28:
  v26 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 32) = v26;
  v27 = v26;
  if ( (v26 & 0xFFF) != 0 )
  {
    v27 = v26 + 4096 - (unsigned int)(v26 & 0xFFF);
    if ( v27 >= v26 )
    {
      *(_QWORD *)(a2 + 24) = v27;
      goto LABEL_29;
    }
    return 3221225503LL;
  }
LABEL_29:
  v28 = *(_DWORD *)(a2 + 60) & 1;
  v29 = (unsigned __int64 *)v10;
  if ( !v28 )
    v29 = (unsigned __int64 *)a2;
  v30 = *(_QWORD *)(a2 + 8);
  if ( *v29 > v30 )
    return 3221225485LL;
  if ( v30 - *v29 + 1 < v27 )
    return (unsigned int)(v28 != 0) - 1073741801;
  if ( v52 > v26 && (*v13 & 0x2000) == 0 )
    return 3221225485LL;
  if ( v26 > *(_QWORD *)(a1 + 48) && (*v13 & 0x2000) == 0 )
    return 3221225503LL;
  v31 = *v13;
  if ( (*v13 & 0x2000) != 0 && (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
    return 3221225550LL;
  if ( (v31 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v31 & 0x20000000) != 0)
    || (*(_DWORD *)(a2 + 64) & 0x4000000) != 0
    && ((*(_DWORD *)(v11 + 56) & 0x420) != 0
     || (v31 & 0xFFFFDFFF) != 0
     || !v28
     || *v10 != (void *)((unsigned __int64)*v10 & 0xFFFFFFFFFFFFF000uLL)
     || !v54) )
  {
    return 3221225485LL;
  }
  v32 = *(_DWORD *)(a2 + 44);
  if ( *(__int16 *)(v12 + 12) < 0 )
  {
    v32 = v32 & 0xFFFFF9FF | 0x200;
    *(_DWORD *)(a2 + 44) = v32;
  }
  if ( _bittest16((const signed __int16 *)(v12 + 12), 0xEu) )
  {
    v32 = v32 & 0xFFFFF9FF | 0x400;
    *(_DWORD *)(a2 + 44) = v32;
  }
  ProtectionMask = MiMakeProtectionMask(v32);
  LODWORD(v54) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v36 = *(_QWORD *)(a2 + 96);
  if ( (*(_DWORD *)(v36 + 2512) & 0x100) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      *v13 = v34 & 0xDFFFFFFF;
    }
    else if ( (ProtectionMask & 2) != 0 )
    {
      return MiArbitraryCodeBlocked(v36);
    }
  }
  if ( (PRKPROCESS)v36 != PROCESS )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v49 = 1;
  }
  v38 = MiValidateVadMetadataFlags(a2, CurrentThread);
  if ( v38 >= 0 )
  {
    v40 = *(_DWORD *)(v11 + 56);
    if ( (v40 & 0x400) != 0 )
    {
      v41 = MiMapViewOfPhysicalSection(v37, v39, a5, ProtectionMask);
    }
    else
    {
      if ( (v40 & 0x20) != 0 )
      {
        v47 = *v39;
        Src = v47;
        v43 = *(_QWORD *)(a2 + 24);
        v58 = v43;
        while ( 1 )
        {
          v38 = MiMapViewOfImageSection(v11, a2, (unsigned __int64 *)&v47, v55, a1, a6, ProtectionMask, 0);
          LODWORD(v52) = v38;
          if ( (*v13 & 0x20000000) == 0 )
            break;
          *v13 &= ~0x20000000u;
          v46 = MiMapViewOfImageSection(v11, a2, (unsigned __int64 *)&Src, v55, a1, a6, ProtectionMask, 0);
          if ( v38 < 0 )
          {
            v47 = Src;
            v38 = v46;
            break;
          }
          if ( v46 >= 0 )
          {
            memmove(v47, Src, v43);
            MiUnmapViewOfSection(PROCESS, (unsigned __int64)Src, 0, 0);
            break;
          }
          MiUnmapViewOfSection(PROCESS, (unsigned __int64)v47, 0, 0);
          v13 = v53;
        }
        if ( v38 >= 0 )
          *v51 = v47;
        goto LABEL_51;
      }
      v41 = MiMapViewOfDataSection(v11, a2, (_DWORD)v39, (_DWORD)a5, a1, a6, ProtectionMask, v52);
    }
    v38 = v41;
  }
LABEL_51:
  if ( v49 )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  return (unsigned int)v38;
}

/*
 * XREFs of MiMapViewOfSection @ 0x140639150
 * Callers:
 *     MmMapViewOfSection @ 0x1406128D0 (MmMapViewOfSection.c)
 *     NtMapViewOfSection @ 0x140638420 (NtMapViewOfSection.c)
 *     MmMapSecureViewOfSection @ 0x1406D9C10 (MmMapSecureViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x1406FCBD8 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MiMakeProtectionMask @ 0x14021A9E0 (MiMakeProtectionMask.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x14061E510 (MiUnmapViewOfSection.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     MiArbitraryCodeBlocked @ 0x140629784 (MiArbitraryCodeBlocked.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C33C8 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        __int64 a2,
        void **a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        int a6,
        int a7)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r11
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // ecx
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  int v28; // r10d
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // r8d
  __int16 v33; // ax
  unsigned int v34; // ecx
  int ProtectionMask; // esi
  int v36; // r8d
  _DWORD *v37; // r9
  char v38; // r11
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // edi
  int v45; // eax
  size_t v46; // r14
  unsigned __int64 *v47; // r15
  int v48; // eax
  unsigned __int64 v49; // rax
  int v50; // eax
  char v51[8]; // [rsp+50h] [rbp-F8h] BYREF
  void *v52; // [rsp+58h] [rbp-F0h] BYREF
  void *Src; // [rsp+60h] [rbp-E8h] BYREF
  int v54; // [rsp+68h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-D8h]
  __int64 v56; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v57; // [rsp+80h] [rbp-C8h]
  unsigned __int64 *v58; // [rsp+88h] [rbp-C0h]
  void **v59; // [rsp+90h] [rbp-B8h]
  __int64 v60; // [rsp+98h] [rbp-B0h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-A8h]
  size_t v62; // [rsp+A8h] [rbp-A0h]
  ULONG_PTR v63; // [rsp+B0h] [rbp-98h]
  __int64 v64; // [rsp+C0h] [rbp-88h]
  void **v65; // [rsp+D0h] [rbp-78h]
  _BYTE v66[48]; // [rsp+D8h] [rbp-70h] BYREF

  v57 = a4;
  v59 = a3;
  v64 = a2;
  v65 = a3;
  v58 = a5;
  memset(v66, 0, sizeof(v66));
  v52 = 0LL;
  Src = 0LL;
  BugCheckParameter1 = *(_QWORD *)(a2 + 88);
  v63 = BugCheckParameter1;
  v54 = 0;
  v60 = a1;
  v13 = MiSectionControlArea(a1);
  v61 = v13;
  v14 = *(_QWORD *)v13;
  v56 = *(_QWORD *)(a2 + 24);
  if ( !a7 )
  {
    if ( (unsigned int)(a6 - 1) > 1 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v13 + 56) & 0x400) == 0
      && *(_QWORD *)(a2 + 16) >= 0x10000uLL
      && (*(_WORD *)a3 != (_WORD)v12 || *(_WORD *)a5 != (_WORD)v12) )
    {
      return 3221226016LL;
    }
  }
  if ( !a7
    && ((*(_DWORD *)(a2 + 40) & 0x9F2BDFFF) != 0
     || (*(_DWORD *)(a2 + 40) & 0x40000000) != 0 && *(_QWORD *)(v11 + 2240) == v12) )
  {
    return 3221225485LL;
  }
  v51[0] = 1;
  v15 = *(_DWORD *)(a2 + 44);
  if ( (v15 & 0x40000000) != 0 )
  {
    if ( (v15 & 0xF0) == 0 )
      return 3221225485LL;
    v51[0] = v12;
    *(_DWORD *)(a2 + 44) = v15 & 0xBFFFFFFF;
  }
  if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a2 + 80) != v12 && (*(_DWORD *)(a2 + 60) & 0x2000000) == 0 )
      return 3221225485LL;
    v45 = *(_DWORD *)(a2 + 40);
    if ( (v45 & 0x2000) != 0 )
      return 3221225485LL;
    if ( (v45 & 0x20000000) != 0
      && (*a5 != v12
       || (MiFlags & 0x40000) != 0
       || (*(_DWORD *)(v13 + 56) & 0x20000) != 0
       || !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a2 + 104))) )
    {
      *(_DWORD *)(a2 + 40) &= ~0x20000000u;
    }
  }
  else
  {
    v16 = MmCompatibleProtectionMask[MiMakeProtectionMask(*(_DWORD *)(v10 + 60) & 0xFFF) & 7] | 0x700;
    if ( (v16 | v17) != v16 )
      return 3221225550LL;
    v18 = *(_DWORD *)(a2 + 40);
    if ( (v18 & 0x840000) != 0 || (v18 & 0x20002000) != 0 && (*(_DWORD *)(v13 + 56) & 0x400) != 0 )
      return 3221225485LL;
  }
  v19 = *(_QWORD *)(a2 + 24);
  v20 = *a5 + v19;
  if ( v20 < *a5 )
    return 3221225503LL;
  v21 = *(_QWORD *)(a1 + 48);
  if ( v20 > v21 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  if ( !v19 )
    *(_QWORD *)(a2 + 24) = v21 - *a5;
  if ( (*(_DWORD *)(v13 + 56) & 0x400) != 0 )
  {
    if ( (*(_DWORD *)a5 & 0xFFF) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 &= 0xFFFFF000;
    }
  }
  else
  {
    v22 = *(_QWORD *)(a2 + 16);
    if ( v22 > 0x10000 && *(_QWORD *)(v13 + 64) )
      v22 = 0x10000LL;
    v23 = *(unsigned int *)a5;
    v24 = v23 & (v22 - 1);
    if ( v24 )
    {
      if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 = v23 & -(int)v22;
      if ( (*(_DWORD *)(v13 + 56) & 0x20) == 0 )
      {
        v49 = *(_QWORD *)(a2 + 24);
        if ( v49 + v24 < v49 )
          return 3221225503LL;
        *(_QWORD *)(a2 + 24) = v49 + v24;
      }
    }
  }
  v25 = *(_QWORD *)(a2 + 24);
  if ( (__int64)v25 <= 0 )
    return 3221225503LL;
  v26 = *(_QWORD *)(a2 + 16);
  if ( ((v26 - 1) & (unsigned __int64)*a3) == 0 )
    goto LABEL_24;
  if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
    return 3221226016LL;
  *a3 = (void *)((unsigned __int64)*a3 & -v26);
  v25 = *(_QWORD *)(a2 + 24);
LABEL_24:
  *(_QWORD *)(a2 + 32) = v25;
  v27 = v25;
  if ( (v25 & 0xFFF) == 0 )
    goto LABEL_25;
  v27 = v25 + 4096 - (unsigned int)(v25 & 0xFFF);
  if ( v27 < v25 )
    return 3221225503LL;
  *(_QWORD *)(a2 + 24) = v27;
LABEL_25:
  v28 = *(_DWORD *)(a2 + 72) & 1;
  v29 = (unsigned __int64 *)a3;
  if ( !v28 )
    v29 = (unsigned __int64 *)a2;
  v30 = *(_QWORD *)(a2 + 8);
  if ( *v29 > v30 )
    return 3221225485LL;
  if ( v30 - *v29 + 1 < v27 )
    return (unsigned int)(v28 != 0) - 1073741801;
  v31 = v57;
  if ( v57 > v25 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225485LL;
  if ( v25 > *(_QWORD *)(a1 + 48) && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  v32 = *(_DWORD *)(a2 + 40);
  if ( (v32 & 0x2000) != 0 && (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
    return 3221225550LL;
  if ( (v32 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v32 & 0x20000000) != 0)
    || (*(_DWORD *)(a2 + 60) & 0x4000000) != 0
    && ((*(_DWORD *)(v13 + 56) & 0x420) != 0
     || (v32 & 0xFFFFDFFF) != 0
     || !v28
     || *a3 != (void *)((unsigned __int64)*a3 & 0xFFFFFFFFFFFFF000uLL)
     || !v56) )
  {
    return 3221225485LL;
  }
  v33 = *(_WORD *)(v14 + 12);
  v34 = *(_DWORD *)(a2 + 44);
  if ( v33 < 0 )
  {
    v34 = v34 & 0xFFFFF9FF | 0x200;
    *(_DWORD *)(a2 + 44) = v34;
    v33 = *(_WORD *)(v14 + 12);
  }
  if ( (v33 & 0x4000) != 0 )
  {
    v34 = v34 & 0xFFFFF9FF | 0x400;
    *(_DWORD *)(a2 + 44) = v34;
  }
  ProtectionMask = MiMakeProtectionMask(v34);
  LODWORD(v56) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v40 = *(_QWORD *)(a2 + 96);
  if ( (*(_DWORD *)(v40 + 2512) & 0x100) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 40) = v36 & 0xDFFFFFFF;
    }
    else if ( (ProtectionMask & 2) != 0 )
    {
      return MiArbitraryCodeBlocked(v40);
    }
  }
  if ( v40 != BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v66, v37);
    v54 = 1;
    v38 = 0;
  }
  v41 = *(_DWORD *)(v13 + 56);
  if ( (v41 & 0x400) != 0 )
  {
    v42 = MiMapViewOfPhysicalSection(a2, (_DWORD)a3, (_DWORD)a5, ProtectionMask, (__int64)v51);
  }
  else
  {
    if ( (v41 & 0x20) != 0 )
    {
      v52 = *a3;
      Src = v52;
      v46 = *(_QWORD *)(a2 + 24);
      v62 = v46;
      while ( 1 )
      {
        v47 = v58;
        v43 = MiMapViewOfImageSection(v13, a2, (unsigned __int64 *)&v52, v58, a1, a6, ProtectionMask, v38);
        LODWORD(v57) = v43;
        v48 = *(_DWORD *)(a2 + 40);
        if ( (v48 & 0x20000000) == 0 )
          break;
        *(_DWORD *)(a2 + 40) = v48 & 0xDFFFFFFF;
        v50 = MiMapViewOfImageSection(v13, a2, (unsigned __int64 *)&Src, v47, a1, a6, ProtectionMask, 0);
        if ( v43 < 0 )
        {
          v52 = Src;
          v43 = v50;
          break;
        }
        if ( v50 >= 0 )
        {
          memmove(v52, Src, v46);
          MiUnmapViewOfSection(BugCheckParameter1, (unsigned __int64)Src, 0, 0LL);
          break;
        }
        MiUnmapViewOfSection(BugCheckParameter1, (unsigned __int64)v52, 0, 0LL);
        v38 = 0;
      }
      if ( v43 >= 0 )
        *v59 = v52;
      goto LABEL_46;
    }
    v42 = MiMapViewOfDataSection(v13, a2, (_DWORD)a3, (_DWORD)a5, a1, a6, ProtectionMask, v31, (__int64)v51);
  }
  v43 = v42;
LABEL_46:
  if ( v54 )
    KiUnstackDetachProcess((__int64)v66, 0);
  return (unsigned int)v43;
}

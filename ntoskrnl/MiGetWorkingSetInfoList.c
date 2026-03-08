/*
 * XREFs of MiGetWorkingSetInfoList @ 0x1402A36A0
 * Callers:
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiGetPfnProtection @ 0x140229E5C (MiGetPfnProtection.c)
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MiInvalidPteConforms @ 0x140287530 (MiInvalidPteConforms.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiLockProtoPage @ 0x1402A4008 (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x1402A4110 (MiQueryPfn.c)
 *     MiIsPfnEnclave @ 0x1402C11E0 (MiIsPfnEnclave.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     MiIsPageOnBadList @ 0x14034B1D0 (MiIsPageOnBadList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiRotatedToFrameBuffer @ 0x140630A34 (MiRotatedToFrameBuffer.c)
 *     MiGetProtectionFromPte @ 0x140646910 (MiGetProtectionFromPte.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140646D84 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetValidAweProtection @ 0x1406484D8 (MiGetValidAweProtection.c)
 *     MiGetAweVadPageSize @ 0x140A3F0EC (MiGetAweVadPageSize.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(
        ULONG_PTR BugCheckParameter1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  ULONG_PTR v6; // r13
  unsigned int v7; // edi
  unsigned __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *MappedSystemVa; // r12
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // r8
  unsigned __int8 v14; // r13
  unsigned __int64 v15; // r15
  __int64 v16; // r10
  int v17; // ecx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r10
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned __int64 v25; // r13
  char v26; // dl
  __int64 v27; // rbx
  ULONG_PTR v28; // r12
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  ULONG_PTR v31; // r15
  int v32; // eax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // r9
  unsigned int v37; // ebx
  unsigned int v38; // eax
  __int64 v39; // r13
  __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  char v42; // r12
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned __int64 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // r10
  int PfnProtection; // eax
  char v51; // r11
  __int64 ProtoPteAddress; // rax
  bool v53; // zf
  unsigned __int64 v54; // rax
  unsigned int v55; // ebx
  PVOID v56; // r15
  __int64 v58; // r8
  ULONG_PTR v59; // r15
  __int64 v60; // r10
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // r10
  struct _MDL *Pool; // rax
  struct _MDL *v65; // r15
  char PreviousMode; // dl
  unsigned int v67; // eax
  __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  __int64 v70; // r10
  __int64 v71; // r13
  int v72; // ebx
  unsigned __int64 v73; // rsi
  int v74; // r8d
  bool v75; // cl
  unsigned __int64 v76; // r15
  char PfnPriority; // bl
  __int64 v78; // rsi
  __int64 v79; // rax
  unsigned __int64 v80; // r12
  int ValidAweProtection; // eax
  unsigned __int64 v82; // rsi
  unsigned __int64 v83; // rsi
  __int64 v84; // rcx
  char v85; // si
  char v86; // [rsp+30h] [rbp-1C8h]
  __int64 v87; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 valid; // [rsp+40h] [rbp-1B8h]
  __int64 v89; // [rsp+48h] [rbp-1B0h]
  unsigned __int64 v90; // [rsp+50h] [rbp-1A8h]
  _DWORD *BugCheckParameter2; // [rsp+58h] [rbp-1A0h]
  _BYTE *v92; // [rsp+60h] [rbp-198h]
  __int64 v93; // [rsp+70h] [rbp-188h]
  unsigned int v94; // [rsp+78h] [rbp-180h] BYREF
  unsigned __int64 v95; // [rsp+80h] [rbp-178h]
  __int64 v96; // [rsp+88h] [rbp-170h]
  __int64 v97; // [rsp+90h] [rbp-168h] BYREF
  __int64 v98; // [rsp+98h] [rbp-160h]
  _BYTE *v99; // [rsp+A0h] [rbp-158h]
  ULONG_PTR v100; // [rsp+A8h] [rbp-150h]
  unsigned __int64 v101; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v102; // [rsp+B8h] [rbp-140h] BYREF
  unsigned __int64 v103; // [rsp+C0h] [rbp-138h]
  PVOID P; // [rsp+C8h] [rbp-130h]
  unsigned __int64 v105; // [rsp+D0h] [rbp-128h]
  void *v106; // [rsp+D8h] [rbp-120h]
  ULONG_PTR v107; // [rsp+E0h] [rbp-118h]
  unsigned __int64 v108; // [rsp+E8h] [rbp-110h]
  unsigned __int64 v109; // [rsp+F0h] [rbp-108h]
  char v110[8]; // [rsp+F8h] [rbp-100h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v111; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE Src[128]; // [rsp+130h] [rbp-C8h] BYREF

  v106 = (void *)a3;
  v6 = BugCheckParameter1;
  v100 = BugCheckParameter1;
  v107 = BugCheckParameter1;
  v108 = a3;
  v97 = 0LL;
  v101 = 0LL;
  memset(&v111, 0, sizeof(v111));
  v7 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v8 = a4 >> 4;
  v90 = a4 >> 4;
  if ( !(a4 >> 4) )
    return 3221225476LL;
  if ( (a2 & 0x3FFFFFFC) != 0 || (a2 & 3) == 3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( v8 > 8 )
  {
    Pool = (struct _MDL *)MiAllocatePool(
                            64,
                            8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)),
                            0x20206D4Du);
    v65 = Pool;
    P = Pool;
    if ( Pool )
    {
      Pool->Next = 0LL;
      Pool->Size = 8 * ((((a3 & 0xFFF) + a4 + 4095) >> 12) + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = a3 & 0xFFF;
      Pool->ByteCount = a4;
      PreviousMode = CurrentThread->PreviousMode;
      MiProbeAndLockPages(Pool, PreviousMode != 0, 1);
      if ( (v65->MdlFlags & 5) != 0 )
        MappedSystemVa = v65->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v65, 0, MmCached, 0LL, 0, 0x40000010u);
      v99 = MappedSystemVa;
      v92 = MappedSystemVa;
      if ( MappedSystemVa )
      {
        v11 = 1LL;
        v6 = v100;
        goto LABEL_7;
      }
      MmUnlockPages(v65);
      ExFreePoolWithTag(v65, 0);
    }
    return 3221225626LL;
  }
  memmove(Src, (const void *)a3, 16 * v8);
  P = 0LL;
  MappedSystemVa = Src;
  v92 = Src;
  v99 = Src;
  v11 = 1LL;
LABEL_7:
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)v6 )
  {
    KiStackAttachProcess(v6);
    v11 = 1LL;
    v7 = 1;
  }
  v12 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = v6 + 1664;
  v87 = v6 + 1664;
  v14 = 17;
  v86 = 17;
  v15 = 0LL;
  valid = 0LL;
  v16 = 0LL;
  v89 = 0LL;
  v94 = 0;
  v17 = a2;
  while ( 1 )
  {
    v18 = 0LL;
    v98 = 0LL;
    v7 &= ~4u;
    v19 = *MappedSystemVa;
    v95 = v19;
    if ( v19 > 0x7FFFFFFEFFFFLL )
      goto LABEL_101;
    v20 = v19 >> 12;
    v103 = v19 >> 12;
    if ( !v12 )
      goto LABEL_238;
    if ( v20 < (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32))
      || v20 > (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
    {
      if ( v16 )
      {
        MiLockProtoPage(0LL);
        v89 = 0LL;
        v13 = v87;
      }
      if ( v14 != 17 )
      {
        if ( v15 )
        {
          MiUnlockPageTableInternal(v13, v15);
          v15 = 0LL;
          valid = 0LL;
        }
        MiUnlockWorkingSetShared(v87, v14);
        v86 = 17;
      }
      MiUnlockAndDereferenceVadShared((PVOID)v12);
      v12 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    v19 = v95;
    if ( !v12 )
    {
LABEL_238:
      v12 = MiObtainReferencedVadEx(v19, 2LL, &v94);
      BugCheckParameter2 = (_DWORD *)v12;
      if ( !v12 )
        break;
    }
    v21 = v95;
    v105 = v95 & 0xFFFFFFFFFFFFF000uLL;
    if ( ((v95 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
       || (v95 & 0xFFFFFFFFFFFFF000uLL) == qword_140C656B8 && qword_140C656B8)
      && (*(_DWORD *)(v100 + 2172) & 1) == 0 )
    {
      v7 |= 4u;
    }
    v22 = v7 & 0xFFFFFFEF;
    v7 = v7 & 0xFFFFFFEF | 0x10;
    if ( (*(_DWORD *)(v12 + 48) & 0x70) != 0x10 )
      v7 = v22;
    while ( 2 )
    {
      v7 &= ~2u;
      if ( (v7 & 0x10) == 0 )
      {
        if ( (v23 = *(_DWORD *)(v12 + 48), v24 = v23 & 0x200000, (v23 & 0x200000) != 0)
          && ((v67 = (v23 >> 19) & 3, (v23 & 0x800000) != 0) || v67 >= 2)
          && v67 >= 2
          || !(_DWORD)v24 && (*(_DWORD *)(v12 + 64) & 0x1000000) != 0
          || (*(_BYTE *)(v12 + 48) & 0x70) == 0x30 && (unsigned __int64)MiGetAweVadPageSize(v12, v24, v13, v11) >= 0x200 )
        {
          v7 |= 2u;
        }
      }
      if ( (v7 & 2) != 0 && v86 != 17 )
      {
        if ( v15 )
        {
          MiUnlockPageTableInternal(v87, v15);
          v15 = 0LL;
          valid = 0LL;
        }
        MiUnlockWorkingSetShared(v87, v86);
        v86 = 17;
        v21 = v95;
      }
      v25 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v109 = v25;
      v26 = v86;
      if ( v86 != 17 )
      {
        if ( (((_BYTE)v25 + 8) & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v87) || KeShouldYieldProcessor() )
        {
          if ( v15 )
          {
            MiUnlockPageTableInternal(v87, v15);
            v15 = 0LL;
            valid = 0LL;
          }
          MiUnlockWorkingSetShared(v87, v86);
          v26 = 17;
          v86 = 17;
        }
        else
        {
          v26 = v86;
        }
      }
      v27 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v93 = v27;
      while ( 1 )
      {
        if ( v26 == 17 )
          v86 = MiLockWorkingSetShared(v87);
        v28 = -1LL;
        v96 = -1LL;
        v18 = 0LL;
        v98 = 0LL;
        if ( v15 == v27 )
        {
          v29 = v25;
          v101 = v25;
        }
        else
        {
          if ( v15 )
            MiUnlockPageTableInternal(v87, v15);
          valid = MiLockLowestValidPageTable(v87, v25, &v101);
          v29 = v101;
        }
        v30 = MI_READ_PTE_LOCK_FREE(v29);
        v31 = v30;
        if ( !v30 )
        {
          if ( (v7 & 0x10) != 0 )
            goto LABEL_96;
          v32 = v7 & 2;
          if ( (v7 & 2) != 0 )
          {
            v11 = 1LL;
            goto LABEL_41;
          }
          goto LABEL_115;
        }
        v11 = 1LL;
        if ( (v30 & 1) != 0 && (v30 & 0x80u) != 0LL )
          break;
        if ( valid == v93 )
          goto LABEL_40;
        if ( !(unsigned int)MiWorkingSetInfoCheckPageTable(v87, v29, (unsigned int)&v97, a2, v86) )
        {
          v18 = v98;
          v11 = 1LL;
          goto LABEL_40;
        }
        v15 = 0LL;
        valid = 0LL;
LABEL_112:
        v27 = v93;
        v26 = v86;
      }
      v28 = (v30 >> 12) & 0xFFFFFFFFFFLL;
      v96 = v28;
      v13 = 0xFFFFFFFFLL;
      while ( v29 >= 0xFFFFF68000000000uLL && v29 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v29 = (__int64)(v29 << 25) >> 16;
        v13 = (unsigned int)(v13 + 1);
      }
      v68 = 1LL;
      v69 = v103;
      while ( (_DWORD)v13 )
      {
        v28 += v68 * (v69 & 0x1FF);
        v69 >>= 9;
        v68 <<= 9;
        v13 = (unsigned int)(v13 - 1);
      }
      v18 = 8388609LL;
      v98 = 8388609LL;
LABEL_40:
      v32 = v7 & 2;
LABEL_41:
      v33 = v96;
      if ( v96 != -1 )
        goto LABEL_49;
      if ( v32 )
      {
        v12 = (__int64)BugCheckParameter2;
        v15 = valid;
        v21 = v95;
        continue;
      }
      break;
    }
    v15 = valid;
    if ( valid != ((v95 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      MappedSystemVa = v92;
      v12 = (__int64)BugCheckParameter2;
LABEL_99:
      v16 = v89;
      v13 = v87;
      goto LABEL_100;
    }
    v34 = MI_READ_PTE_LOCK_FREE(v25);
    v35 = v34;
    v31 = v34;
    v102 = v34;
    v36 = 1LL;
    if ( (v34 & 1) != 0 )
    {
      v18 |= 1uLL;
      v37 = BugCheckParameter2[12];
      v38 = v7 & 0xFFFFFFF7;
      v7 |= 8u;
      if ( (v37 & 0x70) != 0x40 )
        v7 = v38;
      v28 = (v35 >> 12) & 0xFFFFFFFFFFLL;
      if ( (v7 & 0x18) != 0 )
      {
        v71 = 48 * v28;
        v105 = 48 * v28 - 0x220000000000LL;
        if ( v28 <= qword_140C65820
          && ((*(_QWORD *)(v71 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
          && ((*(_BYTE *)(48 * v28 - 0x220000000000LL + 35) & 0x40) != 0
           || (unsigned int)((__int64 (*)(void))MiIsPageOnBadList)()) )
        {
          v18 |= 0x80000000uLL;
        }
        if ( (v7 & 0x10) != 0 )
        {
          v72 = (v37 >> 7) & 0x1F;
          if ( (v36 & (v31 >> 4)) != 0 || (v31 & 8) == 0 )
          {
            if ( (v36 & (v31 >> 4)) != 0 )
              v72 |= 8u;
          }
          else
          {
            v72 |= 0x18u;
          }
          v73 = v18 & 0xFFFFFFFFFFC0FFFFuLL | ((unsigned __int64)(*(_DWORD *)(MiSearchNumaNodeTable(v28) + 8) & 0x3F) << 16) | 0x400001;
        }
        else if ( (unsigned int)MiRotatedToFrameBuffer(v109) )
        {
          v74 = v37 & 0xC00;
          v75 = (v37 & 0x380) != 0;
          v72 = (v31 & 0x800) != 0 ? 4 : 1;
          if ( v75 && v74 == 3072 )
          {
            v72 |= 0x18u;
          }
          else if ( v74 == 1024 )
          {
            v72 |= 8u;
          }
          v73 = ((unsigned int)v18 ^ (*(_DWORD *)(MiSearchNumaNodeTable(v28) + 8) << 16)) & 0x3F0000 ^ (unsigned __int64)v18;
        }
        else
        {
          v76 = v105;
          PfnPriority = MiGetPfnPriority(v105);
          v73 = v18 & 0xFFFFFFFFF8C0FFFFuLL | ((*(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v71 >> 4)) + 8) & 0x3F | ((unsigned __int64)(PfnPriority & 7) << 8)) << 16);
          v72 = (*(_DWORD *)(v76 + 16) >> 5) & 0x1F;
          if ( !_bittest64((const signed __int64 *)(v76 + 40), 0x28u) && *(__int64 *)(v76 + 8) > 0 )
          {
            v78 = v73 | 0x8000;
            LOBYTE(v79) = 7;
            if ( (*(_QWORD *)(v76 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v79 = *(_QWORD *)(v76 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v73 = v78 ^ ((unsigned __int8)v78 ^ (unsigned __int8)(2 * v79)) & 0xE;
            v72 = MmMakeProtectNotWriteCopy[v72];
          }
        }
        v18 = ((unsigned __int16)v73 ^ (unsigned __int16)(16 * MmProtectToValue[v72])) & 0x7FF0 ^ v73;
LABEL_96:
        v12 = (__int64)BugCheckParameter2;
LABEL_97:
        MappedSystemVa = v92;
        v15 = valid;
        goto LABEL_98;
      }
      v33 = v96;
LABEL_49:
      v39 = 48 * v28 - 0x220000000000LL;
      v40 = v39;
      v96 = v39;
      if ( _bittest64((const signed __int64 *)(v39 + 40), 0x28u) )
      {
        v80 = v28 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v33 != -1LL )
          v80 = v33;
        v40 = 48 * v80 - 0x220000000000LL;
        v96 = v40;
      }
      v41 = *(_QWORD *)(v40 + 40);
      v42 = MiGetPfnPriority(v40);
      v46 = v18 & 0xFFFFFFFFF8C07FFFuLL | HIWORD(v41) & 0x8000 | ((*(_DWORD *)(MiSearchNumaNodeTable(
                                                                                 0xAAAAAAAAAAAAAAABuLL
                                                                               * ((v43 - v44) >> 4))
                                                                             + 8) & 0x3F | ((unsigned __int64)(v42 & 7) << 8)) << 16);
      if ( (*(_BYTE *)(v39 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v39) )
        v46 |= 0x80000000uLL;
      v47 = *(_QWORD *)(v39 + 40);
      LOBYTE(v45) = (v47 & 0x10000000000LL) == 0;
      if ( ((unsigned __int8)v45 & ((v46 & 0x800000) == 0)) != 0 )
      {
        if ( (((unsigned __int64)v47 >> 60) & 7) != 1 )
        {
          if ( (MiGetWsleContents(v45, v95) & 0xF) == 8 )
            v46 |= 0x400000uLL;
          if ( *(__int64 *)(v39 + 40) < 0 )
          {
            PfnProtection = MiGetPfnProtection(v48, v49);
            v18 = v46 & 0xFFFFFFFFFFFF8001uLL | (2 * (v51 & 7 | (8LL * (MmProtectToValue[PfnProtection] & 0x7FF))));
            v12 = (__int64)BugCheckParameter2;
            if ( (v7 & 4) != 0 )
            {
              v18 |= 0x40000000uLL;
            }
            else if ( (BugCheckParameter2[12] & 0x200000) == 0 )
            {
              ProtoPteAddress = MiGetProtoPteAddress(BugCheckParameter2, v103, 0LL, v110);
              MappedSystemVa = v92;
              v15 = valid;
              v11 = 1LL;
              v13 = v87;
              v16 = v89;
              v53 = ProtoPteAddress == (*(_QWORD *)(v39 + 8) | 0x8000000000000000uLL);
              v54 = v90;
              v17 = a2;
              if ( v53 )
                v18 |= 0x40000000uLL;
              goto LABEL_61;
            }
            goto LABEL_97;
          }
          v18 = v46 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v39 + 16) >> 5) & 0x1F] & 0x7FF));
          v12 = (__int64)BugCheckParameter2;
          MappedSystemVa = v92;
          v15 = valid;
          v13 = v87;
          v16 = v89;
          v17 = a2;
          if ( (BugCheckParameter2[12] & 0x2200000) == 0x2200000 )
            v18 &= 0xFFFFFFF0FFFFFFFFuLL;
LABEL_101:
          v54 = v90;
          goto LABEL_61;
        }
        if ( v47 >= 0 )
        {
          v12 = (__int64)BugCheckParameter2;
          if ( (unsigned int)MiIsPfnEnclave(v39) )
            ValidAweProtection = (*(_DWORD *)(v39 + 16) >> 5) & 0x1F;
          else
            ValidAweProtection = MiGetValidAweProtection(BugCheckParameter2, v31);
          v82 = v46 ^ ((unsigned __int16)v46 ^ (unsigned __int16)(16 * MmProtectToValue[ValidAweProtection])) & 0x7FF0;
          if ( (BugCheckParameter2[12] & 0x2200000) == 0x2200000 )
            v82 &= 0xFFFFFFF0FFFFFFFFuLL;
          v18 = v82 | 0x400000;
          goto LABEL_97;
        }
      }
      v12 = (__int64)BugCheckParameter2;
      v83 = v46 ^ ((unsigned __int16)v46 ^ (unsigned __int16)(16
                                                            * MmProtectToValue[(unsigned int)MiGetProtectionFromPte(
                                                                                               (ULONG_PTR)BugCheckParameter2,
                                                                                               v31)])) & 0x7FF0;
      if ( (BugCheckParameter2[12] & 0x2200000) == 0x2200000 )
        v83 &= 0xFFFFFFF0FFFFFFFFuLL;
      v18 = v83 | 0x400000;
      v84 = v18;
      MappedSystemVa = v92;
      v15 = valid;
      v11 = 1LL;
      v13 = v87;
      v16 = v89;
      if ( *(__int64 *)(v96 + 40) < 0 )
      {
        v85 = 7;
        if ( (*(_QWORD *)(v96 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v85 = *(_BYTE *)(v96 + 24);
        v18 = v84 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v85 & 7 | 0x20000000LL));
      }
LABEL_100:
      v17 = a2;
      goto LABEL_101;
    }
    if ( (v34 & 0x400) != 0 )
    {
      v12 = (__int64)BugCheckParameter2;
      goto LABEL_85;
    }
    if ( (v34 & 0x800) != 0 )
    {
      v70 = MiLockTransitionLeafPageEx(v25);
      if ( v70 )
      {
        v62 = v70 + 0x220000000000LL;
        goto LABEL_107;
      }
      goto LABEL_111;
    }
    if ( (unsigned int)MiGetPagingFileOffset(&v102) )
      goto LABEL_182;
    if ( v35 )
      goto LABEL_96;
LABEL_115:
    v12 = (__int64)BugCheckParameter2;
    if ( (BugCheckParameter2[12] & 0x200000) != 0 && (v7 & 4) == 0 )
      goto LABEL_97;
LABEL_85:
    v58 = 0LL;
    if ( (v7 & 4) != 0 )
    {
      v58 = qword_140C656B0;
      if ( v105 == 2147352576 )
        v58 = qword_140C656A8;
LABEL_89:
      v59 = v58;
      goto LABEL_90;
    }
    if ( (*(_DWORD *)(v12 + 48) & 0x200000) != 0 )
    {
      if ( qword_140C657C0 )
      {
        if ( (v31 & 0x10) != 0 )
        {
LABEL_180:
          v31 &= ~0x10uLL;
          goto LABEL_181;
        }
        v31 &= ~qword_140C657C0;
      }
    }
    else
    {
      v58 = MiGetProtoPteAddress(v12, v103, 0LL, v110);
      if ( !v31 || (unsigned int)MiIsPrototypePteVadLookup(v31) )
        goto LABEL_89;
      if ( qword_140C657C0 )
      {
        if ( (v31 & 0x10) != 0 )
          goto LABEL_180;
        v31 &= ~qword_140C657C0;
      }
    }
LABEL_181:
    v59 = (__int64)v31 >> 16;
LABEL_90:
    if ( !v59 )
      goto LABEL_97;
    v18 |= 0x8000uLL;
    v98 = v18;
    if ( v59 == v58 )
    {
      v18 |= 0x40000000uLL;
      v98 = v18;
    }
    if ( ((v59 ^ v89) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( valid )
      {
        MiUnlockPageTableInternal(v87, valid);
        valid = 0LL;
      }
      v89 = MiLockProtoPage(v59);
LABEL_111:
      v15 = valid;
      goto LABEL_112;
    }
    v60 = MiLockLeafPage(v59, 0LL);
    v61 = *(_QWORD *)v59;
    v102 = *(_QWORD *)v59;
    if ( v60 )
    {
      v62 = v60 + 0x220000000000LL;
LABEL_107:
      MiQueryPfn(0xAAAAAAAAAAAAAAABuLL * (v62 >> 4), &v97);
      _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v18 = v98;
      goto LABEL_96;
    }
    if ( (v61 & 0x400) != 0 || (v61 & 0x800) != 0 || !MiInvalidPteConforms(v61) )
      goto LABEL_96;
    if ( (unsigned int)MiGetPagingFileOffset(&v102) )
    {
LABEL_182:
      v18 = v18 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      goto LABEL_96;
    }
    MappedSystemVa = v92;
    v15 = valid;
    v11 = 1LL;
    v54 = v90;
    v13 = v87;
    v16 = v89;
    v17 = a2;
    v53 = v61 == 0;
    v12 = (__int64)BugCheckParameter2;
    if ( v53 )
      v18 = 0LL;
LABEL_61:
    if ( (v17 & 0x40000000) != 0 )
    {
      if ( ((unsigned __int8)v18 & (unsigned __int8)v11) != 0 )
      {
        if ( (v18 & 0x40000000) != 0 )
          v18 = v18 & 0xFFFFFFFFF8C0FFF1uLL | 0xE;
      }
      else if ( (v18 & 0x40000000) != 0 )
      {
        v18 &= 0xFFFFFFFFF03FFFFFuLL;
      }
    }
    MappedSystemVa[1] = v18;
    MappedSystemVa += 2;
    v92 = MappedSystemVa;
    v99 = MappedSystemVa;
    v90 = v54 - v11;
    if ( v54 == v11 )
    {
      v55 = 0;
      goto LABEL_64;
    }
    v14 = v86;
  }
  v55 = v94;
  if ( v94 != -1073741558 )
  {
    v12 = 0LL;
LABEL_98:
    v11 = 1LL;
    goto LABEL_99;
  }
LABEL_64:
  if ( v86 != 17 )
  {
    if ( v15 )
      MiUnlockPageTableInternal(v87, v15);
    MiUnlockWorkingSetShared(v87, v86);
  }
  if ( v89 )
    MiLockProtoPage(0LL);
  if ( BugCheckParameter2 )
    MiUnlockAndDereferenceVadShared(BugCheckParameter2);
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess(&v111);
  v56 = P;
  if ( P )
  {
    MmUnlockPages((PMDL)P);
    ExFreePoolWithTag(v56, 0);
  }
  else
  {
    memmove(v106, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v55;
}

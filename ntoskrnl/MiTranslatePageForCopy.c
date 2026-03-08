/*
 * XREFs of MiTranslatePageForCopy @ 0x1402A1FD4
 * Callers:
 *     MmCopyMemory @ 0x1402A1CE0 (MmCopyMemory.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiSynchronizeSystemVa @ 0x1402228B0 (MiSynchronizeSystemVa.c)
 *     MiCheckVirtualAddress @ 0x140225600 (MiCheckVirtualAddress.c)
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiUnlockSystemVa @ 0x1402A2820 (MiUnlockSystemVa.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x1402A304C (MiObtainProtoReference.c)
 *     MiInitializePageFaultPacket @ 0x1402A346C (MiInitializePageFaultPacket.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     MiStandbyPageContentsIntact @ 0x14034B200 (MiStandbyPageContentsIntact.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiVaIsUltra @ 0x14036448C (MiVaIsUltra.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r15
  _KPROCESS *Process; // rbx
  unsigned int SystemRegionType; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // ecx
  char *SessionVm; // rax
  __int64 v18; // r8
  __int128 v19; // xmm0
  __int64 v20; // rbx
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // xmm1_8
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int16 v28; // ax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rbx
  unsigned __int64 valid; // rax
  __int16 v33; // r10
  __int16 v34; // dx
  __int16 v35; // r9
  char v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rax
  int v40; // r9d
  __int64 v41; // r14
  char v42; // al
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v44; // bl
  int v45; // r8d
  int v46; // edx
  __int64 v47; // rax
  unsigned __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rdi
  unsigned __int8 v54; // dl
  __int64 v55; // rcx
  int PagingFileOffset; // eax
  unsigned __int8 v57[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v58; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v59; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v60; // [rsp+40h] [rbp-C0h] BYREF
  int v61; // [rsp+48h] [rbp-B8h] BYREF
  int v62; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 *v65; // [rsp+60h] [rbp-A0h]
  _QWORD v66[18]; // [rsp+70h] [rbp-90h] BYREF

  v58 = 0;
  v63 = 0LL;
  v65 = a3;
  v60 = a4;
  memset(v66, 0, 0x88uLL);
  memset((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *a3 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0, a1, 0, 0, (__int64)v66);
  if ( (__int64)a1 >> 47 != -1 && (__int64)a1 >> 47 != 0
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFDE0000000000uLL && a1 < 48 * qword_140C65820 - 0x21FFFFFFFFD0LL
    || a1 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  v10 = v66[3];
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a1 < qword_140C6A1D8 || a1 > qword_140C66CF0 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    switch ( SystemRegionType )
    {
      case 8u:
        v16 = 0;
        break;
      case 1u:
        if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
          return 3221225477LL;
        SessionVm = (char *)MiGetSessionVm(v14, v13, SystemRegionType, v15);
LABEL_13:
        *(_DWORD *)(a2 + 4) |= 4u;
        if ( !(unsigned int)MiSynchronizeSystemVa((__int64)SessionVm, a1, v18, 0LL, a2) )
          return 3221225632LL;
        v19 = *(_OWORD *)(a2 + 24);
        v20 = *(int *)(a2 + 16);
        v66[9] = *(_QWORD *)(a2 + 40);
        *(_OWORD *)&v66[7] = v19;
        if ( (_DWORD)v20 )
        {
          v59 = MI_READ_PTE_LOCK_FREE(v66[v20 + 3]);
          v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v59) >> 12) & 0xFFFFFFFFFFLL;
          v26 = 1LL;
          v27 = v66[0] >> 12;
          do
          {
            v28 = v27;
            v27 >>= 9;
            v29 = v26 * (v28 & 0x1FF);
            v26 <<= 9;
            v9 += v29;
            LODWORD(v20) = v20 - 1;
          }
          while ( (_DWORD)v20 );
          if ( v9 <= qword_140C65820 )
          {
            v30 = 48 * v9;
            if ( _bittest64((const signed __int64 *)(48 * v9 - 0x21FFFFFFFFD8LL), 0x36u) )
            {
              v21 = 0;
              v61 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v61);
                while ( *(__int64 *)(v30 - 0x21FFFFFFFFE8LL) < 0 );
              }
              goto LABEL_20;
            }
          }
LABEL_38:
          v21 = -1073741503;
          goto LABEL_20;
        }
        goto LABEL_15;
      case 6u:
        v16 = 2;
        break;
      case 9u:
        v16 = 3;
        break;
      default:
        v16 = 1;
        if ( SystemRegionType != 3 && SystemRegionType != 12 )
          v16 = 5;
        break;
    }
    SessionVm = MiGetAnyMultiplexedVm(v16);
    goto LABEL_13;
  }
  v31 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v66[7] = v31;
  BYTE4(v66[8]) = MiLockWorkingSetShared(v31);
  valid = MiLockLowestValidPageTable(v31, v10, &v63);
  v66[9] = valid;
  if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    v21 = MI_READ_PTE_LOCK_FREE(v63) != 0 ? -1073741608 : -1073741819;
    goto LABEL_20;
  }
LABEL_15:
  v57[0] = 17;
  v21 = 0;
  v22 = MI_READ_PTE_LOCK_FREE(v10);
  v59 = v22;
  if ( (v22 & 1) != 0 )
  {
LABEL_16:
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v59) >> 12) & 0xFFFFFFFFFFLL;
    if ( v9 <= qword_140C65820 )
    {
      v23 = 48 * v9;
      if ( _bittest64((const signed __int64 *)(48 * v9 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        LODWORD(v60) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v60);
          while ( *(__int64 *)(v23 - 0x21FFFFFFFFE8LL) < 0 );
        }
        goto LABEL_20;
      }
    }
    goto LABEL_38;
  }
  v33 = v22;
  v34 = v22;
  v35 = v22;
  v36 = v22;
  v37 = v22;
  v38 = v22;
  while ( 1 )
  {
    if ( (v33 & 0x400) != 0 )
    {
      if ( (v36 & 2) != 0 )
      {
        v47 = v37;
        if ( qword_140C657C0 && (v37 & 0x10) == 0 )
          v47 = v37 & ~qword_140C657C0;
        if ( (v47 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          v37 &= ~0x400uLL;
        *a5 = v37 & 0xFFFFFFFFFFFFFFFDuLL;
        goto LABEL_77;
      }
      if ( qword_140C657C0 && (v38 & 0x10) == 0 )
        v38 &= ~qword_140C657C0;
      v48 = v38 >> 16;
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v22) )
        goto LABEL_85;
      v64 = 0LL;
      v62 = 0;
      v48 = MiCheckVirtualAddress(a1, &v62, &v64);
      if ( v64 )
      {
        LOBYTE(v49) = 17;
        MiUnlockVadTree(1LL, v49);
      }
      if ( v48 )
      {
LABEL_85:
        v50 = MiLockProtoPoolPage(v48, v57);
        if ( !v50 )
          goto LABEL_92;
        v51 = MiLockLeafPage(v48, 0LL);
        v52 = MI_READ_PTE_LOCK_FREE(v48);
        v59 = v52;
        if ( (v52 & 1) != 0 )
        {
          v53 = v51 + 0x220000000000LL;
LABEL_94:
          v9 = 0xAAAAAAAAAAAAAAABuLL * (v53 >> 4);
          *v60 = v50;
          goto LABEL_20;
        }
        if ( v52 )
        {
          if ( (v52 & 0x400) == 0 )
          {
            if ( (v52 & 0x800) == 0 )
            {
              PagingFileOffset = MiGetPagingFileOffset(&v59);
              v54 = v57[0];
              v55 = v50;
              if ( !PagingFileOffset )
              {
                MiUnlockProtoPoolPage(v50, v57[0]);
                goto LABEL_77;
              }
LABEL_102:
              MiUnlockProtoPoolPage(v55, v54);
              goto LABEL_92;
            }
            if ( (*(_BYTE *)(v51 + 34) & 0x20) != 0 )
            {
              MiObtainProtoReference(v50, 1LL);
              v45 = v50;
              v46 = v51;
LABEL_91:
              LOBYTE(v40) = v57[0];
              v58 = 1;
              MiWaitForCollidedFaultComplete((unsigned int)v66, v46, v45, v40, (__int64)&v58);
              goto LABEL_92;
            }
            if ( (unsigned int)MiStandbyPageContentsIntact(v51) )
            {
              v53 = v51 + 0x220000000000LL;
              goto LABEL_94;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v54 = v57[0];
          v55 = v50;
          goto LABEL_102;
        }
        MiUnlockProtoPoolPage(v50, v57[0]);
      }
LABEL_89:
      v21 = -1073741819;
      goto LABEL_20;
    }
    if ( (v34 & 0x3E0) == 0x300LL || (v34 & 0x3E0) == 0 )
      goto LABEL_89;
    if ( (v35 & 0x800) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(&v59) )
        goto LABEL_92;
LABEL_77:
      v21 = 273;
      goto LABEL_20;
    }
    v39 = MiLockTransitionLeafPageEx(v10);
    v41 = v39;
    if ( v39 )
      break;
    v22 = MI_READ_PTE_LOCK_FREE(v10);
    v59 = v22;
    v33 = v22;
    v34 = v22;
    v35 = v22;
    v36 = v22;
    v37 = v22;
    v38 = v22;
    if ( (v22 & 1) != 0 )
      goto LABEL_16;
  }
  v42 = *(_BYTE *)(v39 + 34);
  if ( (v42 & 0x20) != 0 )
  {
    if ( (v42 & 8) != 0 )
      goto LABEL_92;
    v45 = 0;
    v46 = v41;
    goto LABEL_91;
  }
  if ( (unsigned int)MiStandbyPageContentsIntact(v41) )
  {
    v9 = 0xAAAAAAAAAAAAAAABuLL * ((v41 + 0x220000000000LL) >> 4);
    goto LABEL_20;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    v44 = v57[0];
  else
    v44 = v57[0];
  __writecr8(v44);
LABEL_92:
  v21 = -1073741608;
LABEL_20:
  v24 = v66[9];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v66[7];
  *(_QWORD *)(a2 + 40) = v24;
  if ( v21 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v65 = v9;
  return (unsigned int)v21;
}

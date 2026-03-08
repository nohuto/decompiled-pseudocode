/*
 * XREFs of NtLockVirtualMemory @ 0x140344C50
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiLockPageAndSetDirty @ 0x1402110B8 (MiLockPageAndSetDirty.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiLockPageTablePage @ 0x14026A4D0 (MiLockPageTablePage.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiGetEffectivePagePriorityThread @ 0x14028A260 (MiGetEffectivePagePriorityThread.c)
 *     MiUpdatePfnPriority @ 0x14028D35C (MiUpdatePfnPriority.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableCharges @ 0x140345720 (MiUnlockPageTableCharges.c)
 *     MiGetNextPageTable @ 0x1403468E0 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 *     MiVadPagesTradable @ 0x1403481F0 (MiVadPagesTradable.c)
 *     MiUnlockVa @ 0x14034A190 (MiUnlockVa.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiLockUnlockCommon @ 0x1407D27F8 (MiLockUnlockCommon.c)
 *     MiUnlockVadRange @ 0x1407D73E8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtLockVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r12
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // r11
  __int64 Address; // r12
  _QWORD *v12; // r9
  unsigned __int64 i; // r10
  unsigned __int64 v14; // r14
  char *v15; // r15
  int v16; // r9d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // r9
  __int64 v22; // rdx
  char v23; // cl
  BOOL v24; // esi
  bool v25; // zf
  __int64 v26; // r10
  _QWORD *v27; // rcx
  _QWORD **v28; // rax
  _QWORD *j; // rcx
  unsigned __int64 v30; // rsi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r12
  int v34; // r13d
  unsigned int v35; // esi
  __int64 v36; // rcx
  _QWORD **v37; // rax
  _QWORD *k; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int8 v42; // [rsp+40h] [rbp-118h]
  BOOL v43; // [rsp+44h] [rbp-114h]
  int v44; // [rsp+44h] [rbp-114h]
  char v45; // [rsp+48h] [rbp-110h]
  unsigned __int64 v46; // [rsp+50h] [rbp-108h]
  unsigned __int64 v47; // [rsp+50h] [rbp-108h]
  unsigned __int64 v48; // [rsp+58h] [rbp-100h]
  PVOID Object; // [rsp+60h] [rbp-F8h] BYREF
  int v50; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v51; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v52; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-D8h]
  ULONG_PTR v54; // [rsp+88h] [rbp-D0h]
  PVOID P; // [rsp+90h] [rbp-C8h]
  int v56; // [rsp+98h] [rbp-C0h] BYREF
  int v57; // [rsp+9Ch] [rbp-BCh] BYREF
  unsigned __int64 v58; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v59; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v61; // [rsp+B8h] [rbp-A0h]
  __int64 v62; // [rsp+C0h] [rbp-98h]
  char *v63; // [rsp+C8h] [rbp-90h]
  __int64 v64; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  _QWORD *v67; // [rsp+E8h] [rbp-70h]
  unsigned __int64 *v68; // [rsp+F0h] [rbp-68h]
  $115DCDF994C6370D29323EAB0E0C9502 v69; // [rsp+F8h] [rbp-60h] BYREF

  v67 = a3;
  v68 = a2;
  memset(&v69, 0, sizeof(v69));
  v60 = 0LL;
  v59 = 0LL;
  Object = 0LL;
  v56 = 0;
  v4 = 0;
  v45 = 0;
  v50 = 0;
  result = MiLockUnlockCommon(BugCheckParameter1, (__int64)&v59, (__int64)&v60, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = v59;
  v7 = (v59 + v60 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v51 = v7;
  v8 = v59 & 0xFFFFFFFFFFFFF000uLL;
  v48 = v59 & 0xFFFFFFFFFFFFF000uLL;
  v52 = 0LL;
  BugCheckParameter2 = 0LL;
  P = MiAllocatePool(
        64,
        8
      * (((((v7 - (v59 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
       + ((((unsigned __int8)((v7 - (v59 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
        0x6B6C6D4Du);
  if ( !P )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return 3221225626LL;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v69);
    v4 = 2;
    v45 = 2;
    v50 = 2;
  }
  v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54 = v9;
  v58 = v8;
  v62 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MiLockVadRange(Object, v8, v7, 0LL);
  v61 = v10;
  if ( !v10 )
  {
    v35 = -1073741819;
    goto LABEL_84;
  }
  Address = (__int64)MiLocateAddress(v8);
  v12 = (_QWORD *)Address;
  for ( i = 0LL; i < v10; i = v26 + 1 )
  {
    if ( !(unsigned int)MiVadPagesTradable(v12) )
    {
      v35 = -1073741747;
      goto LABEL_84;
    }
    v27 = v12;
    v28 = (_QWORD **)v12[1];
    if ( v28 )
    {
      v12 = (_QWORD *)v12[1];
      for ( j = *v28; j; j = (_QWORD *)*j )
        v12 = j;
    }
    else
    {
      while ( 1 )
      {
        v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v12 || (_QWORD *)*v12 == v27 )
          break;
        v27 = v12;
      }
    }
  }
  v43 = MiVadPureReserve(Address);
  v14 = 0LL;
  v15 = (char *)Object + 1664;
  v63 = (char *)Object + 1664;
  v65 = *((_QWORD *)Object + 210);
LABEL_9:
  LOBYTE(v16) = MiLockWorkingSetShared((__int64)v15);
  v42 = v16;
LABEL_10:
  v17 = v48;
  v18 = v51;
  v19 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v17 > v18 )
    {
      if ( v14 )
      {
        MiUnlockPageTableInternal((__int64)v15, v14);
        LOBYTE(v16) = v42;
      }
      MiUnlockWorkingSetShared((__int64)v15, v16);
      MiUnlockVadRange(Object, v58, v61, 0LL);
      if ( (v4 & 2) != 0 )
        KiUnstackDetachProcess(&v69);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v30 = v59 & 0xFFFFFFFFFFFFF000uLL;
      *v67 = v51 - (v59 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      *v68 = v30;
      return (v4 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v17 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v36 = Address;
      v37 = *(_QWORD ***)(Address + 8);
      if ( v37 )
      {
        Address = *(_QWORD *)(Address + 8);
        for ( k = *v37; k; k = (_QWORD *)*k )
          Address = (__int64)k;
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v36 )
            break;
          v36 = Address;
        }
      }
      v43 = MiVadPureReserve(Address);
    }
    v46 = ((v17 >> 18) & 0x3FFFFFF8) + v19;
    if ( v14 != v46 )
    {
      if ( v14 )
      {
        MiUnlockPageTableInternal((__int64)v15, v14);
        v14 = 0LL;
        LOBYTE(v16) = v42;
      }
      if ( v43 )
      {
        NextPageTable = MiGetNextPageTable(v9, v62, 0, v16, 0, (__int64)&v56);
        if ( NextPageTable )
          v14 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v9 )
        {
          v44 = -1073741819;
          goto LABEL_60;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v9, 0LL, (*(_DWORD *)(Address + 48) >> 12) & 0x7F, v16, 0);
        v14 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_DWORD *)v9 & 1) == 0 )
    {
      MiUnlockPageTableInternal((__int64)v15, v14);
      v14 = 0LL;
      MiUnlockWorkingSetShared((__int64)v15, v42);
      goto LABEL_9;
    }
    v64 = MI_READ_PTE_LOCK_FREE(v9);
    v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v64) >> 12) & 0xFFFFFFFFFFLL)
        - 0x220000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v48) & 0xF) == 8 )
    {
      v4 |= 1u;
      v45 = v4;
      v50 = v4;
      goto LABEL_31;
    }
    if ( *((_QWORD *)v15 + 14) <= (unsigned __int64)(*(_QWORD *)(v65 + 32) + 6LL) )
    {
      v44 = -1073741663;
      goto LABEL_60;
    }
    if ( *(__int64 *)(v20 + 40) < 0 && !(unsigned int)MiLockPageTablePage(v20, 1) )
      goto LABEL_104;
    BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v46) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      break;
    v47 = 0LL;
    if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
    {
      v22 = *(_QWORD *)(v20 + 40);
      if ( v22 < 0 )
      {
        v47 = *(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v22 >> 43) & 0x3FF));
        if ( !(unsigned int)MiChargeCommit(v47, 1uLL, 0LL) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
          v44 = -1073741523;
          goto LABEL_60;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v47 + 17840), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset((__int64 *)(v20 + 16)) )
    {
      MiLockPageAndSetDirty(v20, 1);
    }
    LOBYTE(v21) = 8;
    if ( !(unsigned int)MiSetVaAgeList((__int64)v15, v48, 1u, v21) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2);
      v40 = *(_QWORD *)(v20 + 40);
      if ( v40 < 0 )
      {
        MiUnlockPageTableCharges(48 * (v40 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v47, 1LL, v41);
      }
      goto LABEL_104;
    }
    MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    v57 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v57);
      while ( *(__int64 *)(v20 + 24) < 0 );
    }
    MiUpdatePfnPriority(v20);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _bittestandset64((signed __int64 *)P, v52);
LABEL_31:
    BugCheckParameter2 = ++v52;
    v23 = v54 + 8;
    v54 += 8LL;
    v17 = v48 + 4096;
    v48 = v17;
    v24 = 0;
    v18 = v51;
    if ( v17 <= v51 && (v23 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(v15) || (unsigned int)MiPageTableLockIsContended(v15, v14) )
      {
LABEL_34:
        MiUnlockPageTableInternal((__int64)v15, v14);
        MiUnlockWorkingSetShared((__int64)v15, v42);
        v14 = 0LL;
        MiLockWorkingSetShared((__int64)v15);
        v9 = v54;
        LOBYTE(v16) = v42;
        goto LABEL_10;
      }
      v24 = KeShouldYieldProcessor() != 0;
      v18 = v51;
      v17 = v48;
    }
    v25 = !v24;
    v9 = v54;
    LOBYTE(v16) = v42;
    v19 = 0xFFFFF6FB40000000uLL;
    if ( !v25 )
      goto LABEL_34;
  }
  v39 = *(_QWORD *)(v20 + 40);
  if ( v39 < 0 )
    MiUnlockPageTableCharges(48 * (v39 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
LABEL_104:
  v44 = -1073741670;
LABEL_60:
  if ( v14 )
  {
    MiUnlockPageTableInternal((__int64)v15, v14);
    v14 = 0LL;
  }
  v32 = v52;
  v33 = v58 + (v52 << 12);
  while ( 2 )
  {
    if ( v32 )
    {
      --v32;
      v33 -= 4096LL;
      if ( _bittest64((const signed __int64 *)P, v32) == 1 )
      {
        if ( v14 != ((v33 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v14 )
            MiUnlockPageTableInternal((__int64)v15, v14);
          v14 = ((v33 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockPageTableInternal((__int64)v15, v14, 0);
        }
        MiUnlockVa(v15, v33);
      }
      v34 = 0;
      if ( (v32 & 0xF) != 0 )
        goto LABEL_68;
      if ( !(unsigned int)MiWorkingSetIsContended(v15) && (!v14 || !(unsigned int)MiPageTableLockIsContended(v15, v14)) )
      {
        if ( KeShouldYieldProcessor() )
          v34 = 1;
LABEL_68:
        if ( !v34 )
          continue;
      }
      if ( v14 )
      {
        MiUnlockPageTableInternal((__int64)v15, v14);
        v14 = 0LL;
      }
      MiUnlockWorkingSetShared((__int64)v15, v42);
      MiLockWorkingSetShared((__int64)v15);
      continue;
    }
    break;
  }
  LOBYTE(v4) = v45;
  v35 = v44;
  if ( v14 )
    MiUnlockPageTableInternal((__int64)v15, v14);
  MiUnlockWorkingSetShared((__int64)v15, v42);
  v10 = v61;
LABEL_84:
  MiUnlockVadRange(Object, v58, v10, 0LL);
  if ( (v4 & 2) != 0 )
    KiUnstackDetachProcess(&v69);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  return v35;
}

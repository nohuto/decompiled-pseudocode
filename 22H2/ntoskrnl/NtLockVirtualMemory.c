/*
 * XREFs of NtLockVirtualMemory @ 0x140339070
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140207580 (KeUnstackDetachProcess.c)
 *     MiLockPageTablePage @ 0x140209DB0 (MiLockPageTablePage.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14021B950 (MiVadPureReserve.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     KeStackAttachProcess @ 0x14025B970 (KeStackAttachProcess.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x14028DEA0 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x1402900EC (MiLockPageAndSetDirty.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     MiVadPagesTradable @ 0x140314D20 (MiVadPagesTradable.c)
 *     MiUnlockVa @ 0x140338B10 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x140338DA8 (MiUnlockPageTableCharges.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x140339DB4 (MiUpdatePfnPriority.c)
 *     MiGetEffectivePagePriorityThread @ 0x140339E94 (MiGetEffectivePagePriorityThread.c)
 *     MiLockWsle @ 0x140339EC0 (MiLockWsle.c)
 *     MiGetPagingFileOffset @ 0x14033A2B0 (MiGetPagingFileOffset.c)
 *     MiLockPageTable @ 0x140381AAC (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x1403B6600 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiShouldYieldProcessor @ 0x140536918 (MiShouldYieldProcessor.c)
 *     MiLockPageAtDpc @ 0x14054F85C (MiLockPageAtDpc.c)
 *     MiLockVadRange @ 0x14061E040 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140620550 (MiUnlockVadRange.c)
 *     MiLockUnlockCommon @ 0x14067DB7C (MiLockUnlockCommon.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r10
  NTSTATUS v11; // edi
  __int64 Address; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD **v17; // rax
  _QWORD *i; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  unsigned __int64 v22; // r14
  char *v23; // r15
  unsigned __int8 v24; // r9
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD **v28; // rax
  _QWORD *j; // rcx
  unsigned __int64 NextPageTable; // rax
  ULONG_PTR v31; // r14
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // r8
  _DWORD *v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rcx
  ULONG_PTR v49; // r13
  unsigned __int64 v50; // rdi
  __int64 v51; // rax
  int v52; // r13d
  __int64 v53; // rdx
  __int64 v54; // r8
  _DWORD *v55; // r9
  unsigned int EffectivePagePriorityThread; // edi
  __int64 v57; // r9
  char v58; // al
  BOOL v59; // r13d
  bool v60; // zf
  __int64 v61; // rdx
  __int64 v62; // r8
  _DWORD *v63; // r9
  unsigned __int64 v64; // rax
  unsigned __int8 v65; // [rsp+40h] [rbp-118h]
  int v66; // [rsp+44h] [rbp-114h]
  NTSTATUS v67; // [rsp+44h] [rbp-114h]
  unsigned __int64 v68; // [rsp+48h] [rbp-110h]
  _QWORD *v69; // [rsp+50h] [rbp-108h]
  unsigned __int64 v70; // [rsp+50h] [rbp-108h]
  char v71; // [rsp+58h] [rbp-100h]
  unsigned __int64 v72; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  int v75; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-D8h]
  PVOID P; // [rsp+88h] [rbp-D0h]
  int v78; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v79; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v80; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-A8h]
  __int64 v83; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v84; // [rsp+C0h] [rbp-98h]
  __int64 v85; // [rsp+C8h] [rbp-90h]
  char *v86; // [rsp+D0h] [rbp-88h]
  __int64 v87; // [rsp+D8h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  PSIZE_T v89; // [rsp+E8h] [rbp-70h]
  PVOID *v90; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v89 = RegionSize;
  v90 = BaseAddress;
  memset(&ApcState, 0, sizeof(ApcState));
  v83 = 0LL;
  v81 = 0LL;
  Object = 0LL;
  v78 = 0;
  v5 = 0;
  v71 = 0;
  v75 = 0;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v81, (__int64)&v83, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = v81;
  v8 = (v81 + v83 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v79 = v8;
  v9 = v81 & 0xFFFFFFFFFFFFF000uLL;
  v72 = v81 & 0xFFFFFFFFFFFFF000uLL;
  v68 = 0LL;
  P = MiAllocatePool(
        64,
        8
      * (((((v8 - (v81 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
       + ((((unsigned __int8)((v8 - (v81 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
        0x6B6C6D4Du);
  if ( !P )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v5 = 2;
    v71 = 2;
    v75 = 2;
  }
  BugCheckParameter1 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v80 = v9;
  v85 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MiLockVadRange(Object, v9, v8, 0LL);
  v84 = v10;
  if ( !v10 )
  {
    v11 = -1073741819;
LABEL_90:
    MiUnlockVadRange(Object, v80, v10, 0LL);
    if ( (v5 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v11;
  }
  Address = (__int64)MiLocateAddress(v9);
  v69 = (_QWORD *)Address;
  v13 = (_QWORD *)Address;
  if ( v14 )
  {
    while ( (unsigned int)MiVadPagesTradable((__int64)v13) )
    {
      v16 = v13;
      v17 = (_QWORD **)v13[1];
      if ( v17 )
      {
        v13 = (_QWORD *)v13[1];
        for ( i = *v17; i; i = (_QWORD *)*i )
          v13 = i;
      }
      else
      {
        while ( 1 )
        {
          v13 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v13 || (_QWORD *)*v13 == v16 )
            break;
          v16 = v13;
        }
      }
      if ( v15 + 1 >= v10 )
        goto LABEL_18;
    }
    v11 = -1073741747;
    goto LABEL_90;
  }
LABEL_18:
  v66 = MiVadPureReserve(Address);
  v22 = 0LL;
  v23 = (char *)Object + 1664;
  v86 = (char *)Object + 1664;
  v82 = *((_QWORD *)Object + 210);
LABEL_19:
  v65 = MiLockWorkingSetShared((__int64)v23, v19, v20, v21);
  v24 = v65;
LABEL_20:
  v25 = v72;
  v26 = 0xFFFFF6FB40000000uLL;
  while ( v25 <= v8 )
  {
    if ( v25 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v27 = Address;
      v28 = *(_QWORD ***)(Address + 8);
      if ( v28 )
      {
        Address = *(_QWORD *)(Address + 8);
        v69 = v28;
        for ( j = *v28; j; j = (_QWORD *)*j )
        {
          Address = (__int64)j;
          v69 = j;
        }
      }
      else
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v69 = (_QWORD *)Address;
        if ( Address )
        {
          do
          {
            if ( *(_QWORD *)Address == v27 )
              break;
            v27 = Address;
            Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( Address );
          v69 = (_QWORD *)Address;
        }
      }
      v66 = MiVadPureReserve(Address);
    }
    BugCheckParameter2 = ((v25 >> 18) & 0x3FFFFFF8) + v26;
    if ( v22 != BugCheckParameter2 )
    {
      if ( v22 )
      {
        MiUnlockPageTable(v23, v22);
        v22 = 0LL;
        v24 = v65;
      }
      if ( v66 )
      {
        NextPageTable = MiGetNextPageTable(BugCheckParameter1, v85, 0LL, v24, 0, &v78);
        if ( NextPageTable )
          v22 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != BugCheckParameter1 )
        {
          v11 = -1073741819;
          goto LABEL_64;
        }
      }
      else
      {
        v31 = BugCheckParameter1;
        MiMakeSystemAddressValid(BugCheckParameter1, 0LL, (*(_DWORD *)(Address + 48) >> 12) & 0x3F, v24, 0);
        v22 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)BugCheckParameter1 & 1) == 0 )
    {
      MiUnlockPageTable(v23, v22);
      v22 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v23, v65);
      v19 = v72;
      goto LABEL_19;
    }
    v87 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
    v32 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v87) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v72) & 0xF) == 8 )
    {
      v5 |= 1u;
      v71 = v5;
      v75 = v5;
    }
    else
    {
      if ( *((_QWORD *)v23 + 14) <= (unsigned __int64)(*(_QWORD *)(v82 + 32) + 6LL) )
      {
        v11 = -1073741663;
        goto LABEL_64;
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v32) && !(unsigned int)MiLockPageTablePage(v33, 1) )
        goto LABEL_63;
      BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(BugCheckParameter2) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL;
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v32) )
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1uLL, v34, v35);
        goto LABEL_63;
      }
      v36 = 0LL;
      if ( (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v32) )
        {
          v36 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v32 + 40) >> 39) & 0x3FFLL));
          if ( !(unsigned int)MiChargeCommit(v36, 1uLL, 0) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2, 2uLL, v39, v40);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1uLL, v41, v42);
            v11 = -1073741523;
            goto LABEL_64;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v36 + 7616), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v32 + 16) )
      {
        MiLockPageAndSetDirty(v32, 1LL, v37, v38);
      }
      if ( !(unsigned int)MiLockWsle(v23, v72) )
      {
        MiUnlockPageTableCharges(BugCheckParameter2, 2uLL, v44, v45);
        if ( (unsigned int)MI_PFN_IS_PROTO(v32) )
        {
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1uLL, v46, v47);
          if ( (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
            MiReturnCommit(v36, 1LL);
        }
LABEL_63:
        v11 = -1073741670;
LABEL_64:
        v67 = v11;
        if ( v22 )
        {
          MiUnlockPageTable(v23, v22);
          v22 = 0LL;
        }
        if ( !v68 )
        {
LABEL_87:
          if ( v22 )
            MiUnlockPageTable(v23, v22);
          MiUnlockWorkingSetShared((__int64)v23, v65);
          v10 = v84;
          goto LABEL_90;
        }
        v48 = v68 - 1;
        v70 = v68 - 1;
        v49 = (v68 << 12) + v80 - 4096;
        BugCheckParameter2 = v49;
        v50 = v68;
        while ( 2 )
        {
          if ( _bittest64((const signed __int64 *)P, v48) == 1 )
          {
            v51 = ((v49 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v82 = v51;
            if ( v22 != v51 )
            {
              if ( v22 )
              {
                MiUnlockPageTable(v23, v22);
                v51 = v82;
              }
              v22 = v51;
              MiLockPageTable(v23, v51);
            }
            MiUnlockVa((__int64)v23, v49);
            v48 = v70;
          }
          v52 = 0;
          if ( (v48 & 0xF) != 0 )
          {
LABEL_81:
            if ( v52 == 1 )
              goto LABEL_82;
          }
          else
          {
            if ( !MiWorkingSetIsContended((__int64)v23)
              && (!v22 || !(unsigned int)MiPageTableLockIsContended((__int64)v23, v22)) )
            {
              if ( (unsigned int)MiShouldYieldProcessor() )
                v52 = 1;
              v48 = v70;
              goto LABEL_81;
            }
LABEL_82:
            if ( v22 )
            {
              MiUnlockPageTable(v23, v22);
              v22 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v23, v65);
            MiLockWorkingSetShared((__int64)v23, v53, v54, v55);
            v48 = v70;
          }
          v49 = BugCheckParameter2 - 4096;
          BugCheckParameter2 -= 4096LL;
          v70 = --v48;
          if ( !--v50 )
          {
            LOBYTE(v5) = v71;
            v11 = v67;
            goto LABEL_87;
          }
          continue;
        }
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v43);
      MiLockPageAtDpc(v32);
      MiUpdatePfnPriority(v32, EffectivePagePriorityThread, 0LL, v57);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v68);
      Address = (__int64)v69;
    }
    ++v68;
    v58 = BugCheckParameter1 + 8;
    BugCheckParameter1 += 8LL;
    v25 = v72 + 4096;
    v72 = v25;
    v59 = 0;
    if ( v25 <= v79 && (v58 & 0x78) == 0 )
    {
      if ( MiWorkingSetIsContended((__int64)v23) || (unsigned int)MiPageTableLockIsContended((__int64)v23, v22) )
      {
LABEL_101:
        MiUnlockPageTable(v23, v22);
        MiUnlockWorkingSetShared((__int64)v23, v65);
        v22 = 0LL;
        MiLockWorkingSetShared((__int64)v23, v61, v62, v63);
        v8 = v79;
        v24 = v65;
        goto LABEL_20;
      }
      v59 = MiShouldYieldProcessor() != 0;
      v25 = v72;
    }
    v60 = !v59;
    v8 = v79;
    v24 = v65;
    v26 = 0xFFFFF6FB40000000uLL;
    if ( !v60 )
      goto LABEL_101;
  }
  if ( v22 )
  {
    MiUnlockPageTable(v23, v22);
    v24 = v65;
  }
  MiUnlockWorkingSetShared((__int64)v23, v24);
  MiUnlockVadRange(Object, v80, v84, 0LL);
  if ( (v5 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v64 = v81 & 0xFFFFFFFFFFFFF000uLL;
  *v89 = v8 - (v81 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v90 = (PVOID)v64;
  return (v5 & 1) != 0 ? 0x40000019 : 0;
}

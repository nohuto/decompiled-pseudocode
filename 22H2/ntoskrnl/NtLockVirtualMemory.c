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

__int64 __fastcall NtLockVirtualMemory(HANDLE Handle, unsigned __int64 *a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r10
  unsigned int v10; // edi
  __int64 Address; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD **v16; // rax
  _QWORD *i; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  unsigned __int64 v21; // r14
  char *v22; // r15
  unsigned __int8 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  _QWORD **v27; // rax
  _QWORD *j; // rcx
  unsigned __int64 NextPageTable; // rax
  ULONG_PTR v30; // r14
  __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  __int64 v36; // r8
  _DWORD *v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rcx
  ULONG_PTR v48; // r13
  unsigned __int64 v49; // rdi
  __int64 v50; // rax
  int v51; // r13d
  __int64 v52; // rdx
  __int64 v53; // r8
  _DWORD *v54; // r9
  unsigned int EffectivePagePriorityThread; // edi
  __int64 v56; // r9
  char v57; // al
  BOOL v58; // r13d
  bool v59; // zf
  __int64 v60; // rdx
  __int64 v61; // r8
  _DWORD *v62; // r9
  unsigned __int64 v63; // rax
  unsigned __int8 v64; // [rsp+40h] [rbp-118h]
  int v65; // [rsp+44h] [rbp-114h]
  unsigned int v66; // [rsp+44h] [rbp-114h]
  unsigned __int64 v67; // [rsp+48h] [rbp-110h]
  _QWORD *v68; // [rsp+50h] [rbp-108h]
  unsigned __int64 v69; // [rsp+50h] [rbp-108h]
  char v70; // [rsp+58h] [rbp-100h]
  unsigned __int64 v71; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  int v74; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-D8h]
  PVOID P; // [rsp+88h] [rbp-D0h]
  int v77; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v78; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v79; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v80; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-A8h]
  __int64 v82; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v83; // [rsp+C0h] [rbp-98h]
  __int64 v84; // [rsp+C8h] [rbp-90h]
  char *v85; // [rsp+D0h] [rbp-88h]
  __int64 v86; // [rsp+D8h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  _QWORD *v88; // [rsp+E8h] [rbp-70h]
  unsigned __int64 *v89; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v88 = a3;
  v89 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v82 = 0LL;
  v80 = 0LL;
  Object = 0LL;
  v77 = 0;
  v4 = 0;
  v70 = 0;
  v74 = 0;
  result = MiLockUnlockCommon(Handle, (__int64)&v80, (__int64)&v82, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = v80;
  v7 = (v80 + v82 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v78 = v7;
  v8 = v80 & 0xFFFFFFFFFFFFF000uLL;
  v71 = v80 & 0xFFFFFFFFFFFFF000uLL;
  v67 = 0LL;
  P = MiAllocatePool(
        64,
        8
      * (((((v7 - (v80 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
       + ((((unsigned __int8)((v7 - (v80 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
        0x6B6C6D4Du);
  if ( !P )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return 3221225626LL;
  }
  if ( Handle != (HANDLE)-1LL )
  {
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v4 = 2;
    v70 = 2;
    v74 = 2;
  }
  BugCheckParameter1 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v79 = v8;
  v84 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = MiLockVadRange(Object, v8, v7, 0LL);
  v83 = v9;
  if ( !v9 )
  {
    v10 = -1073741819;
LABEL_90:
    MiUnlockVadRange(Object, v79, v9, 0LL);
    if ( (v4 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v10;
  }
  Address = (__int64)MiLocateAddress(v8);
  v68 = (_QWORD *)Address;
  v12 = (_QWORD *)Address;
  if ( v13 )
  {
    while ( (unsigned int)MiVadPagesTradable((__int64)v12) )
    {
      v15 = v12;
      v16 = (_QWORD **)v12[1];
      if ( v16 )
      {
        v12 = (_QWORD *)v12[1];
        for ( i = *v16; i; i = (_QWORD *)*i )
          v12 = i;
      }
      else
      {
        while ( 1 )
        {
          v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v12 || (_QWORD *)*v12 == v15 )
            break;
          v15 = v12;
        }
      }
      if ( v14 + 1 >= v9 )
        goto LABEL_18;
    }
    v10 = -1073741747;
    goto LABEL_90;
  }
LABEL_18:
  v65 = MiVadPureReserve(Address);
  v21 = 0LL;
  v22 = (char *)Object + 1664;
  v85 = (char *)Object + 1664;
  v81 = *((_QWORD *)Object + 210);
LABEL_19:
  v64 = MiLockWorkingSetShared((__int64)v22, v18, v19, v20);
  v23 = v64;
LABEL_20:
  v24 = v71;
  v25 = 0xFFFFF6FB40000000uLL;
  while ( v24 <= v7 )
  {
    if ( v24 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v26 = Address;
      v27 = *(_QWORD ***)(Address + 8);
      if ( v27 )
      {
        Address = *(_QWORD *)(Address + 8);
        v68 = v27;
        for ( j = *v27; j; j = (_QWORD *)*j )
        {
          Address = (__int64)j;
          v68 = j;
        }
      }
      else
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v68 = (_QWORD *)Address;
        if ( Address )
        {
          do
          {
            if ( *(_QWORD *)Address == v26 )
              break;
            v26 = Address;
            Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( Address );
          v68 = (_QWORD *)Address;
        }
      }
      v65 = MiVadPureReserve(Address);
    }
    BugCheckParameter2 = ((v24 >> 18) & 0x3FFFFFF8) + v25;
    if ( v21 != BugCheckParameter2 )
    {
      if ( v21 )
      {
        MiUnlockPageTable(v22, v21);
        v21 = 0LL;
        v23 = v64;
      }
      if ( v65 )
      {
        NextPageTable = MiGetNextPageTable(BugCheckParameter1, v84, 0LL, v23, 0, &v77);
        if ( NextPageTable )
          v21 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != BugCheckParameter1 )
        {
          v10 = -1073741819;
          goto LABEL_64;
        }
      }
      else
      {
        v30 = BugCheckParameter1;
        MiMakeSystemAddressValid(BugCheckParameter1, 0LL, (*(_DWORD *)(Address + 48) >> 12) & 0x3F, v23, 0);
        v21 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)BugCheckParameter1 & 1) == 0 )
    {
      MiUnlockPageTable(v22, v21);
      v21 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v22, v64);
      v18 = v71;
      goto LABEL_19;
    }
    v86 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
    v31 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v86) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v71) & 0xF) == 8 )
    {
      v4 |= 1u;
      v70 = v4;
      v74 = v4;
    }
    else
    {
      if ( *((_QWORD *)v22 + 14) <= (unsigned __int64)(*(_QWORD *)(v81 + 32) + 6LL) )
      {
        v10 = -1073741663;
        goto LABEL_64;
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v31) && !(unsigned int)MiLockPageTablePage(v32, 1) )
        goto LABEL_63;
      BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(BugCheckParameter2) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL;
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v31) )
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1uLL, v33, v34);
        goto LABEL_63;
      }
      v35 = 0LL;
      if ( (*(_DWORD *)(v31 + 16) & 0x400LL) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v31) )
        {
          v35 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v31 + 40) >> 39) & 0x3FFLL));
          if ( !(unsigned int)MiChargeCommit(v35, 1uLL, 0) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2, 2uLL, v38, v39);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1uLL, v40, v41);
            v10 = -1073741523;
            goto LABEL_64;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v35 + 7616), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v31 + 16) )
      {
        MiLockPageAndSetDirty(v31, 1LL, v36, v37);
      }
      if ( !(unsigned int)MiLockWsle(v22, v71) )
      {
        MiUnlockPageTableCharges(BugCheckParameter2, 2uLL, v43, v44);
        if ( (unsigned int)MI_PFN_IS_PROTO(v31) )
        {
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1uLL, v45, v46);
          if ( (*(_DWORD *)(v31 + 16) & 0x400LL) != 0 )
            MiReturnCommit(v35, 1LL);
        }
LABEL_63:
        v10 = -1073741670;
LABEL_64:
        v66 = v10;
        if ( v21 )
        {
          MiUnlockPageTable(v22, v21);
          v21 = 0LL;
        }
        if ( !v67 )
        {
LABEL_87:
          if ( v21 )
            MiUnlockPageTable(v22, v21);
          MiUnlockWorkingSetShared((__int64)v22, v64);
          v9 = v83;
          goto LABEL_90;
        }
        v47 = v67 - 1;
        v69 = v67 - 1;
        v48 = (v67 << 12) + v79 - 4096;
        BugCheckParameter2 = v48;
        v49 = v67;
        while ( 2 )
        {
          if ( _bittest64((const signed __int64 *)P, v47) == 1 )
          {
            v50 = ((v48 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v81 = v50;
            if ( v21 != v50 )
            {
              if ( v21 )
              {
                MiUnlockPageTable(v22, v21);
                v50 = v81;
              }
              v21 = v50;
              MiLockPageTable(v22, v50);
            }
            MiUnlockVa((__int64)v22, v48);
            v47 = v69;
          }
          v51 = 0;
          if ( (v47 & 0xF) != 0 )
          {
LABEL_81:
            if ( v51 == 1 )
              goto LABEL_82;
          }
          else
          {
            if ( !MiWorkingSetIsContended((__int64)v22)
              && (!v21 || !(unsigned int)MiPageTableLockIsContended((__int64)v22, v21)) )
            {
              if ( (unsigned int)MiShouldYieldProcessor() )
                v51 = 1;
              v47 = v69;
              goto LABEL_81;
            }
LABEL_82:
            if ( v21 )
            {
              MiUnlockPageTable(v22, v21);
              v21 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v22, v64);
            MiLockWorkingSetShared((__int64)v22, v52, v53, v54);
            v47 = v69;
          }
          v48 = BugCheckParameter2 - 4096;
          BugCheckParameter2 -= 4096LL;
          v69 = --v47;
          if ( !--v49 )
          {
            LOBYTE(v4) = v70;
            v10 = v66;
            goto LABEL_87;
          }
          continue;
        }
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v42);
      MiLockPageAtDpc(v31);
      MiUpdatePfnPriority(v31, EffectivePagePriorityThread, 0LL, v56);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v67);
      Address = (__int64)v68;
    }
    ++v67;
    v57 = BugCheckParameter1 + 8;
    BugCheckParameter1 += 8LL;
    v24 = v71 + 4096;
    v71 = v24;
    v58 = 0;
    if ( v24 <= v78 && (v57 & 0x78) == 0 )
    {
      if ( MiWorkingSetIsContended((__int64)v22) || (unsigned int)MiPageTableLockIsContended((__int64)v22, v21) )
      {
LABEL_101:
        MiUnlockPageTable(v22, v21);
        MiUnlockWorkingSetShared((__int64)v22, v64);
        v21 = 0LL;
        MiLockWorkingSetShared((__int64)v22, v60, v61, v62);
        v7 = v78;
        v23 = v64;
        goto LABEL_20;
      }
      v58 = MiShouldYieldProcessor() != 0;
      v24 = v71;
    }
    v59 = !v58;
    v7 = v78;
    v23 = v64;
    v25 = 0xFFFFF6FB40000000uLL;
    if ( !v59 )
      goto LABEL_101;
  }
  if ( v21 )
  {
    MiUnlockPageTable(v22, v21);
    v23 = v64;
  }
  MiUnlockWorkingSetShared((__int64)v22, v23);
  MiUnlockVadRange(Object, v79, v83, 0LL);
  if ( (v4 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v63 = v80 & 0xFFFFFFFFFFFFF000uLL;
  *v88 = v7 - (v80 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v89 = v63;
  return (v4 & 1) != 0 ? 0x40000019 : 0;
}

__int64 __fastcall MiValidFault(__int64 a1, signed __int64 a2)
{
  ULONG_PTR v2; // r11
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // rsi
  __int64 v5; // r12
  volatile signed __int64 *v6; // r12
  _KPROCESS *Process; // r14
  ULONG_PTR v8; // r13
  signed __int64 v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned int v15; // r10d
  ULONG_PTR v16; // r14
  int v17; // edx
  __int64 v18; // r9
  signed __int64 v19; // rcx
  __int64 v20; // rbx
  int v22; // eax
  __int64 v23; // r8
  _BYTE *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  ULONG_PTR v27; // rsi
  __int64 **Address; // rax
  __int64 v29; // rdx
  __int64 **v30; // rdi
  int v31; // edx
  _BYTE *v32; // r14
  _BYTE *v33; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  signed __int64 v41; // [rsp+88h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp+18h]
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp+20h]

  v41 = a2;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL;
  BugCheckParameter1 = *(_QWORD *)a1;
  BugCheckParameter3 = v3;
  v6 = (volatile signed __int64 *)(v5 - 0x98000000000LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
LABEL_2:
    v9 = v41;
    if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (v41 & 0x80u) != 0LL )
    {
      if ( (v3 & 1) != 0 )
      {
        v33 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 || *v33 == 3 || *v33 == 6 )
          return (unsigned int)-1073741819;
LABEL_94:
        KeBugCheckEx(0x50u, v2, v4, v3, 8uLL);
      }
      if ( !(unsigned __int8)KeInvalidAccessAllowed(v3, 0LL) )
      {
        v2 = BugCheckParameter1;
        v3 = BugCheckParameter3;
        goto LABEL_94;
      }
      return (unsigned int)-1073741819;
    }
    v10 = 0;
    if ( (v41 & 4) == 0 && v2 <= 0x7FFFFFFEFFFFLL )
      return (unsigned int)-1073741819;
    if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0
      && v3
      && v2 < 0xFFFF800000000000uLL
      && (v3 & 1) == 0
      && !KeIsUserVaAccessAllowed(v3) )
    {
      if ( !(unsigned __int8)KeInvalidAccessAllowed(v23, 0LL) )
        KeBugCheckEx(0x50u, BugCheckParameter1, v4, BugCheckParameter3, 0xFuLL);
      v2 = BugCheckParameter1;
    }
    if ( (v4 & 2) != 0 )
    {
      if ( (v9 & 0x200) == 0 )
      {
        if ( (v9 & 0x800) == 0 )
          return (unsigned int)-1073741819;
        if ( v9 >= 0
          && (v9 & 0x42) == 0
          && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0
          && v2 < 0xFFFF800000000000uLL )
        {
          CurrentThread = KeGetCurrentThread();
          if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
          {
            if ( (BYTE1(CurrentThread[1].Queue) & 0x10) == 0 )
              return (unsigned int)-1073739997;
          }
          else if ( (BYTE1(CurrentThread[1].Queue) & 0x20) == 0 )
          {
            v9 = v41;
            v10 = MiKernelWriteToExecutableMemory(a1, v41, Process);
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            goto LABEL_9;
          }
          v9 = v41;
        }
LABEL_9:
        v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v41) >> 12) & 0xFFFFFFFFFFLL;
        if ( v11 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * v11 - 0x21FFFFFFFFD8LL), 0x36u) )
        {
          v12 = 48 * v11 - 0x220000000000LL;
          v13 = *(_QWORD *)(v12 + 16);
          v14 = v12 + 16;
          if ( (unsigned __int64)(v12 + 16) >= 0xFFFFF6FB7DBED000uLL
            && v14 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v13 & 1) != 0
              && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v36 = *((_QWORD *)&Flink->Flink + ((v14 >> 3) & 0x1FF));
                if ( (v36 & 0x20) != 0 )
                  v13 |= 0x20uLL;
                if ( (v36 & 0x42) != 0 )
                  v13 |= 0x42uLL;
              }
            }
            v9 = v41;
          }
          if ( (v13 & 1) == 0
            && (!v13 || (!qword_140C657C0 || (qword_140C657C0 & v13) != 0) && (v13 & 0x400) == 0)
            && (v13 & 4) != 0 )
          {
            MiLockPageAndSetDirty(v12, 1);
          }
          if ( *(__int64 *)(v12 + 40) < 0 && (*(_DWORD *)v14 & 0x400LL) != 0 )
            MiCheckAndUpdateIoAttribution(v12);
        }
        v2 = BugCheckParameter1;
        goto LABEL_21;
      }
      v22 = MiCopyOnWrite(v2);
      v10 = v22;
      if ( v22 < 0 )
      {
        MiSetFaultPacketDirectives(a1, (unsigned int)v22);
        return v10;
      }
      v10 = 274;
LABEL_40:
      v16 = BugCheckParameter3;
      goto LABEL_33;
    }
    if ( (v4 & 0x10) != 0 )
    {
      if ( v9 < 0 )
      {
        if ( !(unsigned int)MiCanGrantExecute(Process, v2) )
          return (unsigned int)-1073741819;
        v37 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v41) >> 12) & 0xFFFFFFFFFFLL;
        if ( v37 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v37 - 0x21FFFFFFFFD8LL), 0x36u) )
          return (unsigned int)-1073741819;
        v38 = v9 & 0x7FFFFFFFFFFFFFFFLL;
        if ( (MiFlags & 0x300) != 0 )
          v38 |= 0x20uLL;
        MiWriteValidPteNewProtection(v6, v38);
        if ( (MiFlags & 0x300) == 0 )
          KeFlushSingleTb(BugCheckParameter1, 1u, 0);
        goto LABEL_40;
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0 )
      {
        MiCheckSystemNxFault(a1, v9, 5LL);
        v2 = BugCheckParameter1;
      }
    }
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 && ((MiFlags & 0x1000000) == 0 || (v9 & 0x42) != 0x40) )
      return (unsigned int)-1073741819;
LABEL_21:
    v15 = 0;
    v16 = BugCheckParameter3;
    v17 = 0;
    v18 = 0LL;
    v19 = v9;
    if ( (v9 & 0x20) != 0 )
    {
      if ( (!v8 || *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) != 5) && (MiFlags & 0x300) == 0 )
        v17 = 1;
    }
    else
    {
      v19 = v9 | 0x20;
      v18 = 1LL;
    }
    if ( (*(_QWORD *)(a1 + 8) & 2) != 0 )
    {
      if ( (v19 & 0x42) == 0 )
      {
        if ( (MiFlags & 0x300) != 0 )
        {
LABEL_28:
          v19 |= 0x42uLL;
          goto LABEL_29;
        }
LABEL_80:
        v17 = 1;
        goto LABEL_28;
      }
      if ( (v19 & 0x42) == 0x40 )
        goto LABEL_80;
    }
    if ( !(_DWORD)v18 )
    {
LABEL_32:
      if ( v17 && (MiFlags & 0x100) == 0 )
      {
        v20 = a1;
        if ( (MiFlags & 0x200) == 0 )
        {
          v39 = *(_QWORD *)(a1 + 56);
          if ( v39 )
            v15 = MiTbFlushType(v39);
          KeFlushSingleTb(v2, v15, 0);
        }
        goto LABEL_34;
      }
LABEL_33:
      v20 = a1;
LABEL_34:
      if ( v8 )
      {
        v32 = (_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *v32 == 5 )
          MiValidVirtualizationFault(v20, v32, v6, v18);
      }
      return v10;
    }
LABEL_29:
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( v9 != _InterlockedCompareExchange64(v6, v19, v9) )
      goto LABEL_33;
    goto LABEL_32;
  }
  v24 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePrefetchPriority(v24, v2, 0LL);
    return 0LL;
  }
  else
  {
    if ( *v24 != 3 )
      goto LABEL_2;
    v25 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v41) >> 12) & 0xFFFFFFFFFFLL;
    if ( v25 <= qword_140C65820 )
    {
      v26 = 6 * v25;
      if ( _bittest64((const signed __int64 *)(48 * v25 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        MiLockVadTree(1LL);
        v27 = BugCheckParameter1;
        Address = MiLocateAddress(BugCheckParameter1);
        LOBYTE(v29) = 17;
        v30 = Address;
        MiUnlockVadTree(1LL, v29);
        if ( v30 )
        {
          v31 = *((_DWORD *)v30 + 12);
          if ( ((_BYTE)v30[6] & 0x70) != 0x30
            && (v31 & 0x70) != 0x10
            && (v31 & 0x70) != 0x50
            && ((v31 & 0x200000) == 0 || (v31 & 0x800000) == 0 && (v31 & 0x180000u) < 0x100000)
            && ((v31 & 0x70) != 0x40 || !(unsigned int)MiRotatedToFrameBuffer(v6)) )
          {
            MiProcessWsInSwapFault(*(_QWORD *)(a1 + 56), 8 * v26 - 0x220000000000LL, v27, 0LL);
          }
        }
      }
    }
    return 0LL;
  }
}

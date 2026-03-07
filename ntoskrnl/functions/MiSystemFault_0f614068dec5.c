__int64 __fastcall MiSystemFault(_QWORD *a1)
{
  __int64 v2; // rsi
  int v3; // eax
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 SchedulerAssist; // r9
  _BYTE *v8; // rdx
  struct _KTHREAD *CurrentThread; // r14
  int v10; // eax
  ULONG_PTR v11; // r12
  __int64 v12; // r11
  __int64 v13; // r15
  _BYTE *v14; // r14
  __int16 v15; // ax
  bool v16; // cl
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  char v19; // r13
  __int64 v20; // r8
  char *SessionVm; // r12
  int v22; // r14d
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // xmm1_8
  unsigned __int64 v26; // r15
  ULONG_PTR v27; // rbx
  ULONG_PTR v28; // r14
  __int64 v29; // r15
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  char v35; // al
  KIRQL v36; // al
  _QWORD *v37; // r15
  unsigned __int64 v38; // r13
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // r10
  __int64 v42; // rax
  __int64 v43; // xmm1_8
  unsigned __int64 v44; // rax
  int v45; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  int v48; // eax
  bool v49; // zf
  __int64 v50; // r8
  unsigned __int8 v51; // al
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v53; // rax
  ULONG_PTR v54; // rdx
  ULONG_PTR v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  _BYTE *v58; // rax
  __int64 v59; // rcx
  _BYTE *v60; // rax
  __int64 v61; // rcx
  _BYTE *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  _BYTE *v65; // rax
  unsigned __int8 v66; // [rsp+30h] [rbp-69h]
  int v67; // [rsp+34h] [rbp-65h] BYREF
  __int64 v68; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v69[16]; // [rsp+40h] [rbp-59h] BYREF

  v2 = 0LL;
  v68 = 0LL;
  v67 = 0;
  memset(v69, 0, sizeof(v69));
  v3 = *((_DWORD *)a1 + 20);
  if ( (v3 & 0x20) != 0 )
    return 3221225477LL;
  if ( (v3 & 0x10) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  v4 = *a1;
  v5 = *a1;
  v6 = 0xFFFFF68000000000uLL;
  SchedulerAssist = 0xFFFFF6FFFFFFFFFFuLL;
  if ( *a1 >= 0xFFFFF68000000000uLL )
  {
    while ( v5 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v5 = (__int64)(v5 << 25) >> 16;
      if ( v5 < 0xFFFFF68000000000uLL )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( v4 < 0xFFFFF68000000000uLL )
      goto LABEL_5;
  }
  if ( v4 <= 0xFFFFF6FFFFFFFFFFuLL && v5 >= qword_140C6A1D8 && v5 <= qword_140C66CF0 )
    a1[1] |= 2uLL;
LABEL_5:
  v66 = 0;
  v8 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1[2] & 1) != 0 && (*v8 == 7 || *v8 == 8) )
  {
    if ( v4 < 0xFFFFF68000000000uLL
      || v4 > 0xFFFFF6FFFFFFFFFFuLL
      || v5 > 0x7FFFFFFEFFFFLL && (v5 < qword_140C6A1D8 || v5 > qword_140C66CF0) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( v5 < 0xFFFF800000000000uLL
    || v5 >= qword_140C66CE8
    && v5 < qword_140C66CE8 + MiHyperSpaceSize(v4, v8, 0xFFFFF68000000000uLL, 0xFFFFF6FFFFFFFFFFuLL) )
  {
    return 192LL;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v10 & 0x400) != 0
    || (v10 & 0x100) != 0 && (unsigned int)MiTransientPageListWriter(CurrentThread, *a1, v6, SchedulerAssist) )
  {
    return 3221225477LL;
  }
  v11 = *a1;
  if ( dword_140C66EC4 )
  {
    v36 = ExAcquireSpinLockShared(&dword_140C66EC0);
    v37 = (_QWORD *)qword_140C66EC8;
    v38 = v36;
    if ( qword_140C66EC8 )
    {
      do
      {
        if ( (unsigned __int64)CurrentThread > v37[3] )
        {
          v37 = (_QWORD *)v37[1];
        }
        else
        {
          if ( (unsigned __int64)CurrentThread >= v37[3] )
            break;
          v37 = (_QWORD *)*v37;
        }
      }
      while ( v37 );
      if ( v37 && v37[5] != ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v37 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66EC0);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v38 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = (_BYTE *)(-1LL << ((unsigned __int8)v38 + 1));
        SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
        v48 = ~(unsigned __int16)v8;
        v49 = (v48 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
        v6 = (unsigned int)v48 & *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = v6;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v38);
    if ( v37 )
      return 3221225477LL;
  }
  v12 = a1[2];
  v13 = v12 & 1;
  v14 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v12 & 1) != 0 )
  {
    if ( *v14 != 1 )
    {
      v18 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *v14 != 3 && *v14 != 6 )
        goto LABEL_19;
    }
    goto LABEL_97;
  }
  if ( !v12 )
    goto LABEL_87;
  v15 = *(_WORD *)(v12 + 368);
  v16 = 0;
  if ( v15 != 16 )
  {
    if ( v15 == 51 )
    {
      v8 = (_BYTE *)qword_140D1F370;
      goto LABEL_17;
    }
LABEL_87:
    v18 = (unsigned __int64)v14;
LABEL_19:
    v19 = 0;
    v14 = (_BYTE *)v18;
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(v12 + 376) & 0x200) == 0
    && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v12 + 384), v6, SchedulerAssist)
     || (unsigned int)KiRspInIstStack(2LL, v8, v50, SchedulerAssist)) )
  {
    goto LABEL_87;
  }
  v8 = &ExpInterlockedPopEntrySListFault;
  v17 = *(_QWORD *)(v12 + 360);
  if ( KiDynamicTraceEnabled && v17 >= qword_140D1F2A8 && v17 < qword_140D1F2B0 )
  {
    v51 = KeGetCurrentIrql();
    v16 = v51 == 15;
  }
  else
  {
    v16 = 0;
  }
LABEL_17:
  if ( *(_BYTE **)(v12 + 360) != v8 )
  {
    v18 = (unsigned __int64)v14;
    if ( !v16 )
      goto LABEL_19;
  }
LABEL_97:
  v19 = 1;
LABEL_20:
  HIDWORD(v69[0]) = 1;
  v20 = byte_140C6A058[((v5 >> 39) & 0x1FF) - 256];
  if ( (a1[10] & 8) != 0 )
  {
    if ( (_DWORD)v20 != 6 )
      return 3221225477LL;
    goto LABEL_27;
  }
  if ( (!v13 || *v14 != 1) && !v19 )
    HIDWORD(v69[0]) = 3;
  if ( (_DWORD)v20 == 8 )
  {
    SessionVm = (char *)&unk_140C6F480;
  }
  else if ( (_DWORD)v20 == 1 )
  {
    SessionVm = (char *)MiGetSessionVm(byte_140C6A058, v8, v20, SchedulerAssist);
    if ( !SessionVm )
      goto LABEL_155;
    v66 = 1;
  }
  else
  {
    if ( (_DWORD)v20 == 6 )
    {
LABEL_27:
      SessionVm = (char *)&unk_140C69900;
      goto LABEL_28;
    }
    if ( (_DWORD)v20 == 12 )
    {
      SessionVm = (char *)&unk_140C697C0;
    }
    else
    {
      if ( (_DWORD)v20 == 14 )
      {
        if ( !v13 || *v14 != 4 && *v14 != 1 )
        {
LABEL_155:
          if ( (v69[0] & 0x200000000LL) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 2uLL);
          return 3221225477LL;
        }
        v39 = 4;
      }
      else
      {
        if ( (_DWORD)v20 != 9 )
          goto LABEL_155;
        v39 = 3;
      }
      SessionVm = MiGetAnyMultiplexedVm(v39);
    }
  }
LABEL_28:
  if ( !(unsigned int)MiSynchronizeSystemVa((_DWORD)SessionVm, *a1, v20, 0, (__int64)v69) )
    goto LABEL_155;
  v22 = BYTE4(v69[0]) & 2;
  if ( (v69[0] & 0x200000000LL) == 0
    && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
    && !(unsigned int)MiIsWorkingSetTrimThread()
    && (unsigned int)MiGetSystemRegionType(v5) == 1
    || (v23 = MiCheckSystemPageTables(a1), v23 == 2) )
  {
    MiUnlockSystemVa(v69);
    goto LABEL_155;
  }
  if ( v23 == 1 )
  {
    MiUnlockSystemVa(v69);
    return 0LL;
  }
  v25 = v69[5];
  *(_OWORD *)(a1 + 7) = *(_OWORD *)&v69[3];
  a1[9] = v25;
  v26 = a1[3];
  v27 = *(_QWORD *)v26;
  if ( v26 >= 0xFFFFF6FB7DBED000uLL
    && v26 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v27 & 1) == 0 )
      goto LABEL_34;
    if ( (v27 & 0x20) == 0 || (v27 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v53 = *((_QWORD *)&Flink->Flink + ((v26 >> 3) & 0x1FF));
        if ( (v53 & 0x20) != 0 )
          v27 |= 0x20uLL;
        if ( (v53 & 0x42) != 0 )
          v27 |= 0x42uLL;
      }
    }
  }
  if ( (v27 & 1) == 0 )
  {
LABEL_34:
    if ( *a1 >= 0xFFFFF68000000000uLL && *a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( !v19 )
      {
        v55 = a1[2];
        if ( (v55 & 1) == 0 || *(_BYTE *)(v55 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          KeBugCheckEx(0x50u, *a1, a1[1], v55, 9uLL);
        goto LABEL_67;
      }
      goto LABEL_188;
    }
    if ( (v27 & 0x400) != 0 )
    {
      if ( (v27 & 2) != 0 )
      {
        v42 = a1[2];
        if ( (v42 & 1) == 0 || *(_BYTE *)(v42 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        {
          LODWORD(v2) = MiResolveDemandZeroFault(a1, a1[3], 0LL, 0LL);
          v43 = a1[9];
          *(_OWORD *)&v69[3] = *(_OWORD *)(a1 + 7);
          v69[5] = v43;
        }
        goto LABEL_67;
      }
      v31 = v27;
      if ( qword_140C657C0 && (v27 & 0x10) == 0 )
        v31 = v27 & ~qword_140C657C0;
      v24 = v66;
      v2 = v31 >> 16;
      if ( v66 && (unsigned int)MiIsPrototypePteVadLookup(v27) )
      {
        v56 = MiCheckVirtualAddress(v41, &v67, &v68);
        v2 = v56;
        if ( !v56 )
        {
          v57 = a1[2];
          v58 = (_BYTE *)(v57 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( (v57 & 1) != 0 )
          {
            if ( *v58 == 1 || *v58 == 3 || *v58 == 6 )
              goto LABEL_188;
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v57, 0LL) )
          {
            goto LABEL_188;
          }
          if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          {
            MiUnlockSystemVa(v69);
            return 3489660934LL;
          }
          goto LABEL_188;
        }
        v24 = v66;
      }
      v28 = v27 >> 5;
      goto LABEL_41;
    }
    v28 = v27 >> 5;
    v29 = (v27 >> 5) & 0x1F;
    if ( ((v27 >> 5) & 0x1F) == 0 && (v27 & 0x800) == 0 )
    {
      if ( (a1[10] & 8) == 0 )
      {
        v59 = a1[2];
        v60 = (_BYTE *)(v59 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v59 & 1) != 0 )
        {
          if ( *v60 == 1 || *v60 == 3 || *v60 == 6 )
            goto LABEL_188;
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(v59, 0LL) )
        {
          goto LABEL_188;
        }
        if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0LL);
      }
LABEL_188:
      LODWORD(v2) = -1073741819;
      goto LABEL_67;
    }
    if ( v29 != 24 )
    {
      if ( v29 != 31 || (v40 = a1[2], (v40 & 1) != 0) && *(_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
LABEL_40:
        v24 = v66;
LABEL_41:
        if ( (a1[1] & 2) == 0 || v2 || (_BYTE)v24 || (v28 & 4) != 0 )
        {
          a1[12] = v2;
          return 3221225494LL;
        }
        if ( (a1[10] & 8) != 0 )
          goto LABEL_188;
        v64 = a1[2];
        v65 = (_BYTE *)(v64 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v64 & 1) != 0 )
        {
          if ( *v65 == 1 || *v65 == 3 || *v65 == 6 )
            goto LABEL_188;
LABEL_221:
          if ( !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0xBEu, *a1, v27, a1[2], 0xEuLL);
          goto LABEL_188;
        }
        if ( !(unsigned __int8)KeInvalidAccessAllowed(v64, 0LL) )
          goto LABEL_221;
        goto LABEL_188;
      }
    }
    if ( (a1[10] & 8) == 0 )
    {
      v61 = a1[2];
      v62 = (_BYTE *)(v61 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (v61 & 1) != 0 )
      {
        if ( *v62 == 1 || *v62 == 3 || *v62 == 6 )
          goto LABEL_207;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(v61, 0LL) )
      {
        goto LABEL_207;
      }
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 1uLL);
    }
LABEL_207:
    if ( v29 == 24 )
      goto LABEL_188;
    v63 = a1[2];
    if ( (v63 & 1) == 0 || *(_BYTE *)(v63 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
      goto LABEL_188;
    goto LABEL_40;
  }
  if ( (v27 & 0x80u) != 0LL )
  {
    v54 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v54 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v22 )
        KeBugCheckEx(0x50u, v54, a1[1], a1[2], 8uLL);
      goto LABEL_188;
    }
  }
  v32 = a1[2];
  if ( (v32 & 1) != 0 )
  {
    v44 = v32 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v44 == 1 )
    {
      MiUpdatePfnForPrefetchByPte(a1[3], *(_DWORD *)(v44 + 80) & 7, 0LL);
      goto LABEL_67;
    }
  }
  if ( (a1[1] & 2) == 0 )
  {
    MiCheckSystemNxFault(a1, v27, 2LL);
    goto LABEL_66;
  }
  if ( (v27 & 0x800) != 0 )
  {
LABEL_66:
    MiNoFaultFound((_DWORD)a1, v26, *a1, a1[2], 1, v27);
LABEL_67:
    v33 = v69[3];
    if ( v69[3] )
    {
      v34 = v69[5];
      if ( v69[5] )
      {
        if ( WORD1(v69[4]) )
        {
          MiEmptyDeferredWorkingSetEntries(&v69[3], v69[5], v24);
          v34 = v69[5];
        }
        MiUnlockPageTableInternal(v33, v34);
        v35 = BYTE5(v69[4]) | 2;
      }
      else
      {
        v35 = BYTE5(v69[4]);
      }
      if ( (v35 & 1) != 0 )
        MiUnlockWorkingSetExclusive(v33, BYTE4(v69[4]));
      else
        MiUnlockWorkingSetShared(v33, BYTE4(v69[4]));
    }
    return (unsigned int)v2;
  }
  if ( (v27 & 0x200) == 0 && (a1[10] & 8) == 0 )
  {
    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
      KeBugCheckEx(0xBEu, *a1, v27, a1[2], 0xBuLL);
    goto LABEL_188;
  }
  v45 = MiCopyOnWrite(*a1);
  MiUnlockSystemVa(v69);
  if ( v45 < 0 )
    MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v45);
  return 0LL;
}

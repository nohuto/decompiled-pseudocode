__int64 __fastcall NtGetWriteWatch(
        void *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        volatile void *Address,
        _QWORD *a6,
        unsigned __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _BYTE *Pool; // r8
  int v19; // ebx
  _KPROCESS *v20; // r14
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  unsigned __int64 VadMandatoryPageSize; // rax
  int v27; // r8d
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // r14
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // r9
  unsigned __int64 i; // r10
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  unsigned __int64 j; // rdi
  unsigned __int64 v46; // r14
  int v47; // r15d
  struct _LIST_ENTRY *v48; // rcx
  bool v49; // zf
  __int64 v50; // rdx
  NTSTATUS v51; // esi
  _BYTE *v52; // rdi
  __int64 v53; // rbx
  unsigned __int64 v54; // rax
  __int64 v55; // r11
  unsigned __int64 *v56; // r14
  __int64 v57; // rcx
  __int64 *v58; // rax
  unsigned __int64 v59; // r14
  __int64 v60; // rcx
  unsigned __int64 v61; // r15
  unsigned int v62; // r15d
  char v63; // al
  struct _LIST_ENTRY *Flink; // r8
  __int64 v65; // rax
  unsigned __int8 v66; // [rsp+40h] [rbp-9E8h]
  unsigned __int64 v67; // [rsp+48h] [rbp-9E0h]
  unsigned __int64 v68; // [rsp+50h] [rbp-9D8h] BYREF
  unsigned __int64 v69; // [rsp+58h] [rbp-9D0h]
  int v70; // [rsp+60h] [rbp-9C8h]
  unsigned __int64 LockedVadEvent; // [rsp+68h] [rbp-9C0h]
  unsigned __int64 *v72; // [rsp+70h] [rbp-9B8h]
  void *Src; // [rsp+78h] [rbp-9B0h]
  unsigned int v74; // [rsp+80h] [rbp-9A8h] BYREF
  __int64 v75; // [rsp+88h] [rbp-9A0h]
  unsigned __int64 v76; // [rsp+90h] [rbp-998h]
  __int64 *v77; // [rsp+98h] [rbp-990h]
  PVOID Object; // [rsp+A0h] [rbp-988h] BYREF
  unsigned __int64 v79; // [rsp+A8h] [rbp-980h]
  unsigned __int64 v80; // [rsp+B0h] [rbp-978h]
  unsigned __int64 v81; // [rsp+B8h] [rbp-970h]
  __int64 v82; // [rsp+C0h] [rbp-968h]
  PVOID P; // [rsp+C8h] [rbp-960h]
  HANDLE Handle; // [rsp+D0h] [rbp-958h]
  void *v85; // [rsp+D8h] [rbp-950h]
  _QWORD *v86; // [rsp+E0h] [rbp-948h]
  _DWORD *v87; // [rsp+E8h] [rbp-940h]
  $115DCDF994C6370D29323EAB0E0C9502 v88; // [rsp+F0h] [rbp-938h] BYREF
  int v89; // [rsp+120h] [rbp-908h] BYREF
  __int16 v90; // [rsp+124h] [rbp-904h]
  __int16 v91; // [rsp+126h] [rbp-902h]
  __int64 v92; // [rsp+128h] [rbp-900h]
  __int64 v93; // [rsp+130h] [rbp-8F8h]
  __int64 v94; // [rsp+138h] [rbp-8F0h]
  _BYTE v95[152]; // [rsp+140h] [rbp-8E8h] BYREF
  _BYTE v96[2048]; // [rsp+1E0h] [rbp-848h] BYREF

  v70 = a2;
  Handle = a1;
  v85 = (void *)Address;
  v86 = a6;
  v87 = (_DWORD *)a7;
  Object = 0LL;
  v74 = 0;
  LODWORD(v68) = 0;
  memset(&v88, 0, sizeof(v88));
  v91 = 0;
  memset(v95, 0, sizeof(v95));
  v92 = 20LL;
  v89 = 1;
  v90 = 0;
  v93 = 0LL;
  v94 = 0LL;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a3 > 0x7FFFFFFEFFFFLL )
      return 3221225713LL;
    if ( 0x7FFFFFFF0000LL - a3 < a4 )
      return 3221225714LL;
    v13 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    v14 = *a6;
    v76 = v14;
    if ( !v14 )
      return 3221225715LL;
    if ( v14 > 0x1FFFFFFFFFFFFFFFLL )
      return 3221225715LL;
    ProbeForWrite(Address, 8 * v14, 8u);
    v15 = a7;
    if ( a7 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = v76;
  }
  else
  {
    v16 = *a6;
    v76 = *a6;
  }
  Pool = v96;
  Src = v96;
  if ( v16 > 0x100 )
  {
    Pool = MiAllocatePool(65, 8 * v16, 0x63476D4Du);
    Src = Pool;
    if ( !Pool )
      return 3221225626LL;
  }
  v69 = 0LL;
  v77 = (__int64 *)Pool;
  P = 0LL;
  v19 = 0;
  if ( Handle == (HANDLE)-1LL )
  {
    v20 = Process;
    Object = Process;
  }
  else
  {
    v51 = ObReferenceObjectByHandleWithTag(
            Handle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    LODWORD(v68) = v51;
    if ( v51 < 0 )
      goto LABEL_137;
    v20 = (_KPROCESS *)Object;
  }
  v75 = 0LL;
  v21 = a3 + a4 - 1;
  if ( a3 > v21 )
  {
    v51 = -1073741582;
    goto LABEL_103;
  }
  if ( Process != v20 )
  {
    KiStackAttachProcess((ULONG_PTR)v20);
    v19 = 1;
  }
  v72 = &v20[1].ActiveProcessors.StaticBitmap[26];
  v22 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v80 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = MiObtainReferencedVadEx(a3, 0LL, &v68);
  v25 = v23;
  v82 = v23;
  if ( !v23 )
  {
    v51 = v68;
    if ( (_DWORD)v68 == -1073741664 )
LABEL_102:
      v51 = -1073741585;
LABEL_103:
    LODWORD(v30) = 1;
    goto LABEL_68;
  }
  P = (PVOID)v23;
  if ( (*(_DWORD *)(v23 + 48) & 0x600000) != 0x600000
    || v21 > (((*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) << 12) | 0xFFF) )
  {
    goto LABEL_102;
  }
  VadMandatoryPageSize = MiGetVadMandatoryPageSize(v23, v24, *(unsigned int *)(v23 + 48), *(unsigned int *)(v23 + 48));
  v30 = VadMandatoryPageSize;
  v67 = VadMandatoryPageSize;
  if ( VadMandatoryPageSize > 1 )
  {
    v57 = (VadMandatoryPageSize << 12) - 1;
    if ( (v57 & a3) != 0 )
    {
      v51 = -1073741583;
      goto LABEL_68;
    }
    if ( (v57 & a4) != 0 )
    {
      v51 = -1073741582;
      goto LABEL_68;
    }
  }
  if ( (v27 & 0xA00000) == 0xA00000 )
  {
    v31 = 16LL;
    if ( MiVadPageSizes[(v28 >> 19) & 3] != 16 )
      v31 = v29;
    v68 = v31;
  }
  else
  {
    v68 = v29;
  }
  LockedVadEvent = MiLocateLockedVadEvent(v25, 4);
  v32 = ((a3 >> 12) - (*(unsigned int *)(v25 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32))) / v30;
  v66 = MiLockWorkingSetShared(v72);
  v33 = v80;
  if ( v22 > v80 )
    goto LABEL_63;
  v34 = v76;
  v35 = v69;
  while ( 1 )
  {
    if ( v35 )
    {
      MiFlushTbList(&v89);
      MiUnlockPageTableInternal((__int64)v72, v35);
      v35 = 0LL;
      v69 = 0LL;
    }
    if ( (unsigned int)MiWorkingSetIsContended(v72) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)v72, v66);
      MiLockWorkingSetShared(v72);
    }
    NextPageTable = MiGetNextPageTable(v22, v33, 0, v66, 1, (__int64)&v74);
    v37 = NextPageTable;
    if ( NextPageTable )
    {
      v35 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v69 = v35;
    }
    else
    {
      v37 = v33 + 8;
    }
    v38 = ((__int64)(v37 - v22) >> 3) / v67;
    v19 |= 4u;
    MiLockVadCore(v25, ((__int64)(v37 - v22) >> 3) % v67);
    v39 = LockedVadEvent;
    for ( i = v67; v38; --v38 )
    {
      if ( _bittest64(*(const signed __int64 **)(v39 + 16), v32) == 1 )
      {
        if ( (v70 & 1) != 0 )
          _bittestandreset64(*(signed __int64 **)(v39 + 16), v32);
        v58 = v77;
        *v77 = (__int64)(v22 << 25) >> 16;
        v77 = v58 + 1;
        if ( ++v75 == v34 )
          goto LABEL_62;
      }
      ++v32;
      v22 += 8 * v67;
    }
    if ( v22 > v80 )
      goto LABEL_62;
    v41 = v80;
    v79 = v80;
    if ( v74 )
    {
      v22 = v35;
      v59 = ((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v43 = 512LL;
      if ( v74 > 1 )
      {
        v60 = v74 - 1;
        do
        {
          v43 <<= 9;
          v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v59 = ((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v60;
        }
        while ( v60 );
      }
      v69 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v61 = v22 + 8;
      if ( ((v22 + 8) & 0xFFF) != 0 )
      {
        do
        {
          if ( v61 > v59 )
            break;
          if ( (MI_READ_PTE_LOCK_FREE(v61) & 0x81) != 0x81 )
            break;
          v61 += 8LL;
        }
        while ( (v61 & 0xFFF) != 0 );
        v39 = LockedVadEvent;
        i = v67;
      }
      v41 = v61 - 8;
      v79 = v41;
      v42 = v68;
      v35 = v69;
    }
    else
    {
      v42 = v68;
      v43 = v68;
    }
    v44 = v43 / i;
    v81 = v43 / i;
    if ( v22 <= v41 )
      break;
LABEL_61:
    LOBYTE(v44) = 2;
    v25 = v82;
    MiUnlockVadCore(v82, v44);
    v19 &= ~4u;
    v22 = (((unsigned __int64)MiGetLeafVa(v22) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v33 = v80;
    if ( v22 > v80 )
      goto LABEL_62;
  }
  while ( 1 )
  {
    for ( j = v22; j >= 0xFFFFF68000000000uLL; j = (__int64)(j << 25) >> 16 )
    {
      if ( j > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v19 &= ~2u;
    v46 = v22;
    if ( _bittest64(*(const signed __int64 **)(v39 + 16), v32) != 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        v48 = *(struct _LIST_ENTRY **)v46;
        if ( v46 >= 0xFFFFF6FB7DBED000uLL
          && v46 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((unsigned __int8)v48 & 1) != 0 )
        {
          if ( ((unsigned __int8)v48 & 0x20) != 0 )
          {
            v49 = ((unsigned __int8)v48 & 0x42) == 0;
            if ( ((unsigned __int8)v48 & 0x42) != 0 )
              goto LABEL_51;
          }
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v65 = *((_QWORD *)&Flink->Flink + ((v46 >> 3) & 0x1FF));
            LOBYTE(Flink) = (unsigned __int8)v48 | 0x20;
            if ( (v65 & 0x20) == 0 )
              Flink = *(struct _LIST_ENTRY **)v46;
            LOBYTE(v48) = (_BYTE)Flink;
            if ( (v65 & 0x42) != 0 )
              LOBYTE(v48) = (unsigned __int8)Flink | 0x42;
          }
          v42 = v68;
        }
        v49 = ((unsigned __int8)v48 & 0x42) == 0;
LABEL_51:
        if ( !v49 && ((unsigned __int8)v48 & 1) != 0 )
        {
          v19 |= 2u;
          if ( (v70 & 1) == 0 )
            goto LABEL_55;
          MiMakePteClean(v46, &v89);
          v42 = v68;
        }
        v46 += 8LL;
        if ( (unsigned int)++v47 >= v42 )
        {
LABEL_55:
          v34 = v76;
          goto LABEL_56;
        }
      }
    }
    v19 |= 2u;
    if ( (v70 & 1) != 0 )
    {
      _bittestandreset64(*(signed __int64 **)(v39 + 16), v32);
      v62 = 0;
      do
      {
        v63 = MI_READ_PTE_LOCK_FREE(v46);
        if ( (v63 & 0x42) != 0 && (v63 & 1) != 0 )
          MiMakePteClean(v46, &v89);
        v46 += 8LL;
        ++v62;
        v42 = v68;
      }
      while ( v62 < v68 );
LABEL_56:
      i = v67;
      v39 = LockedVadEvent;
      v41 = v79;
      v44 = v81;
    }
    if ( (v19 & 2) != 0 )
    {
      v54 = 0LL;
      if ( v44 )
        break;
    }
LABEL_58:
    v32 += v44;
    v22 += 8 * v42;
    if ( (v22 & 0xFFF) == 0 || v22 > v41 )
    {
      v35 = v69;
      goto LABEL_61;
    }
  }
  v55 = v75;
  v56 = (unsigned __int64 *)v77;
  while ( 1 )
  {
    *v56++ = j;
    v77 = (__int64 *)v56;
    v75 = ++v55;
    if ( v55 == v34 )
      break;
    ++v54;
    j += i << 12;
    if ( v54 >= v44 )
      goto LABEL_58;
  }
  v25 = v82;
LABEL_62:
  v20 = (_KPROCESS *)Object;
  LODWORD(v30) = v67;
LABEL_63:
  MiFlushTbList(&v89);
  if ( (v19 & 4) != 0 )
  {
    LOBYTE(v50) = 2;
    MiUnlockVadCore(v25, v50);
  }
  if ( v69 )
    MiUnlockPageTableInternal((__int64)v72, v69);
  MiUnlockWorkingSetShared((__int64)v72, v66);
  v51 = 0;
LABEL_68:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  if ( (v19 & 1) != 0 )
    KiUnstackDetachProcess(&v88);
  if ( Handle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v20, 0x77576D4Du);
  if ( v51 )
  {
LABEL_137:
    v52 = Src;
    goto LABEL_78;
  }
  v52 = Src;
  if ( v85 )
  {
    v53 = v75;
    memmove(v85, Src, 8 * v75);
    *v86 = v53;
  }
  *v87 = (_DWORD)v30 << 12;
LABEL_78:
  if ( v52 != v96 )
    ExFreePoolWithTag(v52, 0);
  return (unsigned int)v51;
}

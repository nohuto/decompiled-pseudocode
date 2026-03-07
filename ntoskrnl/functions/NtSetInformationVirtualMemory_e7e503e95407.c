__int64 __fastcall NtSetInformationVirtualMemory(
        ULONG_PTR a1,
        unsigned int a2,
        char *a3,
        char *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v7; // r13
  ULONG_PTR v9; // r15
  char v10; // r11
  int v11; // ebx
  NTSTATUS valid; // edi
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // r9
  LONG *p_LockNV; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r13
  __int64 v20; // r13
  __int64 result; // rax
  _QWORD *Pool; // r15
  int v23; // r8d
  unsigned int v24; // r14d
  unsigned int v25; // r14d
  _BYTE *v26; // r14
  bool v27; // zf
  PVOID v28; // r13
  __int64 v29; // r8
  int v30; // r9d
  NTSTATUS v31; // eax
  __int64 v32; // r9
  __int64 v33; // r8
  unsigned int v34; // r14d
  unsigned int v35; // r14d
  unsigned int v36; // r14d
  unsigned int v37; // r14d
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-318h]
  PVOID v39; // [rsp+58h] [rbp-310h]
  _BYTE *v40; // [rsp+60h] [rbp-308h]
  unsigned int v41; // [rsp+68h] [rbp-300h]
  unsigned int v42; // [rsp+70h] [rbp-2F8h]
  char v43; // [rsp+78h] [rbp-2F0h]
  PVOID Object; // [rsp+80h] [rbp-2E8h] BYREF
  PVOID P; // [rsp+88h] [rbp-2E0h]
  int v46; // [rsp+90h] [rbp-2D8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-2D0h]
  volatile void *Address[2]; // [rsp+A0h] [rbp-2C8h]
  HANDLE Handle[2]; // [rsp+B0h] [rbp-2B8h]
  __int64 v50; // [rsp+C0h] [rbp-2A8h]
  PVOID v51; // [rsp+C8h] [rbp-2A0h] BYREF
  struct _KTHREAD *v52; // [rsp+D0h] [rbp-298h]
  ULONG_PTR v53; // [rsp+D8h] [rbp-290h]
  LONG *v54; // [rsp+E0h] [rbp-288h]
  void *Src; // [rsp+E8h] [rbp-280h]
  $115DCDF994C6370D29323EAB0E0C9502 v56; // [rsp+100h] [rbp-268h] BYREF
  _BYTE v57[256]; // [rsp+130h] [rbp-238h] BYREF
  _BYTE v58[256]; // [rsp+230h] [rbp-138h] BYREF

  Src = a4;
  v7 = (unsigned __int64)a3;
  P = a3;
  v9 = a1;
  BugCheckParameter1 = a1;
  v53 = a1;
  Object = 0LL;
  memset(&v56, 0, sizeof(v56));
  v46 = 0;
  v39 = 0LL;
  v10 = 0;
  v43 = 0;
  v11 = 0;
  v40 = v57;
  valid = 0;
  v41 = 0;
  if ( a2 >= 2 )
  {
    if ( a2 == 2 )
    {
      v13 = a6;
      if ( a6 == 40 )
        goto LABEL_4;
      return 3221225716LL;
    }
    if ( a2 != 3 && a2 != 4 && a2 != 5 && a2 - 6 >= 2 )
      return 3221225712LL;
  }
  if ( !a5 )
    return 3221225715LL;
  v13 = a6;
  if ( a6 != 4 )
    return 3221225716LL;
  if ( a2 == a6 )
  {
    if ( !dword_140C694FC )
      return 3221225659LL;
    if ( a3 != (char *)1 )
      return 3221225713LL;
  }
LABEL_4:
  if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFELL )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v52 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  v54 = p_LockNV;
  if ( a2 == 2 && (p_LockNV[628] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v10 = 1;
    v43 = v10;
  }
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)Handle = 0LL;
  v50 = 0LL;
  AccessMode = CurrentThread->PreviousMode;
  if ( AccessMode )
  {
    v16 = 16 * v7;
    if ( 16 * v7 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a4[v16] > 0x7FFFFFFF0000LL || &a4[v16] < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( a2 == 2 )
    {
      if ( (_DWORD)v13 )
      {
        if ( (a5 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = a5 + v13;
        if ( v17 > 0x7FFFFFFF0000LL || v17 < a5 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)a5;
      *(_OWORD *)Handle = *(_OWORD *)(a5 + 16);
      v50 = *(_QWORD *)(a5 + 32);
      v18 = _mm_cvtsi128_si32(*(__m128i *)Address);
      v42 = v18;
      if ( !v18 )
        return 3221225715LL;
      v19 = v18;
      if ( HIDWORD(Address[0]) )
        return 3221225715LL;
      ProbeForWrite(Address[1], 4uLL, 4u);
      v20 = 16 * v19;
      if ( v20 )
      {
        if ( ((__int64)Handle[0] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Handle[0] + v20 > 0x7FFFFFFF0000LL || (char *)Handle[0] + v20 < Handle[0] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v7 = (unsigned __int64)P;
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v41 = *(_DWORD *)a5;
      v42 = (unsigned int)Address[0];
    }
    p_LockNV = v54;
    v9 = BugCheckParameter1;
    goto LABEL_36;
  }
  if ( a2 != 2 )
  {
    v41 = *(_DWORD *)a5;
    v42 = (unsigned int)Address[0];
    goto LABEL_36;
  }
  *(_OWORD *)Address = *(_OWORD *)a5;
  *(_OWORD *)Handle = *(_OWORD *)(a5 + 16);
  v50 = *(_QWORD *)(a5 + 32);
  v42 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v42 || HIDWORD(Address[0]) )
    return 3221225715LL;
LABEL_36:
  if ( v9 == -1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(v9, 0x66506D4Du, (__int64)&Object, 0LL, 0LL);
    valid = result;
    if ( (int)result < 0 )
      return result;
  }
  Pool = v58;
  P = v58;
  if ( v7 > 0x10 )
  {
    Pool = MiAllocatePool(64, 16 * v7, 0x724D6D4Du);
    P = Pool;
    if ( !Pool )
    {
      Pool = v58;
LABEL_100:
      v26 = v57;
      valid = -1073741670;
      v28 = 0LL;
      goto LABEL_53;
    }
  }
  if ( a2 == 2 )
  {
    if ( v42 > 0x10 )
    {
      v40 = MiAllocatePool(64, 16LL * v42, 0x724D6D4Du);
      if ( !v40 )
        goto LABEL_100;
    }
    if ( Handle[1] )
    {
      v51 = 0LL;
      valid = ObReferenceObjectByHandle(Handle[1], 1u, MmSectionObjectType, AccessMode, &v51, 0LL);
      v39 = v51;
      if ( valid < 0 )
      {
        v28 = v51;
        goto LABEL_74;
      }
    }
  }
  memmove(Pool, Src, 16 * v7);
  if ( a2 == 2 )
    memmove(v40, Handle[0], 16LL * v42);
  if ( v52->ApcState.Process != Object )
  {
    if ( a2 - 3 <= 1 )
    {
      valid = -1073741585;
      goto LABEL_73;
    }
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v56);
    v11 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(Pool, v7, 0LL) )
  {
    valid = -1073741582;
    goto LABEL_73;
  }
  if ( !a2 )
  {
    if ( v41 == v23 )
    {
      MiGetEffectivePagePriorityThread((__int64)v52);
      if ( (int)PsGetIoPriorityThread(v29) <= 1 )
        v30 |= 0x400u;
      v31 = MiPrefetchVirtualMemory(v7, (__int64)Pool, (__int64)Object + 1664, v30);
      goto LABEL_72;
    }
    goto LABEL_116;
  }
  v24 = a2 - 1;
  if ( v24 )
  {
    v25 = v24 - 1;
    if ( !v25 )
    {
      v26 = v40;
      v27 = v7 == 1;
      v28 = v39;
      if ( v27 )
      {
        valid = MiCfgMarkValidEntries(
                  (_DWORD)Object,
                  *Pool,
                  Pool[1],
                  (_DWORD)v40,
                  v42,
                  (__int64)&v46,
                  v43,
                  (__int64)v39,
                  v50,
                  AccessMode == (KPROCESSOR_MODE)v23);
        if ( v11 )
        {
          KiUnstackDetachProcess(&v56);
          LOBYTE(v11) = 0;
        }
        *(_DWORD *)Address[1] = v46;
      }
      else
      {
        valid = -1073741582;
      }
      goto LABEL_53;
    }
    v34 = v25 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( !v37 )
          {
            if ( v41 != v23 )
            {
              valid = -1073741811;
              goto LABEL_73;
            }
            v31 = VmPrefetchVirtualAddresses(Pool);
            goto LABEL_72;
          }
          if ( v37 != 1 )
            goto LABEL_73;
          if ( (v41 & 0xFFFFFFFE) == 0 )
          {
            v31 = MiProcessRemoveFromWorkingSet(v7, Pool, v41);
            goto LABEL_72;
          }
LABEL_116:
          valid = -1073741581;
          goto LABEL_73;
        }
        if ( v41 == 512 )
        {
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, AccessMode) )
          {
            valid = -1073741727;
            goto LABEL_73;
          }
          v31 = MiProcessVaContiguityInformation((unsigned __int64)Pool, v7);
          goto LABEL_72;
        }
      }
LABEL_123:
      valid = -1073741637;
      goto LABEL_73;
    }
    if ( v41 != v23 )
      goto LABEL_116;
    if ( (*((_DWORD *)Object + 281) & 0x10) == 0 )
      goto LABEL_123;
    v32 = 0LL;
    v33 = 3LL;
  }
  else
  {
    if ( v41 > 5 )
      goto LABEL_116;
    v32 = v41;
    v33 = 1LL;
  }
  v31 = MiProcessVaRangesInfoClass(v7, Pool, v33, v32);
LABEL_72:
  valid = v31;
LABEL_73:
  v28 = v39;
LABEL_74:
  v26 = v40;
LABEL_53:
  if ( (v11 & 1) != 0 )
    KiUnstackDetachProcess(&v56);
  if ( v28 )
    ObfDereferenceObject(v28);
  if ( BugCheckParameter1 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( Pool != (_QWORD *)v58 )
    ExFreePoolWithTag(Pool, 0);
  if ( v26 != v57 )
    ExFreePoolWithTag(v26, 0);
  return (unsigned int)valid;
}

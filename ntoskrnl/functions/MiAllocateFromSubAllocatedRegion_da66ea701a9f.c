__int64 __fastcall MiAllocateFromSubAllocatedRegion(int a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v7; // r13
  __int64 Process; // r14
  __int64 v9; // r12
  _QWORD *v10; // r12
  _QWORD *v11; // rsi
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // eax
  bool v16; // zf
  void *v17; // rcx
  int v18; // ebx
  int NewSubAllocatedRegion; // esi
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int16 v23; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v24; // [rsp+B2h] [rbp+Ah]
  __int64 v25; // [rsp+B8h] [rbp+10h]
  unsigned __int64 *v26; // [rsp+C0h] [rbp+18h]
  int v27; // [rsp+C8h] [rbp+20h] BYREF
  int v28; // [rsp+CCh] [rbp+24h]

  v28 = HIDWORD(a4);
  v26 = a3;
  v25 = a2;
  v24 = HIWORD(a1);
  v27 = 0;
  v4 = 0LL;
  v23 = 0;
  v5 = 0LL;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (unsigned __int64)(a2 + 4095) >> 12;
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = *(_QWORD *)(Process + 1680);
  --CurrentThread->SpecialApcDisable;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225738LL;
  }
  else
  {
    v10 = (_QWORD *)(v9 + 312);
    while ( 1 )
    {
      LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
      v11 = (_QWORD *)*v10;
      if ( (_QWORD *)*v10 != v10 )
      {
        while ( 1 )
        {
          ClearBitsAndSet = RtlFindClearBitsAndSetEx(v11 - 2, v7, (unsigned __int64)*((unsigned int *)v11 + 8) >> 2);
          v13 = ClearBitsAndSet;
          if ( ClearBitsAndSet != -1LL )
            break;
          v11 = (_QWORD *)*v11;
          if ( v11 == v10 )
            goto LABEL_7;
        }
        *((_DWORD *)v11 + 6) += v7;
        v14 = v11[4] & 3 | (4 * (ClearBitsAndSet + v7));
        v15 = *((_DWORD *)v11 + 6);
        *((_DWORD *)v11 + 8) = v14;
        if ( v15 >= *((_DWORD *)v11 + 7) )
        {
          v21 = *v11;
          if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v22 = (_QWORD *)v11[1], (_QWORD *)*v22 != v11) )
            __fastfail(3u);
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          *v11 = 0LL;
        }
        v4 = v11[2];
        v5 = (v13 << 12)
           + ((*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12);
      }
LABEL_7:
      UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
      if ( v4 )
        break;
      NewSubAllocatedRegion = MiAllocateNewSubAllocatedRegion(0LL, v7);
      if ( NewSubAllocatedRegion < 0 )
      {
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
        v16 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v16
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        return (unsigned int)NewSubAllocatedRegion;
      }
    }
    MiReferenceVad(v4);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    MiLockVad((__int64)CurrentThread, v4);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( (unsigned int)MiVadDeleted(v4) )
    {
      MiUnlockAndDereferenceVad(v17);
      return 3221225738LL;
    }
    v18 = MiCommitExistingVad(
            (ULONG_PTR)v17,
            v5,
            v25,
            (*(_DWORD *)(v4 + 48) >> 7) & 0x1F,
            0,
            0LL,
            0,
            0,
            0LL,
            &v27,
            &v23);
    if ( v18 < 0 )
    {
      MiFreeToSubAllocatedRegion((PVOID)v4);
    }
    else
    {
      MiUnlockAndDereferenceVad((PVOID)v4);
      *v26 = v5;
    }
    return (unsigned int)v18;
  }
}

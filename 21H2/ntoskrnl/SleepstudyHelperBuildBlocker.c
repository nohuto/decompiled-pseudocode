/*
 * XREFs of SleepstudyHelperBuildBlocker @ 0x140616E00
 * Callers:
 *     SleepstudyHelper_RegisterComponentEx @ 0x1408FB5C0 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1408FB690 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1408FB750 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x1408FB840 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     SSHSupportReleasePushLockExclusive @ 0x1402481C8 (SSHSupportReleasePushLockExclusive.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     SSHSupportAllocateNonPaged @ 0x1402483BC (SSHSupportAllocateNonPaged.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     SSHSupportQueryInterruptTime @ 0x140580F6C (SSHSupportQueryInterruptTime.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140616FC0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SleepstudyHelperBuildBlocker(ULONG_PTR *a1, _QWORD *a2)
{
  ULONG_PTR v2; // r15
  _QWORD *NonPaged; // rbx
  ULONG_PTR *v4; // rdi
  ULONG v7; // ebp
  ULONG_PTR *PoolWithTag; // rax
  ULONG_PTR v9; // rax
  ULONG_PTR *v10; // r14
  ULONG_PTR v11; // rbp
  ULONG_PTR **v12; // rax
  ULONG_PTR v13; // r15
  ULONG_PTR *v14; // rdi
  ULONG_PTR **v15; // rcx
  unsigned int v16; // esi

  v2 = *a1;
  NonPaged = 0LL;
  v4 = 0LL;
  v7 = *(_DWORD *)(*a1 + 24);
  if ( a2 )
  {
    NonPaged = SSHSupportAllocateNonPaged(0x128uLL, v7);
    PoolWithTag = (ULONG_PTR *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, v7);
    v4 = PoolWithTag;
    if ( NonPaged && PoolWithTag )
    {
      memset(NonPaged + 1, 0, 0x118uLL);
      memset(v4, 0, 0x68uLL);
      NonPaged[36] = v4;
      v4[13] = (ULONG_PTR)NonPaged;
      *NonPaged = 0LL;
      *((_DWORD *)v4 + 24) = 1;
      if ( *((_BYTE *)a1 + 72) )
        *((_DWORD *)NonPaged + 2) |= 4u;
      v9 = a1[8];
      if ( v9 )
      {
        NonPaged[35] = v9;
        _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v9 + 288) + 96LL), 1u);
      }
      v4[1] = (ULONG_PTR)v4;
      v10 = v4 + 2;
      v4[3] = (ULONG_PTR)(v4 + 2);
      v11 = v2 + 16;
      v4[2] = (ULONG_PTR)(v4 + 2);
      *v4 = (ULONG_PTR)v4;
      v4[4] = v2;
      *((_DWORD *)v4 + 10) = *((_DWORD *)a1 + 2);
      *((_OWORD *)v4 + 3) = *((_OWORD *)a1 + 1);
      *((_OWORD *)v4 + 4) = *((_OWORD *)a1 + 2);
      *((_OWORD *)v4 + 5) = *((_OWORD *)a1 + 3);
      *((_OWORD *)a1 + 3) = 0LL;
      ExAcquirePushLockExclusiveEx(v2 + 16, 0LL);
      v12 = *(ULONG_PTR ***)(v2 + 48);
      v13 = v2 + 40;
      if ( *v12 != (ULONG_PTR *)v13 )
        goto LABEL_14;
      *v4 = v13;
      v4[1] = (ULONG_PTR)v12;
      *v12 = v4;
      *(_QWORD *)(v13 + 8) = v4;
      SSHSupportReleasePushLockExclusive(v11);
      v14 = &SshpBlockerCollections + 4 * *((int *)v4 + 10);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
      v15 = (ULONG_PTR **)v14[3];
      if ( *v15 != v14 + 2 )
LABEL_14:
        __fastfail(3u);
      *v10 = (ULONG_PTR)(v14 + 2);
      v10[1] = (ULONG_PTR)v15;
      *v15 = v10;
      v14[3] = (ULONG_PTR)v10;
      if ( *((_BYTE *)v14 + 8) )
      {
        *((_DWORD *)NonPaged + 2) |= 2u;
        NonPaged[2] = SSHSupportQueryInterruptTime();
      }
      SSHSupportReleasePushLockExclusive((ULONG_PTR)v14);
      SleepstudyHelperDestroyBlockerBuilder(a1);
      v16 = 0;
      *a2 = NonPaged;
      return v16;
    }
    v16 = -1073741670;
  }
  else
  {
    v16 = 0;
  }
  if ( NonPaged )
    CmpFreeTransientPoolWithTag(NonPaged, v7);
  if ( v4 )
    CmpFreeTransientPoolWithTag(v4, v7);
  return v16;
}

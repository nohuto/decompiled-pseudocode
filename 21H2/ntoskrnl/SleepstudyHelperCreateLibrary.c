/*
 * XREFs of SleepstudyHelperCreateLibrary @ 0x1407CD140
 * Callers:
 *     SleepstudyHelper_Initialize @ 0x1408FB570 (SleepstudyHelper_Initialize.c)
 * Callees:
 *     SSHSupportReleasePushLockExclusive @ 0x1402481C8 (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportAllocateNonPaged @ 0x1402483BC (SSHSupportAllocateNonPaged.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall SleepstudyHelperCreateLibrary(ULONG Tag, __int64 *a2)
{
  unsigned int v2; // ebx
  PVOID NonPaged; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax

  v2 = 0;
  if ( a2 )
  {
    if ( SshpInitialized )
    {
      NonPaged = SSHSupportAllocateNonPaged(0x48uLL, Tag);
      v6 = (__int64)NonPaged;
      if ( NonPaged )
      {
        memset(NonPaged, 0, 0x48uLL);
        *(_DWORD *)(v6 + 24) = Tag;
        *(_QWORD *)(v6 + 48) = v6 + 40;
        *(_QWORD *)(v6 + 40) = v6 + 40;
        *(_QWORD *)(v6 + 64) = v6 + 56;
        *(_QWORD *)(v6 + 56) = v6 + 56;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpLibraryListLock, 0LL);
        v7 = (__int64 *)qword_140C1E408;
        if ( *(__int64 **)qword_140C1E408 != &SshpLibraryList )
          __fastfail(3u);
        *(_QWORD *)v6 = &SshpLibraryList;
        *(_QWORD *)(v6 + 8) = v7;
        *v7 = v6;
        qword_140C1E408 = v6;
        SSHSupportReleasePushLockExclusive((ULONG_PTR)&SshpLibraryListLock);
        *a2 = v6;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}

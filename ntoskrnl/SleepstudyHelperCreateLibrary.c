/*
 * XREFs of SleepstudyHelperCreateLibrary @ 0x140847520
 * Callers:
 *     SleepstudyHelper_Initialize @ 0x1408474D0 (SleepstudyHelper_Initialize.c)
 *     PopPowerRequestStatsInitialize @ 0x140B62918 (PopPowerRequestStatsInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1402A4AB8 (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportAllocateNonPaged @ 0x1402A4AEC (SSHSupportAllocateNonPaged.c)
 *     SSHSupportQueryIsLibraryEnabled @ 0x14039EB70 (SSHSupportQueryIsLibraryEnabled.c)
 */

__int64 __fastcall SleepstudyHelperCreateLibrary(int a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ecx
  __int64 NonPaged; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  v2 = 0;
  if ( a2 )
  {
    if ( SshpInitialized && SSHSupportQueryIsLibraryEnabled() )
    {
      NonPaged = SSHSupportAllocateNonPaged(72LL, v5);
      v7 = (_QWORD *)NonPaged;
      if ( NonPaged )
      {
        *(_DWORD *)(NonPaged + 24) = a1;
        *(_QWORD *)(NonPaged + 16) = 0LL;
        v8 = (_QWORD *)(NonPaged + 40);
        v8[1] = v8;
        *v8 = v8;
        v7[8] = v7 + 7;
        v7[7] = v7 + 7;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpLibraryListLock, 0LL);
        v9 = (_QWORD *)qword_140C38778;
        if ( *(__int64 **)qword_140C38778 != &SshpLibraryList )
          __fastfail(3u);
        *v7 = &SshpLibraryList;
        v7[1] = v9;
        *v9 = v7;
        qword_140C38778 = (__int64)v7;
        SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpLibraryListLock);
        *a2 = v7;
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

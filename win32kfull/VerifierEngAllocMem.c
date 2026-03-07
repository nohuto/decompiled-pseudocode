__int64 __fastcall VerifierEngAllocMem(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  char v5; // si
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rcx

  v4 = a2;
  v5 = a1;
  v6 = a2;
  v7 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( (unsigned int)VerifierRandomFailure(v8) || !v4 )
    return 0LL;
  if ( (*(_DWORD *)(v7 + 23592) & 8) != 0 )
  {
    if ( v4 > 0xFFFFFFDF )
      return 0LL;
    v4 += 32;
  }
  if ( v4 > 0xFFFFFFDF )
    return 0LL;
  v9 = v4 + 32;
  if ( v9 >= 0x2710000 )
    return 0LL;
  v10 = (-(__int64)((v5 & 2) != 0) & 0xFFFFFFFFFFFFFF3CuLL) + 260;
  if ( (v5 & 1) != 0 )
    v11 = Win32AllocPoolWithPriorityZInit(v10, v9, a3, 40LL);
  else
    v11 = Win32AllocPoolWithPriority(v10, v9, a3, 40LL);
  v12 = v11;
  if ( v11 )
  {
    MultiUserGreTrackAddEngResource(v11, 2LL);
    v12 += 32LL;
    if ( (*(_DWORD *)(v7 + 23592) & 8) != 0 )
    {
      *(_QWORD *)(v12 + 16) = v6;
      *(_DWORD *)(v12 + 24) = a3;
      GreAcquireSemaphore(*(_QWORD *)(v7 + 23616));
      v13 = *(__int64 **)(v7 + 23632);
      if ( *v13 != v7 + 23624 )
        __fastfail(3u);
      *(_QWORD *)(v12 + 8) = v13;
      *(_QWORD *)v12 = v7 + 23624;
      *v13 = v12;
      *(_QWORD *)(v7 + 23632) = v12;
      EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.vs.hsemPoolTracker");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v7 + 23616));
      v12 += 32LL;
    }
  }
  return v12;
}

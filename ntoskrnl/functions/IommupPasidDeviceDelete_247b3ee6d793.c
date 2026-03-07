__int64 __fastcall IommupPasidDeviceDelete(__int64 a1)
{
  unsigned int v1; // esi
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 24) )
    return 3221227272LL;
  v4 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 376LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( !HalpHvIommu )
  {
    v7 = IommuFreeLibraryContext(*(_QWORD *)(a1 + 56));
    *(_QWORD *)(a1 + 56) = 0LL;
    v1 = v7;
  }
  v8 = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)v8 )
    ExpFreeAsid((unsigned int)(v8 - 1), 0LL);
  HalpMmAllocCtxFree(v8, a1);
  return v1;
}

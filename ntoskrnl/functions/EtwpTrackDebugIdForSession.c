signed __int32 __fastcall EtwpTrackDebugIdForSession(__int64 a1, const void *a2, unsigned int a3)
{
  volatile signed __int64 *v3; // rbp
  SIZE_T v4; // r15
  __int64 *v7; // r14
  __int64 *i; // rsi
  __int64 Pool2; // rax
  __int64 v11; // rbx
  __int64 v12; // rax

  v3 = (volatile signed __int64 *)(a1 + 688);
  v4 = a3;
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  if ( (unsigned int)v4 <= 0x8000 && (unsigned int)(v4 + *(_DWORD *)(a1 + 324)) <= *(_DWORD *)(a1 + 4) )
  {
    v7 = (__int64 *)(a1 + 96);
    for ( i = *(__int64 **)(a1 + 96); i != v7; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 5) == (_DWORD)v4 && RtlCompareMemory(i + 3, a2, v4) == v4 )
        goto LABEL_8;
    }
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(v4 + 24), 1651995717LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(a1 + 324) += v4;
      *(_DWORD *)(Pool2 + 20) = v4;
      memmove((void *)(Pool2 + 24), a2, v4);
      v12 = *v7;
      if ( *(__int64 **)(*v7 + 8) != v7 )
        __fastfail(3u);
      *(_QWORD *)v11 = v12;
      *(_QWORD *)(v11 + 8) = v7;
      *(_QWORD *)(v12 + 8) = v11;
      *v7 = v11;
      *(_BYTE *)(v11 + 16) = 0;
      _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x8C0u);
    }
  }
LABEL_8:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  return KeAbPostRelease((ULONG_PTR)v3);
}

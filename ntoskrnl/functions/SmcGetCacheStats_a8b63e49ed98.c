__int64 __fastcall SmcGetCacheStats(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int Path; // edi
  unsigned int v7; // ecx
  signed __int64 *v8; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int v10; // edi
  _DWORD *v11; // rsi
  __int64 v12; // rdx

  memset(a2 + 2, 0, 0x460uLL);
  v4 = SmcCacheReference(a1, a2[1]);
  v5 = v4;
  if ( v4 )
  {
    v7 = a2[7] & 0xFFFFFFC0 | 1;
    a2[7] = v7;
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v4 + 16);
    a2[5] = *(_DWORD *)(v4 + 8);
    a2[6] = *(_DWORD *)(v4 + 24);
    a2[25] = *(_DWORD *)(v4 + 32);
    a2[7] = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v4 + 28) << 6)) & 0x40;
    if ( (*a2 & 0x100) != 0 || (Path = SmKmFileInfoGetPath(v4 + 40, a2 + 26, 0x400u), Path >= 0) )
    {
      a2[24] = 0;
      v8 = (signed __int64 *)(v5 + 160);
      CurrentThread = KeGetCurrentThread();
      v10 = 0;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(v5 + 160, 0LL);
      v11 = (_DWORD *)(v5 + 168);
      v12 = 16LL;
      do
      {
        if ( *v11 != -1 )
        {
          a2[v10 + 8] = *v11;
          if ( (v11[1] & 3) == 0 )
            a2[24] |= 1 << v10;
          ++v10;
        }
        v11 += 6;
        --v12;
      }
      while ( v12 );
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KeLeaveCriticalRegion();
      a2[4] = v10;
      Path = 0;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2[1] & 0xF) + a1 + 8));
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return (unsigned int)Path;
}

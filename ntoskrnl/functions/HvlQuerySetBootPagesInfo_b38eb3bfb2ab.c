__int64 __fastcall HvlQuerySetBootPagesInfo(_DWORD *a1, unsigned int a2, char a3, char a4, unsigned int *a5)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // esi

  v5 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741790;
  }
  else if ( (HvlpFlags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&HvlpBootPagesInfo, 0LL);
    if ( a4 )
    {
      if ( byte_140C5F0A8 && !byte_140C5F0A9 && *(_DWORD *)qword_140C5F0C0 )
      {
        v10 = 8 * *(_DWORD *)qword_140C5F0C0 + 8;
        if ( v10 <= a2 )
          memmove(a1, qword_140C5F0C0, v10);
        else
          v5 = -1073741789;
        *a5 = v10;
      }
      else
      {
        *a5 = 0;
      }
    }
    else if ( byte_140C5F0A8 && !byte_140C5F0A9 && *(_DWORD *)qword_140C5F0C0 )
    {
      if ( a2 == 16 && a1 && !*a1 )
      {
        ExFreePoolWithTag(qword_140C5F0C0, 0x204C5648u);
        qword_140C5F0C0 = 0LL;
        byte_140C5F0A9 = 1;
        KeSetEvent(qword_140C5F0B0, 0, 0);
      }
      else
      {
        v5 = -1073741811;
      }
    }
    else
    {
      v5 = -1073700861;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HvlpBootPagesInfo, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HvlpBootPagesInfo);
    KeAbPostRelease((ULONG_PTR)&HvlpBootPagesInfo);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}

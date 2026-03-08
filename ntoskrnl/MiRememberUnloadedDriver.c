/*
 * XREFs of MiRememberUnloadedDriver @ 0x140854D38
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

void __fastcall MiRememberUnloadedDriver(const void **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  struct _KTHREAD *CurrentThread; // rsi
  char *v7; // rcx
  __int64 v8; // rax
  UNICODE_STRING *v9; // rbx
  wchar_t *Pool; // rax

  v3 = a3;
  if ( *(_WORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    v7 = (char *)MmUnloadedDrivers;
    if ( MmUnloadedDrivers )
    {
      v8 = (unsigned int)MmLastUnloadedDriver;
      if ( (unsigned int)MmLastUnloadedDriver < 0x32 )
        goto LABEL_4;
    }
    else
    {
      MmUnloadedDrivers = MiAllocatePool(64, 0x7D0uLL, 0x54446D4Du);
      v7 = (char *)MmUnloadedDrivers;
      if ( !MmUnloadedDrivers )
      {
LABEL_6:
        ExReleaseResourceLite(&PsLoadedModuleResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        return;
      }
    }
    v8 = 0LL;
    MmLastUnloadedDriver = 0;
LABEL_4:
    v9 = (UNICODE_STRING *)&v7[40 * v8];
    RtlFreeUnicodeString(v9);
    Pool = (wchar_t *)MiAllocatePool(64, *(unsigned __int16 *)a1, 0x54446D4Du);
    v9->Buffer = Pool;
    if ( Pool )
    {
      memmove(Pool, a1[1], *(unsigned __int16 *)a1);
      v9->Length = *(_WORD *)a1;
      v9->MaximumLength = *((_WORD *)a1 + 1);
      *(_QWORD *)&v9[1].Length = a2;
      v9[1].Buffer = (wchar_t *)(a2 + v3);
      *(_QWORD *)&v9[2].Length = MEMORY[0xFFFFF78000000014];
      ++MmLastUnloadedDriver;
    }
    else
    {
      *(_DWORD *)&v9->Length = 0;
    }
    goto LABEL_6;
  }
}

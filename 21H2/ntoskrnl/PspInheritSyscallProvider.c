/*
 * XREFs of PspInheritSyscallProvider @ 0x1406598AC
 * Callers:
 *     PspInsertProcess @ 0x14066D0AC (PspInsertProcess.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x140258A0C (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14025A668 (PspLockProcessShared.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     PspAttachProcessToSyscallProvider @ 0x1406595AC (PspAttachProcessToSyscallProvider.c)
 */

__int64 __fastcall PspInheritSyscallProvider(_QWORD *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v7; // r15d

  v2 = *(struct _EX_RUNDOWN_REF **)(a2 + 2896);
  v3 = 0;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessShared(a2, (__int64)CurrentThread);
    v7 = *(_DWORD *)(a2 + 2920);
    PspUnlockProcessShared(a2, (__int64)CurrentThread);
    if ( ExAcquireRundownProtection(v2 + 7) )
    {
      PspAttachProcessToSyscallProvider(a1, (__int64)v2, v7);
      ExReleaseRundownProtection(v2 + 7);
    }
    else
    {
      return (unsigned int)-1073741738;
    }
  }
  return v3;
}

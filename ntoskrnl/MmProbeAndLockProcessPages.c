/*
 * XREFs of MmProbeAndLockProcessPages @ 0x1406A40F0
 * Callers:
 *     CcAsyncReadPrefetch @ 0x14020CCA4 (CcAsyncReadPrefetch.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v6; // ebx
  LOCK_OPERATION v7; // edi
  $115DCDF994C6370D29323EAB0E0C9502 v8; // [rsp+28h] [rbp-60h] BYREF

  memset(&v8, 0, sizeof(v8));
  v6 = 0;
  v7 = Operation != IoReadAccess;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    v6 = 1;
    KiStackAttachProcess(Process, 0, (__int64)&v8);
  }
  MmProbeAndLockPages(MemoryDescriptorList, AccessMode, v7);
  if ( v6 )
    KiUnstackDetachProcess(&v8);
}

/*
 * XREFs of MmDeleteTeb @ 0x1406A51C0
 * Callers:
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406A5278 (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(struct _KPROCESS *a1, unsigned __int64 a2)
{
  void *v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(a1, &ApcState);
  v3 = (void *)MiObtainReferencedVadEx(a2, 0, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion(v3);
  return KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
}

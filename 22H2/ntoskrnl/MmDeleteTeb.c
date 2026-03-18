/*
 * XREFs of MmDeleteTeb @ 0x14076F0DC
 * Callers:
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076F194 (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, unsigned __int64 a2)
{
  __int64 *v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v6; // [rsp+28h] [rbp-40h] BYREF

  memset(&v6, 0, sizeof(v6));
  KiStackAttachProcess(a1, 0, (__int64)&v6);
  v3 = MiObtainReferencedVadEx(a2, 0, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion(v3);
  return KiUnstackDetachProcess(&v6);
}

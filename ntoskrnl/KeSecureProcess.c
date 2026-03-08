/*
 * XREFs of KeSecureProcess @ 0x14056D170
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VslInitializeSecureProcess @ 0x140549298 (VslInitializeSecureProcess.c)
 */

__int64 __fastcall KeSecureProcess(
        _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _MDL *a6,
        unsigned __int64 a7)
{
  unsigned int v11; // ebx
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+40h] [rbp-68h] BYREF

  memset(&v13, 0, sizeof(v13));
  KiStackAttachProcess(a1, 0, (__int64)&v13);
  v11 = VslInitializeSecureProcess(a1->SecureState.SecureHandle, a2, a3, a4, a5, a6, a7);
  KiUnstackDetachProcess(&v13);
  return v11;
}

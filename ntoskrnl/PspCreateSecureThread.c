/*
 * XREFs of PspCreateSecureThread @ 0x1409ADFC0
 * Callers:
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MmSizeOfMdl @ 0x1402CFFB0 (MmSizeOfMdl.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeSecureThread @ 0x14056C9E0 (KeSecureThread.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  SIZE_T v4; // rax
  struct _MDL *Pool2; // rbx
  int v6; // edi
  struct _KAPC_STATE v8; // [rsp+30h] [rbp-48h] BYREF

  memset(&v8, 0, sizeof(v8));
  KeStackAttachProcess(*(PRKPROCESS *)(Base + 544), &v8);
  v4 = MmSizeOfMdl((PVOID)Base, 0x910uLL);
  Pool2 = (struct _MDL *)ExAllocatePool2(64LL, v4, 1699967824LL);
  Pool2->Next = 0LL;
  Pool2->Size = 8 * (((unsigned __int16)((Base & 0xFFF) + 6415) >> 12) + 6);
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  Pool2->ByteOffset = Base & 0xFFF;
  Pool2->ByteCount = 2320;
  MmProbeAndLockPages(Pool2, 0, IoModifyAccess);
  v6 = KeSecureThread(Base, (int)Pool2, *(_QWORD *)(Base + 1232), *(_QWORD *)(Base + 1312), a2);
  if ( v6 < 0 )
  {
    MmUnlockPages(Pool2);
    ExFreePoolWithTag(Pool2, 0x65537350u);
  }
  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&v8);
  return (unsigned int)v6;
}

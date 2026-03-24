/*
 * XREFs of PspCreateSecureThread @ 0x140909F9C
 * Callers:
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140209710 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MmSizeOfMdl @ 0x1402986E0 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeSecureThread @ 0x1405132DC (KeSecureThread.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2, __int64 a3, _DWORD *a4)
{
  SIZE_T v6; // rax
  struct _MDL *PoolWithTag; // rbx
  int v8; // edi
  _OWORD v10[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0LL, (__int64)v10, a4);
  v6 = MmSizeOfMdl((PVOID)Base, 0x898uLL);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x65537350u);
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * (((unsigned __int16)((Base & 0xFFF) + 6295) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = Base & 0xFFF;
  PoolWithTag->ByteCount = 2200;
  MmProbeAndLockPages(PoolWithTag, 0, IoModifyAccess);
  v8 = KeSecureThread(Base, (int)PoolWithTag, *(_QWORD *)(Base + 1152), *(_QWORD *)(Base + 1232), a2);
  if ( v8 < 0 )
  {
    MmUnlockPages(PoolWithTag);
    ExFreePoolWithTag(PoolWithTag, 0x65537350u);
  }
  KiUnstackDetachProcess((__int64)v10, 0);
  return (unsigned int)v8;
}

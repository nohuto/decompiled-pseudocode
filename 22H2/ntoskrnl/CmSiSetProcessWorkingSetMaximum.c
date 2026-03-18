/*
 * XREFs of CmSiSetProcessWorkingSetMaximum @ 0x14037483C
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x14080D05C (CmpInitializeRegistryProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9C78 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x140747848 (CmSiRWLockReleaseExclusive.c)
 *     CmSiRWLockAcquireExclusive @ 0x14074787C (CmSiRWLockAcquireExclusive.c)
 */

__int64 CmSiSetProcessWorkingSetMaximum()
{
  int v0; // ebx
  _BYTE v2[8]; // [rsp+30h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v3; // [rsp+38h] [rbp-40h] BYREF

  memset(&v3, 0, sizeof(v3));
  KiStackAttachProcess(*((_KPROCESS **)&CmpRegistryProcess + 1), 0, (__int64)&v3);
  CmSiRWLockAcquireExclusive(&xmmword_140C13F30);
  v2[0] = 0;
  v0 = MmAdjustWorkingSetSizeEx(xmmword_140C13F40, 0x4000000uLL, 0, 1, 0, v2);
  if ( v0 >= 0 )
  {
    *((_QWORD *)&xmmword_140C13F40 + 1) = 0x4000000LL;
    v0 = 0;
  }
  CmSiRWLockReleaseExclusive((ULONG_PTR)&xmmword_140C13F30);
  KiUnstackDetachProcess(&v3);
  return (unsigned int)v0;
}

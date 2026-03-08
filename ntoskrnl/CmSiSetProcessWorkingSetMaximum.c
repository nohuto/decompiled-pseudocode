/*
 * XREFs of CmSiSetProcessWorkingSetMaximum @ 0x1403889B4
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140817300 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x1406A3848 (CmSiRWLockReleaseExclusive.c)
 *     CmSiRWLockAcquireExclusive @ 0x1406A419C (CmSiRWLockAcquireExclusive.c)
 */

__int64 CmSiSetProcessWorkingSetMaximum()
{
  int v0; // ebx
  _BYTE v2[8]; // [rsp+30h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v3; // [rsp+38h] [rbp-40h] BYREF

  memset(&v3, 0, sizeof(v3));
  KiStackAttachProcess(*((_KPROCESS **)&CmpRegistryProcess + 1), 0, (__int64)&v3);
  CmSiRWLockAcquireExclusive(&xmmword_140C13E10);
  v2[0] = 0;
  v0 = MmAdjustWorkingSetSizeEx(xmmword_140C13E20, 0x4000000uLL, 0LL, 1, 0, v2);
  if ( v0 >= 0 )
  {
    *((_QWORD *)&xmmword_140C13E20 + 1) = 0x4000000LL;
    v0 = 0;
  }
  CmSiRWLockReleaseExclusive((ULONG_PTR)&xmmword_140C13E10);
  KiUnstackDetachProcess(&v3);
  return (unsigned int)v0;
}

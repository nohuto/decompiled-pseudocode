/*
 * XREFs of MiInitializeRetpoline @ 0x140A56538
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     RtlIsImageFullyRetpolined @ 0x140372608 (RtlIsImageFullyRetpolined.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x14058FA28 (RtlCreateRetpolineStubsFunctionTable.c)
 *     MmReleaseLoadLock @ 0x1406FE9E0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406FEA40 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x1408D0D04 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140A9244C (MiCreateRetpolineBitmap.c)
 *     MiLockRetpolineStubs @ 0x140A92540 (MiLockRetpolineStubs.c)
 */

__int64 MiInitializeRetpoline()
{
  struct _KTHREAD *CurrentThread; // rdi
  int RetpolineStubsFunctionTable; // ebx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  RetpolineStubsFunctionTable = dword_140C4CC8C;
  qword_140C4CC80 = (__int64)&qword_140C4CC78;
  qword_140C4CC78 = &qword_140C4CC78;
  if ( dword_140C4CC8C < 0 )
    return (unsigned int)RetpolineStubsFunctionTable;
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    return 0;
  RetpolineStubsFunctionTable = MiLockRetpolineStubs();
  if ( RetpolineStubsFunctionTable < 0 )
    return (unsigned int)RetpolineStubsFunctionTable;
  qword_140C4CC70 = MiReservePtes((__int64)&qword_140C4EF40, 1u, v3, v4);
  if ( qword_140C4CC70 )
  {
    RetpolineStubsFunctionTable = MiCreateRetpolineBitmap(&v5);
    if ( RetpolineStubsFunctionTable < 0 )
      return (unsigned int)RetpolineStubsFunctionTable;
    MmAcquireLoadLock();
    RetpolineStubsFunctionTable = MiMarkRetpolineBits((__int64)PsNtosImageBase);
    if ( RetpolineStubsFunctionTable < 0
      || (unsigned int)RtlIsImageFullyRetpolined(PsHalImageBase)
      && (RetpolineStubsFunctionTable = MiMarkRetpolineBits((__int64)PsHalImageBase), RetpolineStubsFunctionTable < 0) )
    {
      MmReleaseLoadLock((__int64)CurrentThread);
      return (unsigned int)RetpolineStubsFunctionTable;
    }
    MmReleaseLoadLock((__int64)CurrentThread);
    retpoline_image_bitmap = v5 - 0x1FFFF0000000LL;
    RetpolineStubsFunctionTable = RtlCreateRetpolineStubsFunctionTable(
                                    v5 - 0x1FFFF0000000LL,
                                    Base,
                                    dword_140C4CC88 << 12);
    if ( RetpolineStubsFunctionTable < 0 )
      return (unsigned int)RetpolineStubsFunctionTable;
    dword_140C00E94 = dword_140C4CCB0;
    dword_140C00E98 = dword_140C4CC88 << 12;
    return 0;
  }
  return 3221225626LL;
}

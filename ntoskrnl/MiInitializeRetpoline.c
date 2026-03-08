/*
 * XREFs of MiInitializeRetpoline @ 0x140B39F78
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1402F4538 (RtlIsImageFullyRetpolined.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x1405AFD28 (RtlCreateRetpolineStubsFunctionTable.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MiMarkRetpolineBits @ 0x140A317C0 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140B966F0 (MiCreateRetpolineBitmap.c)
 *     MiLockRetpolineStubs @ 0x140B967E0 (MiLockRetpolineStubs.c)
 */

__int64 MiInitializeRetpoline()
{
  struct _KTHREAD *CurrentThread; // rbx
  int RetpolineStubsFunctionTable; // eax
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  qword_140C654F8 = (__int64)&qword_140C654F0;
  qword_140C654F0 = &qword_140C654F0;
  RetpolineStubsFunctionTable = dword_140C65504;
  if ( dword_140C65504 < 0 )
  {
    BugCheckParameter4 = 161LL;
    goto LABEL_18;
  }
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    RetpolineStubsFunctionTable = MiLockRetpolineStubs();
    if ( RetpolineStubsFunctionTable >= 0 )
    {
      qword_140C654E8 = MiReservePtes((__int64)&qword_140C695C0, 1u);
      if ( qword_140C654E8 )
      {
        RetpolineStubsFunctionTable = MiCreateRetpolineBitmap(&v4);
        if ( RetpolineStubsFunctionTable >= 0 )
        {
          MmAcquireLoadLock();
          RetpolineStubsFunctionTable = MiMarkRetpolineBits(PsNtosImageBase);
          if ( RetpolineStubsFunctionTable >= 0 )
          {
            if ( (unsigned int)RtlIsImageFullyRetpolined(PsHalImageBase)
              && (RetpolineStubsFunctionTable = MiMarkRetpolineBits(PsHalImageBase), RetpolineStubsFunctionTable < 0) )
            {
              BugCheckParameter4 = 166LL;
            }
            else
            {
              MmReleaseLoadLock((__int64)CurrentThread);
              retpoline_image_bitmap = v4 - 0x1FFFF0000000LL;
              RetpolineStubsFunctionTable = RtlCreateRetpolineStubsFunctionTable(
                                              v4 - 0x1FFFF0000000LL,
                                              Base,
                                              dword_140C65500 << 12);
              if ( RetpolineStubsFunctionTable >= 0 )
              {
                dword_140C02514 = dword_140C694FC;
                dword_140C02518 = dword_140C65500 << 12;
                return 0LL;
              }
              BugCheckParameter4 = 167LL;
            }
          }
          else
          {
            BugCheckParameter4 = 165LL;
          }
        }
        else
        {
          BugCheckParameter4 = 164LL;
        }
      }
      else
      {
        RetpolineStubsFunctionTable = -1073741670;
        BugCheckParameter4 = 163LL;
      }
    }
    else
    {
      BugCheckParameter4 = 162LL;
    }
LABEL_18:
    KeBugCheckEx(
      0x1Au,
      0x1082uLL,
      ((unsigned __int64)qword_140C69500 >> 2) & 1,
      RetpolineStubsFunctionTable,
      BugCheckParameter4);
  }
  return 0LL;
}

/*
 * XREFs of PfCheckDeprioritizeImage @ 0x1407E72DC
 * Callers:
 *     CcUnmapVacb @ 0x1406A7150 (CcUnmapVacb.c)
 *     PfProcessCreateNotification @ 0x1407E6CA0 (PfProcessCreateNotification.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

_BOOL8 __fastcall PfCheckDeprioritizeImage(unsigned int a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  BOOL v7; // ebx

  v1 = a1;
  if ( !a1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C64D20, 0LL);
  if ( dword_140C64D14 )
  {
    v3 = 0LL;
    v4 = (HIBYTE(v1)
        + 37
        * (BYTE6(v1)
         + 37
         * (BYTE5(v1)
          + 37
          * (BYTE4(v1) + 37 * (BYTE3(v1) + 37 * (BYTE2(v1) + 37 * (BYTE1(v1) + 37 * ((unsigned __int8)v1 + 11623883)))))))) & (unsigned int)(dword_140C64D14 - 1);
    v5 = *(_QWORD *)((v4 << dword_140C64D10) + qword_140C64D08);
    if ( v5 )
    {
      v6 = *(_QWORD *)((v4 << dword_140C64D10) + qword_140C64D08);
      do
      {
        v5 = v6;
        if ( v6 == (unsigned int)v1 )
          break;
        if ( !v3 )
        {
          v3 = 2654435761LL * (unsigned int)v1 + 1;
          if ( ((-79 * (_BYTE)v1) & 1) != 0 )
            v3 = 2654435761LL * (unsigned int)v1;
        }
        v4 = (unsigned int)(dword_140C64D14 - 1) & (v3 + v4);
        v5 = *(_QWORD *)((v4 << dword_140C64D10) + qword_140C64D08);
        v6 = v5;
      }
      while ( v5 );
    }
  }
  else
  {
    v5 = 0LL;
  }
  v7 = v5 != 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C64D20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C64D20);
  KeAbPostRelease((ULONG_PTR)&qword_140C64D20);
  KeLeaveCriticalRegion();
  return v7;
}

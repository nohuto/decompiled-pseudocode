/*
 * XREFs of MiCreatePerSessionProtos @ 0x14069F724
 * Callers:
 *     MiInsertInSystemSpace @ 0x14027B460 (MiInsertInSystemSpace.c)
 *     MiCloneImageVad @ 0x1405591C0 (MiCloneImageVad.c)
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     MiFinishCreateSection @ 0x1406532B0 (MiFinishCreateSection.c)
 *     MiValidateSectionCreate @ 0x14066B20C (MiValidateSectionCreate.c)
 *     MiMapSystemImage @ 0x14075C8B4 (MiMapSystemImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLocateSessionProtosInSubsection @ 0x1403284C8 (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x1403284F4 (MiUpdatePerSessionProto.c)
 *     MiDereferenceSubsectionProtos @ 0x14069F6BC (MiDereferenceSubsectionProtos.c)
 *     MiAllocatePerSessionProtos @ 0x14069F848 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x14069FA50 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rdi
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 *SessionProtosInSubsection; // rax
  int v11; // ecx
  int PerSessionProtos; // r13d
  __int64 v13; // r8
  __int64 *v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v6 = (volatile signed __int64 *)(v5 + 40);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  v7 = (__int64)(a1 + 16);
  v8 = (__int64)(a1 + 16);
  if ( a1 == (__int64 *)-128LL )
  {
LABEL_5:
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  while ( (*(_BYTE *)(v8 + 34) & 2) == 0 )
  {
LABEL_4:
    v8 = *(_QWORD *)(v8 + 16);
    if ( !v8 )
      goto LABEL_5;
  }
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(v8, a2);
  v14 = SessionProtosInSubsection;
  if ( SessionProtosInSubsection )
  {
    ++*((_DWORD *)SessionProtosInSubsection + 20);
    goto LABEL_4;
  }
  PerSessionProtos = MiAllocatePerSessionProtos(v11, 0, 0, 0, (__int64)&v14);
  if ( PerSessionProtos >= 0 )
  {
    v13 = (__int64)v14;
    *((_DWORD *)v14 + 16) = a2;
    MiUpdatePerSessionProto((__int64)a1, v8, v13, 1);
    goto LABEL_4;
  }
  v15 = 0LL;
  while ( v7 != v8 )
  {
    MiDereferenceSubsectionProtos(v7, a2, &v15);
    v7 = *(_QWORD *)(v7 + 16);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFreeSubsectionProtos(&v15);
  return (unsigned int)PerSessionProtos;
}

/*
 * XREFs of MiPrefetchControlArea @ 0x14078DBC4
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3B820 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiDereferenceInPageAutoBoostLock @ 0x14020CA70 (MiDereferenceInPageAutoBoostLock.c)
 *     MiGetInPageAutoBoostLock @ 0x14020CAA0 (MiGetInPageAutoBoostLock.c)
 *     MiPfCompletePrefetchIos @ 0x14020DA48 (MiPfCompletePrefetchIos.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MiPfExecuteReadList @ 0x1406A3F98 (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x1406A4E80 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrefetchControlArea(
        __int64 a1,
        signed __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rax
  ULONG_PTR v14; // rbp
  int List; // ebx
  int v17; // eax
  PVOID v18; // rcx
  PVOID P[2]; // [rsp+50h] [rbp-38h] BYREF

  P[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = MiGetInPageAutoBoostLock();
  v12 = v11;
  if ( v11 )
  {
    v13 = KeAbPreAcquire((__int64)v11, 0LL);
    v14 = v13;
    if ( v13 )
      *(_BYTE *)(v13 + 18) = 1;
    List = MiPfPrepareSequentialReadList(0LL, a1, a2, 0LL, a3, a4, a6, (__int64)v12, (__int64 *)P);
    if ( List >= 0 && P[0] )
    {
      ++BYTE6(CurrentThread[1].Queue);
      *((_DWORD *)P[0] + 26) = 0;
      v17 = MiPfPutPagesInTransition((__int64)P[0], 0, a5, a6);
      v18 = P[0];
      List = v17;
      if ( v17 >= 0 && *((PVOID *)P[0] + 15) != (char *)P[0] + 120 )
      {
        MiPfExecuteReadList((__int64)P[0], a5, a6, 0LL);
        MiPfCompletePrefetchIos((_QWORD **)P[0] + 15, 0LL, 0LL);
        v18 = P[0];
      }
      MiReleaseReadListResources((__int64)v18);
      --BYTE6(CurrentThread[1].Queue);
      ExFreePoolWithTag(P[0], 0);
    }
    if ( v14 )
      KeAbPostReleaseEx((ULONG_PTR)v12, v14);
    MiDereferenceInPageAutoBoostLock(v12);
  }
  else
  {
    List = -1073741670;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (unsigned int)List;
}

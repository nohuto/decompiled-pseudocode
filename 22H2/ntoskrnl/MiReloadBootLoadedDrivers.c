/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x140A4F9F0
 * Callers:
 *     MiInitializeDriverImages @ 0x140A4E6F4 (MiInitializeDriverImages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     RtlIsImageFullyRetpolined @ 0x140372608 (RtlIsImageFullyRetpolined.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiMapRetpolineStubs @ 0x140543F7C (MiMapRetpolineStubs.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14058FDFC (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     MmReleaseLoadLock @ 0x1406FE9E0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406FEA40 (MmAcquireLoadLock.c)
 *     MiLogRetpolineImageLoadEvents @ 0x14075C4B0 (MiLogRetpolineImageLoadEvents.c)
 *     MiProcessLoadConfigForDriver @ 0x14075C52C (MiProcessLoadConfigForDriver.c)
 *     VslReserveProtectedPages @ 0x14077D250 (VslReserveProtectedPages.c)
 *     MiMarkRetpolineBits @ 0x1408D0D04 (MiMarkRetpolineBits.c)
 *     MiHandleBootImage @ 0x140A4FB14 (MiHandleBootImage.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140A506C4 (MiApplyImportOptimizationToBootDrivers.c)
 */

__int64 __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  _KPROCESS *v2; // rdx
  ULONG_PTR *v3; // rdi
  __int64 i; // rbx
  ULONG_PTR *k; // rbx
  ULONG_PTR v7; // rbx
  PVOID v8; // rsi
  unsigned __int64 v9; // r15
  PIMAGE_NT_HEADERS v10; // r14
  unsigned __int64 v11; // r9
  NTSTATUS v12; // eax
  ULONG_PTR j; // rbx
  _QWORD v14[14]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v15[24]; // [rsp+C0h] [rbp-E8h] BYREF

  memset(v15, 0, 0xB8uLL);
  v15[3] = 0LL;
  LODWORD(v15[1]) = 20;
  MmAcquireLoadLock();
  v3 = (ULONG_PTR *)(a1 + 16);
  for ( i = *(_QWORD *)(a1 + 16); (ULONG_PTR *)i != v3; i = *(_QWORD *)i )
  {
    if ( PsNtosImageBase != *(PVOID *)(i + 48) )
      MiProcessLoadConfigForDriver(i);
    MiHandleBootImage(a1, i, v15);
  }
  MiFlushTbList((__int64)v15, v2);
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    v7 = *v3;
    if ( (ULONG_PTR *)*v3 != v3 )
    {
      do
      {
        v8 = *(PVOID *)(v7 + 48);
        v9 = ((unsigned __int64)*(unsigned int *)(v7 + 64) + 4095) >> 12;
        v10 = RtlImageNtHeader(v8);
        MiLogRetpolineImageLoadEvents(v7);
        if ( (KiSpeculationFeatures & 0x20000000000LL) != 0
          && v8 != PsNtosImageBase
          && v8 != PsHalImageBase
          && (v10->FileHeader.Characteristics & 1) == 0
          && v10->OptionalHeader.NumberOfRvaAndSizes > 5 )
        {
          if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v7 + 48)) )
          {
            v11 = MiMapRetpolineStubs((unsigned __int64)v8, v9);
            if ( (MiFlags & 0x10000) != 0 )
            {
              memset(v14, 0, 0x68uLL);
              v14[1] = v8;
              LOBYTE(v14[2]) = 1;
              v12 = VslpEnterIumSecureMode(2u, 221, 0, (__int64)v14);
            }
            else
            {
              v12 = RtlPerformRetpolineRelocationsOnImageEx(
                      (char *)v8,
                      (__int64)v8,
                      *(_DWORD *)(v7 + 64),
                      v11,
                      (__int64)Base,
                      1,
                      0LL,
                      0LL,
                      0);
            }
            if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741637 )
              KeBugCheckEx(0x1Au, 0x1080uLL, v7, *(_QWORD *)(v7 + 48), v12);
          }
          if ( (unsigned int)RtlIsImageFullyRetpolined(*(void **)(v7 + 48)) )
            MiMarkRetpolineBits(*(_QWORD *)(v7 + 48));
        }
        v7 = *(_QWORD *)v7;
      }
      while ( (ULONG_PTR *)v7 != v3 );
      for ( j = *(_QWORD *)(a1 + 16); (ULONG_PTR *)j != v3; j = *(_QWORD *)j )
      {
        if ( (*(_DWORD *)(j + 104) & 0x1000000) == 0 && !(unsigned int)RtlIsImageFullyRetpolined(*(void **)(j + 48)) )
          MiMarkRetpolineBits(*(_QWORD *)(j + 48));
      }
    }
  }
  MiApplyImportOptimizationToBootDrivers(a1);
  if ( (MiFlags & 0x8000) != 0 )
  {
    for ( k = (ULONG_PTR *)*v3; k != v3; k = (ULONG_PTR *)*k )
      VslReserveProtectedPages(0LL, k[6], 0, 2u);
  }
  MmReleaseLoadLock((__int64)KeGetCurrentThread());
  return 1LL;
}

__int64 __fastcall MiInitializeDriverImages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 *v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rbx
  unsigned __int64 i; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  int v13; // esi
  __int64 *v14; // r14
  unsigned int v15; // ebx
  PVOID Pool; // rax
  __int64 v17; // rbx
  unsigned __int16 *v19; // rbx
  unsigned __int16 *v20; // r14
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int16 *m; // rdi
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  __int16 v26; // si
  _QWORD *v27; // rcx
  __int64 ***v28; // rax
  __int64 **v29; // rbx
  unsigned __int64 v30; // rbx
  ULONG_PTR v31; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *j; // rbx
  int KernelCfgBitmapPageTables; // eax
  PVOID *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  int Config; // eax
  _QWORD *k; // rbx
  char v40; // [rsp+30h] [rbp-68h] BYREF
  char v41; // [rsp+38h] [rbp-60h] BYREF

  v1 = qword_140C6A238;
  v3 = MiSystemVaToDynamicBitmap(12);
  if ( !(unsigned int)MiBuildDynamicRegion(v3, v1, 0x8000000000uLL) )
    return 0LL;
  v4 = v1 + 0x7FFFFFFFFFLL;
  v5 = (unsigned __int64 *)&v41;
  v6 = 4LL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v5 - 1) = v1;
    *v5 = v4;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  MxMarkActiveDriverBits((unsigned int)&qword_140C66A68, v1, v4, (unsigned int)&v40, 3);
  v7 = qword_140C66A70;
  v8 = (_DWORD *)((((unsigned __int64)qword_140C66A70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = 0LL; i < qword_140C66A68; i += 0x8000LL )
  {
    if ( (*v8 & 0x800LL) == 0 )
    {
      if ( !(unsigned int)MiSplitBitmapPages(5, v7, 8LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&qword_140C66A68, i, 0x8000uLL);
    }
    v7 += 4096LL;
    v8 += 2;
  }
  qword_140C66A68 = i;
  v10 = MiSystemVaToDynamicBitmap(1);
  if ( (unsigned int)MiBuildDynamicRegion(v10, v11, 0x2000000000uLL) )
  {
    qword_140C655B8 = 0LL;
    qword_140C65580 = (__int64)&qword_140C65578;
    qword_140C65578 = (__int64)&qword_140C65578;
    if ( MmLargePageDriverBufferLength == -1 )
      goto LABEL_9;
    v19 = (unsigned __int16 *)&MmLargePageDriverBuffer;
    v20 = (unsigned __int16 *)((char *)&MmLargePageDriverBuffer
                             + 2 * (((unsigned __int64)(unsigned int)MmLargePageDriverBufferLength - 2) >> 1));
    if ( &MmLargePageDriverBuffer >= (_UNKNOWN *)v20 )
      goto LABEL_9;
    v21 = 0x100002601LL;
    while ( 1 )
    {
      v22 = *v19;
      if ( (unsigned __int16)v22 <= 0x20u && _bittest64(&v21, v22) || (_WORD)v22 == 12288 )
      {
        m = v19;
      }
      else
      {
        if ( (_DWORD)v22 == 42 )
        {
          byte_140C65575 = 1;
LABEL_9:
          BugCheckParameter3 = 0LL;
          v12 = &unk_140C655A0;
          v13 = 0;
          v14 = &qword_140C65598;
          while ( 1 )
          {
            v15 = (*(_DWORD *)(*v14 + 64) >> 12) + ((*(_DWORD *)(*v14 + 64) & 0xFFF) != 0);
            if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(*v14 + 48)) )
              v15 = (v15 + 511) & 0xFFFFFE00;
            Pool = MiAllocatePool(64, 8 * (((v15 & 0x3F) != 0) + (v15 >> 6)), 0x20204D6Du);
            if ( !Pool )
              return 0LL;
            ++v13;
            *v12 = v15;
            ++v14;
            v12[1] = Pool;
            v12 += 2;
            if ( v13 )
            {
              if ( !(unsigned int)MiInitializeBootLoadedDriverPfns(a1) )
                return 0LL;
              if ( !(unsigned int)MiInitializeDriverPtes(a1) )
                return 0LL;
              MiFreeKernelPadSections(
                *(_QWORD *)(qword_140C65598 + 48),
                *(_QWORD *)(qword_140C65598 + 48) + *(unsigned int *)(qword_140C65598 + 64));
              if ( !(unsigned int)MiReloadBootLoadedDrivers(a1) || !MiCreateInitialSystemWsles() )
                return 0LL;
              v17 = qword_140C655F8;
              VfInitBootDriversLoaded(a1);
              if ( v17 != qword_140C655F8 )
              {
                v28 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 3784LL);
                v29 = *v28;
                while ( v29 != (__int64 **)v28 )
                {
                  if ( ((_DWORD)v29[5] & 3) == 1 && (int)VslReapplyBootIndirectPatches(v29[10][6]) < 0 )
                    return 0LL;
                  v29 = (__int64 **)*v29;
                  v28 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 3784LL);
                }
              }
              qword_140C65590 = (__int64)&qword_140C65588;
              qword_140C65588 = &qword_140C65588;
              qword_140D81840 = KeQueryPerformanceCounter(0LL).QuadPart;
              if ( !(unsigned int)MiInitializeLoadedModuleList(a1) )
                return 0LL;
              if ( (MiFlags & 0x40000) != 0 )
              {
                v30 = qword_140C6A1C8;
                v31 = MiReservePtes((__int64)&qword_140C695C0, 0x20u);
                if ( !v31 )
                  return 0LL;
                if ( (int)VslInitializeSecureKernelCfg(v30, (__int64)(v31 << 25) >> 16) < 0 )
                  return 0LL;
                qword_140C654B0 = v30;
                qword_140C654A8 = 0x100000000000LL;
                if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                                      ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                      (((v30 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                      2048,
                                      9,
                                      0) )
                  return 0LL;
                qword_140C654B8 = 0LL;
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
                for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
                {
                  if ( _bittest16((const signed __int16 *)j + 55, 9u) )
                  {
                    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(
                                                  (__int64)j[6],
                                                  *((_DWORD *)j + 16),
                                                  0);
                    if ( KernelCfgBitmapPageTables < 0 )
                      KeBugCheckEx(0x422u, KernelCfgBitmapPageTables, (ULONG_PTR)j, 1uLL, 0LL);
                    *((_DWORD *)j + 26) |= 0x2100u;
                  }
                }
                v35 = (PVOID *)PsLoadedModuleList;
                if ( PsLoadedModuleList != &PsLoadedModuleList )
                {
                  do
                  {
                    if ( ((_DWORD)v35[13] & 0x2000) == 0 )
                    {
                      v36 = (__int64)v35[6];
                      if ( v36 == PsNtosImageBase )
                      {
                        v37 = RtlImageNtHeader(v36);
                        Config = MiMarkKernelImageCfgBits((__int64)v35, v37);
                        *((_DWORD *)v35 + 26) |= 0x2000u;
                      }
                      else
                      {
                        Config = MiProcessKernelCfgImageLoadConfig((__int64)v35, 0LL);
                        if ( Config < 0 )
                          goto LABEL_70;
                        Config = MiProcessKernelCfgImage((__int64)v35, 0, 0LL);
                      }
                      if ( Config < 0 )
LABEL_70:
                        KeBugCheckEx(0x422u, Config, (ULONG_PTR)v35, 0LL, 0LL);
                    }
                    v35 = (PVOID *)*v35;
                  }
                  while ( v35 != &PsLoadedModuleList );
                }
                MiProcessKernelCfgAddressTakenImports((PVOID *)PsLoadedModuleList);
                ExReleaseResourceLite(&PsLoadedModuleResource);
                KeLeaveCriticalRegionThread((__int64)CurrentThread);
                guard_icall_bitmap = qword_140C654B0 - 0x3FFFE0000000000LL;
              }
              if ( (MiFlags & 0x4000) != 0 )
              {
                for ( k = *(_QWORD **)(a1 + 16); k != (_QWORD *)(a1 + 16); k = (_QWORD *)*k )
                  VslReserveProtectedPages(0LL, k[6], 0, 2u);
              }
              LODWORD(MiFlags) = MiFlags | 0x80000000;
              RtlInitializeHistoryTable();
              return 1LL;
            }
          }
        }
        for ( m = v19; m < v20; ++m )
        {
          v24 = *m;
          if ( (unsigned __int16)v24 <= 0x20u && _bittest64(&v21, v24) )
            break;
          if ( (_WORD)v24 == 12288 )
            break;
        }
        v25 = MiAllocatePool(64, 0x20uLL, 0x704C6D4Du);
        if ( !v25 )
          goto LABEL_9;
        v26 = 2 * (m - v19);
        v25[3] = v19;
        *((_WORD *)v25 + 8) = v26;
        *((_WORD *)v25 + 9) = v26;
        v27 = (_QWORD *)qword_140C65580;
        if ( *(__int64 **)qword_140C65580 != &qword_140C65578 )
          __fastfail(3u);
        *v25 = &qword_140C65578;
        v25[1] = v27;
        v21 = 0x100002601LL;
        *v27 = v25;
        qword_140C65580 = (__int64)v25;
      }
      v19 = m + 1;
      if ( m + 1 >= v20 )
        goto LABEL_9;
    }
  }
  return 0LL;
}

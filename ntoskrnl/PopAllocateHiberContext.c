__int64 __fastcall PopAllocateHiberContext(_DWORD *a1)
{
  int DumpStack; // edi
  __int64 HighestPhysicalPage; // rax
  char *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  ULONG_PTR *v8; // r12
  ULONG_PTR v9; // r15
  char v10; // cl
  char v11; // r8
  __int16 v12; // dx
  char v13; // cl
  __int64 v14; // r8
  __int16 v15; // dx
  unsigned __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  bool v26; // zf
  unsigned int v27; // edx
  unsigned __int64 v28; // rcx
  __int64 Pages; // rax
  __int64 **v30; // r13
  __int64 *i; // rdi
  int v32; // eax
  __int64 v33; // rax
  PVOID *v34; // r12
  __int64 UnHibernatedMdl; // rax
  __int64 v36; // rax
  PVOID *v37; // rdi
  __int64 v38; // r14
  __int64 v39; // rcx
  unsigned __int64 v41; // [rsp+30h] [rbp-10h] BYREF
  __int16 v42; // [rsp+88h] [rbp+48h] BYREF
  __int64 v43; // [rsp+90h] [rbp+50h] BYREF
  __int64 v44; // [rsp+98h] [rbp+58h] BYREF

  v44 = 0LL;
  v41 = 0LL;
  v42 = 0;
  if ( dword_140C3CD88 != 5 )
    return 0;
  v43 = 0LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v4 = (char *)MemoryMap;
  qword_140C3CDA0 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + ((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1C8uLL);
  MmLockPreChargedPagedPool(qword_140C3CAB0, Length);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v4 + 3) = xmmword_140C3CAD0;
  *((_QWORD *)v4 + 25) = qword_140C3CAC0;
  *((_QWORD *)v4 + 40) = qword_140C3CB10;
  *((_QWORD *)v4 + 27) = qword_140C3CAF0;
  *((_QWORD *)v4 + 28) = qword_140C3CB20;
  *((_QWORD *)v4 + 29) = qword_140C3CB18;
  *((_OWORD *)v4 + 2) = xmmword_140C3CAE0;
  *((_QWORD *)v4 + 9) = v4 + 64;
  *((_QWORD *)v4 + 8) = v4 + 64;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    *a1 = 10;
    v7 = 42LL;
LABEL_58:
    PopCheckpointSystemSleep(v7);
    goto LABEL_59;
  }
  v8 = (ULONG_PTR *)(v4 + 168);
  DumpStack = IoGetDumpStack(v5, (__int64)(v4 + 168), v6, PopSimulate & 0x10);
  if ( DumpStack < 0 )
  {
    *a1 = 10;
    v7 = 43LL;
    goto LABEL_58;
  }
  v9 = *v8;
  v10 = 0;
  if ( dword_140C3CD6C < 0 && dword_140C3CD74 == 2 )
    v10 = 2;
  v11 = v10 | 1;
  v12 = __readcr4();
  v13 = v10 | 9;
  if ( (v12 & 0x1000) == 0 )
    v13 = v11;
  v14 = *((_QWORD *)v4 + 27);
  v4[1] = v13;
  v15 = qword_140C3CAC8;
  v16 = qword_140C3CAC8 & 0xFFFFFFFFFFFFF000uLL;
  v17 = qword_140C3CAC8;
  *(_QWORD *)v14 = 0LL;
  *(_WORD *)(v14 + 10) = 0;
  *(_QWORD *)(v14 + 32) = v16;
  *(_DWORD *)(v14 + 44) = v15 & 0xFFF;
  *(_WORD *)(v14 + 8) = 8 * ((((unsigned __int64)(v17 & 0xFFF) + 102399) >> 12) + 6);
  *(_DWORD *)(v14 + 40) = 98304;
  MmBuildMdlForNonPagedPool(*((PMDL *)v4 + 27));
  v18 = *((_QWORD *)v4 + 28);
  if ( v18 )
  {
    v19 = qword_140C3CB18;
    v20 = qword_140C3CB18;
    *(_QWORD *)v18 = 0LL;
    *(_WORD *)(v18 + 10) = 0;
    *(_DWORD *)(v18 + 40) = 4096;
    *(_WORD *)(v18 + 8) = 8 * (((unsigned __int16)((v20 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v18 + 32) = v19 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v18 + 44) = v19 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v4 + 28));
  }
  DumpStack = PopLoadResumeContext((__int64)v4);
  if ( DumpStack < 0 )
  {
    *a1 = 12;
    v7 = 44LL;
    goto LABEL_58;
  }
  DumpStack = BcdOpenStore(0LL, 2u, &v44);
  if ( DumpStack < 0 )
  {
    *a1 = 13;
    v7 = 45LL;
    goto LABEL_58;
  }
  v21 = v44;
  DumpStack = PopBcdEstablishResumeObject(v44, &v43);
  if ( DumpStack < 0 )
  {
    *a1 = 14;
    BcdCloseStore(v21);
    v7 = 46LL;
    goto LABEL_58;
  }
  DumpStack = PopBcdSetPendingResume(v21, v22, v23, v43);
  BcdCloseObject(v43);
  if ( DumpStack < 0 )
  {
    *a1 = 15;
    BcdCloseStore(v21);
    v7 = 47LL;
    goto LABEL_58;
  }
  BcdForciblyUnloadStore(v21);
  RtlClearAllBits((PRTL_BITMAP)v4 + 2);
  RtlSetAllBits((PRTL_BITMAP)v4 + 3);
  *((_DWORD *)v4 + 112) = PopGetHwConfigurationSignature();
  PopHiberInitializeResources(v4);
  if ( (int)PopGetBitlockerKeyLocation(&v41) >= 0 )
  {
    v24 = v41 >> 12;
    *((_QWORD *)v4 + 39) = v41 >> 12;
    PopDiscardRange(v4, v24, 4LL);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v4, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v4, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange(v4, qword_140C3CA88, 77824LL);
  ((void (__fastcall *)(char *))off_140C019B8[0])(v4);
  v25 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
  v26 = *((_QWORD *)v4 + 30) == 0LL;
  v27 = v25;
  *((_DWORD *)v4 + 38) = v25;
  if ( !v26 )
  {
    v28 = *((unsigned int *)v4 + 62);
    if ( v28 > v25 )
    {
      *((_DWORD *)v4 + 38) = v28;
      v27 = v28;
    }
  }
  Pages = PopAllocatePages(v27);
  DumpStack = *((_DWORD *)v4 + 47);
  *((_QWORD *)v4 + 18) = Pages;
  if ( DumpStack < 0 )
  {
    *a1 = 16;
    v7 = 48LL;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(*v8 + 280) )
  {
    v30 = (__int64 **)(*(_QWORD *)(*v8 + 272) + 40LL);
    for ( i = *v30; i != (__int64 *)v30; i = (__int64 *)*i )
    {
      v32 = *((_DWORD *)i + 16);
      if ( v32 )
      {
        if ( (v32 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v4, 0x1C8u, 0LL);
          PopCheckpointSystemSleep(49LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v9, (ULONG_PTR)v4);
        }
        v33 = 2LL;
        v34 = (PVOID *)(i + 9);
        v43 = 2LL;
        do
        {
          if ( *v34 )
          {
            PoSetHiberRange(v4, 0x8000u, *v34, *((unsigned int *)i + 16), 0x66756263u);
            v33 = v43;
          }
          ++v34;
          v43 = --v33;
        }
        while ( v33 );
      }
    }
  }
  else
  {
    v36 = PopAllocatePages(16LL);
    *(_QWORD *)(v9 + 8) = v36;
    if ( !v36 )
    {
      DumpStack = *((_DWORD *)v4 + 47);
      *a1 = 17;
      PopCheckpointSystemSleep(50LL);
      if ( DumpStack >= 0 )
        return (unsigned int)DumpStack;
LABEL_59:
      PopFreeHiberContext();
      return (unsigned int)DumpStack;
    }
    PoSetHiberRange(v4, 0x8000u, (PVOID)(v36 + 0x2000), 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v9 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v9, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v4, 0x1C8u, 0LL);
      PopCheckpointSystemSleep(51LL);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v9, (ULONG_PTR)v4);
    }
    v37 = (PVOID *)(v9 + 16);
    v38 = 2LL;
    do
    {
      if ( *v37 )
        PoSetHiberRange(v4, 0x8000u, *v37, *(unsigned int *)(v9 + 112), 0x66756263u);
      ++v37;
      --v38;
    }
    while ( v38 );
  }
  UnHibernatedMdl = PopGenerateUnHibernatedMdl(v4, (unsigned int)PopHiberScratchPages);
  *((_QWORD *)v4 + 15) = UnHibernatedMdl;
  if ( !UnHibernatedMdl )
  {
    *a1 = 18;
    v7 = 52LL;
    DumpStack = -1073741670;
    goto LABEL_58;
  }
  if ( VslVsmEnabled )
  {
    v4[452] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v4);
    if ( DumpStack < 0 )
    {
      *a1 = 19;
      v7 = 53LL;
      goto LABEL_58;
    }
  }
  else
  {
    v4[452] = 0;
  }
  if ( (int)ZwQuerySystemInformation(145LL, (__int64)&v42) >= 0 )
    v4[453] = v42;
  if ( (int)BgkResumePrepare(v4) >= 0 )
    PopBgkResumePrepared = 1;
  *((_DWORD *)v4 + 48) = *((_DWORD *)v4 + 64) - 1;
  if ( (HvlpFlags & 2) != 0 )
    HvlpAllocatePageListResources(v39, 16);
  return 0;
}

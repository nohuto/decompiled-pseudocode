/*
 * XREFs of EngAllocMem @ 0x1C00887E0
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0088140 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C016E490 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngCreateClip @ 0x1C0177EF0 (EngCreateClip.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  char v3; // si
  __int64 v4; // rdx
  size_t v5; // r14
  PVOID v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r8d
  __int64 Pool2; // rbx
  int v11; // esi
  struct _ERESOURCE *v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rax
  char v17; // bp
  PVOID BackTrace[20]; // [rsp+30h] [rbp-A8h] BYREF

  v3 = fl;
  if ( cjMemSize - 1 > 0xFFFFFFDE )
    return 0LL;
  LODWORD(v4) = cjMemSize + 32;
  if ( (unsigned int)v4 >= 0x2710000 )
    return 0LL;
  v5 = (unsigned int)v4;
  if ( (fl & 2) != 0 )
  {
    v7 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
           (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
           68LL,
           (unsigned int)v4,
           ulTag);
  }
  else
  {
    v6 = gpLeakTrackingAllocator;
    v4 = (unsigned int)v4;
    if ( (ulTag & *((_DWORD *)gpLeakTrackingAllocator + 10)) == ulTag )
    {
      v16 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != ulTag )
        {
          if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_5;
        }
        v17 = 0;
        if ( (unsigned int)v4 < 0x1000uLL || (v4 & 0xFFF) != 0 )
        {
          v17 = 1;
          v4 = (unsigned int)v4 + 16LL;
        }
        Pool2 = ExAllocatePool2(262LL, v4);
        if ( Pool2 )
        {
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v6,
                                    Pool2,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_7;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v6,
                                       Pool2,
                                       BackTrace) )
          {
            goto LABEL_7;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
        Pool2 = 0LL;
        goto LABEL_7;
      }
    }
LABEL_5:
    v7 = ExAllocatePool2(262LL, (unsigned int)v4);
  }
  Pool2 = v7;
LABEL_7:
  v11 = v3 & 1;
  if ( Pool2 )
  {
    if ( v11 )
      memset((void *)Pool2, 0, v5);
    *(_DWORD *)(Pool2 + 16) = 0;
    v12 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
    if ( MultiUserEngAllocListLock )
    {
      PsEnterPriorityRegion(v8);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v12);
    }
    v13 = (__int64 *)qword_1C029A000;
    if ( *(struct _LIST_ENTRY **)qword_1C029A000 != &MultiUserGreEngAllocList )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &MultiUserGreEngAllocList;
    *(_QWORD *)(Pool2 + 8) = v13;
    *v13 = Pool2;
    qword_1C029A000 = Pool2;
    if ( MultiUserEngAllocListLock )
    {
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          (unsigned int)&MultiUserGreEngAllocList,
          (unsigned int)&LockRelease,
          v9,
          (_DWORD)MultiUserEngAllocListLock,
          (__int64)L"MultiUserEngAllocListLock");
      if ( MultiUserEngAllocListLock )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
        PsLeavePriorityRegion(v14);
      }
    }
    Pool2 += 32LL;
  }
  return (PVOID)Pool2;
}

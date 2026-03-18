/*
 * XREFs of EngFreeMem @ 0x1C00486B0
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00485E0 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0088140 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B07D0 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C016E310 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C016E490 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngDeleteClip @ 0x1C0177FB0 (EngDeleteClip.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  int v1; // r8d
  struct _ERESOURCE *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx

  if ( pv )
  {
    v2 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
    v3 = (char *)pv - 32;
    if ( MultiUserEngAllocListLock )
    {
      PsEnterPriorityRegion(pv);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v2);
    }
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    if ( MultiUserEngAllocListLock )
    {
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          (_DWORD)v5,
          (unsigned int)&LockRelease,
          v1,
          (_DWORD)MultiUserEngAllocListLock,
          (__int64)L"MultiUserEngAllocListLock");
      if ( MultiUserEngAllocListLock )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
        PsLeavePriorityRegion();
      }
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v3);
  }
}

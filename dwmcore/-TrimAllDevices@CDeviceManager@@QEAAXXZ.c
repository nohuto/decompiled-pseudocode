/*
 * XREFs of ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x18028293C
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800CC2A8 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800D106C (-Trim@CD3DDevice@@QEAAXXZ.c)
 */

void __fastcall CDeviceManager::TrimAllDevices(CDeviceManager *this)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  CD3DDevice *v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = &stru_1803E7020;
  EnterCriticalSection(&stru_1803E7020);
  v1 = xmmword_1803E7050;
  for ( i = qword_1803E7048; i != v1; i += 16LL )
  {
    v3 = *(CD3DDevice **)i;
    if ( *(int *)(*(_QWORD *)i + 1088LL) >= 0 && *((_BYTE *)v3 + 1508) )
      CD3DDevice::Trim(v3);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
}

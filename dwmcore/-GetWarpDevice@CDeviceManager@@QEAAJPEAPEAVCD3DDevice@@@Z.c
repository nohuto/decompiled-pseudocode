/*
 * XREFs of ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x18028280C
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180020AA4 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180282B5C (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall CDeviceManager::GetWarpDevice(CDeviceManager *this, struct CD3DDevice **a2)
{
  unsigned int v2; // ebx
  _BYTE *v4; // rcx
  __int64 i; // rax
  struct _LUID *WarpAdapterLuid; // rax
  int Device; // eax
  __int64 v8; // rcx
  int v9; // edi
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v11 = &stru_1803E7020;
  EnterCriticalSection(&stru_1803E7020);
  for ( i = qword_1803E7048; i != (_QWORD)xmmword_1803E7050; i += 16LL )
  {
    v4 = *(_BYTE **)i;
    if ( *(int *)(*(_QWORD *)i + 1088LL) >= 0 && v4[1509] )
    {
      *a2 = (struct CD3DDevice *)v4;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 8));
      goto LABEL_9;
    }
  }
  WarpAdapterLuid = (struct _LUID *)CDisplayManager::GetWarpAdapterLuid((CDisplayManager *)v4);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *WarpAdapterLuid, a2);
  v9 = Device;
  if ( Device < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180383C70, 2u, Device, 0x10Fu, 0LL);
  v2 = v9;
LABEL_9:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v2;
}

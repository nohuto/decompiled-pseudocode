/*
 * XREFs of ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180285F4C
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180020B94 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x18027954C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034CA4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D734 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1802862D8 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
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
  v11 = &stru_1803EA130;
  EnterCriticalSection(&stru_1803EA130);
  for ( i = qword_1803EA158; i != (_QWORD)xmmword_1803EA160; i += 16LL )
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
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180386EE0, 2u, Device, 0x10Fu, 0LL);
  v2 = v9;
LABEL_9:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v2;
}

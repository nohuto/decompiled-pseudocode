/*
 * XREFs of ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1801EA094
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ @ 0x1801E9638 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x1801EA24C (-Present@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EA904 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x1801EB1E8 (-CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CD3DDevice *__fastcall CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
        struct CD3DDevice **this,
        const struct _LUID *a2,
        struct IFlipProducer *a3)
{
  CD3DDevice *v5; // rcx
  CD3DDevice *v7; // rdx
  CD3DDevice *v8; // rcx

  v5 = *this;
  if ( !v5 || *((_QWORD *)v5 + 112) != *a2 || *((int *)v5 + 272) < 0 )
  {
    *this = 0LL;
    v7 = 0LL;
    if ( v5 )
    {
      CD3DDevice::Release(v5);
      v7 = *this;
    }
    if ( a2->LowPart != g_luidZero.LowPart || a2->HighPart != g_luidZero.HighPart )
    {
      *this = 0LL;
      if ( v7 )
        CD3DDevice::Release(v7);
      if ( (int)CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *a2, this) >= 0 )
      {
        v8 = *this;
        if ( (*((_BYTE *)*this + 904) & 0x18) != 0 )
        {
          if ( (*(int (__fastcall **)(struct IFlipProducer *, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, *((_QWORD *)v8 + 69)) >= 0 )
            return *this;
          v8 = *this;
        }
        *this = 0LL;
        if ( v8 )
          CD3DDevice::Release(v8);
      }
    }
  }
  return *this;
}

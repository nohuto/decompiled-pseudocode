/*
 * XREFs of ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1800ED9C0
 * Callers:
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x1800ED9A0 (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005F710 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FFF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

struct CD3DDevice *__fastcall CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
        struct CD3DDevice **this,
        const struct _LUID *a2,
        struct IFlipProducer *a3)
{
  CD3DDevice *v5; // rcx
  CDeviceManager *v7; // rcx

  v5 = *this;
  if ( !v5 || *((_QWORD *)v5 + 117) != *a2 || *((int *)v5 + 282) < 0 )
  {
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(this);
    if ( a2->LowPart || a2->HighPart )
    {
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(this);
      if ( (int)CDeviceManager::GetDevice(v7, *a2, this) >= 0
        && ((*((_BYTE *)*this + 944) & 0x18) == 0
         || (*(int (__fastcall **)(struct IFlipProducer *, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, *((_QWORD *)*this + 74)) < 0) )
      {
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(this);
      }
    }
  }
  return *this;
}

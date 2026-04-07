/*
 * XREFs of ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x1800B96F0
 * Callers:
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18008A8FC (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CIconicAnimatedVisual::OnRepresentationTypeUpdated(CIconicAnimatedVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  (*(void (__fastcall **)(CIconicAnimatedVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 128LL);
  v2 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 38) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 42) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 36) = 0LL;
  }
  (*(void (__fastcall **)(CIconicAnimatedVisual *))(*(_QWORD *)this + 64LL))(this);
}

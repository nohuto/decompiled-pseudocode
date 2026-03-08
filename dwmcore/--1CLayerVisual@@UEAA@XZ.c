/*
 * XREFs of ??1CLayerVisual@@UEAA@XZ @ 0x1800F4334
 * Callers:
 *     ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x1800F42F0 (--_GCLayerVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F44A4 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 */

void __fastcall CLayerVisual::~CLayerVisual(CLayerVisual *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 89) == 0LL;
  *(_QWORD *)this = &CLayerVisual::`vftable';
  if ( !v1 )
    CLayerVisual::ClearTreeEffect(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 88));
  *((_QWORD *)this + 88) = 0LL;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 90);
  CVisual::~CVisual(this);
}

/*
 * XREFs of ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x18008F45C
 * Callers:
 *     _SpatialRimDeviceCollection::Create_::_1_::dtor$0 @ 0x18004EAB8 (_SpatialRimDeviceCollection--Create_--_1_--dtor$0.c)
 *     _DockDeviceCollection::Create_::_1_::dtor$0 @ 0x18004EEAF (_DockDeviceCollection--Create_--_1_--dtor$0.c)
 *     _DockableDeviceCollection::Create_::_1_::dtor$0 @ 0x18004F0C0 (_DockableDeviceCollection--Create_--_1_--dtor$0.c)
 *     _MobileButtonDeviceCollection::Create_::_1_::dtor$0 @ 0x180097DD2 (_MobileButtonDeviceCollection--Create_--_1_--dtor$0.c)
 *     _ConsumerControlDeviceCollection::Create_::_1_::dtor$0 @ 0x1800996A2 (_ConsumerControlDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x18008F47C (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SpatialRimDeviceCollection>::operator()(a1, *a1);
  return result;
}

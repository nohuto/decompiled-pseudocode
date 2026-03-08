/*
 * XREFs of ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x1C0052EA4
 * Callers:
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C003E8FC (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C005364C (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0055060 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxIoTarget::GetTargetIoType(FxIoTarget *this)
{
  unsigned int Flags; // ecx

  Flags = this->m_TargetDevice->Flags;
  if ( (Flags & 4) != 0 )
    return 2;
  else
    return (Flags >> 3) & 2 | 1;
}

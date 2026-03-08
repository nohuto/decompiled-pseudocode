/*
 * XREFs of IoStartNextPacket @ 0x140554E40
 * Callers:
 *     DifIoStartNextPacketWrapper @ 0x1405DF2D0 (DifIoStartNextPacketWrapper.c)
 * Callees:
 *     IopStartNextPacket @ 0x1404571CC (IopStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x1405557DC (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket((__int64)DeviceObject, Cancelable);
}

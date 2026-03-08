/*
 * XREFs of IopGetNumaNodeInformation @ 0x140948150
 * Callers:
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 * Callees:
 *     IopGetDevicePDO @ 0x14023FFC4 (IopGetDevicePDO.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoGetDeviceNumaNode @ 0x14085FE10 (IoGetDeviceNumaNode.c)
 */

__int64 __fastcall IopGetNumaNodeInformation(__int64 a1, USHORT *a2)
{
  __int64 v2; // rcx
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DEVICE_OBJECT *v5; // rdi
  NTSTATUS DeviceNumaNode; // ebx
  USHORT NodeNumber; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  NodeNumber = 0;
  DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(v2);
  v5 = DevicePDO;
  if ( !DevicePDO )
    return 3221225486LL;
  DeviceNumaNode = IoGetDeviceNumaNode(DevicePDO, &NodeNumber);
  ObfDereferenceObject(v5);
  if ( DeviceNumaNode >= 0 )
    *a2 = NodeNumber;
  return (unsigned int)DeviceNumaNode;
}

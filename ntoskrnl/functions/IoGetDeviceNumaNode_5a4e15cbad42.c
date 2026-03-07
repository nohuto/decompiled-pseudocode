NTSTATUS __stdcall IoGetDeviceNumaNode(PDEVICE_OBJECT Pdo, PUSHORT NodeNumber)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  _DWORD *DeviceNode; // rdx
  _WORD *v5; // rcx

  if ( !Pdo )
    return -1073741811;
  DeviceObjectExtension = Pdo->DeviceObjectExtension;
  DeviceNode = DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  v5 = DeviceObjectExtension->DeviceNode;
  if ( *((_DWORD *)v5 + 165) <= 0xFFFFFFFD )
  {
    *NodeNumber = v5[330];
    return 0;
  }
  if ( !KeQueryHighestNodeNumber() )
  {
    *NodeNumber = 0;
    return 0;
  }
  return -1073741275;
}

/*
 * XREFs of PipSetDevNodeStateFlags @ 0x140956AA8
 * Callers:
 *     IopQueueDeviceResetEvent @ 0x14095467C (IopQueueDeviceResetEvent.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1402409C0 (IoGetDeviceAttachmentBaseRef.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PipSetDevNodeStateFlags(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  unsigned int v3; // ebx
  PDEVICE_OBJECT v4; // rdx
  _DWORD *DeviceNode; // rcx
  int v6; // eax

  PpDevNodeLockTree(1);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  v3 = 0;
  v4 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
  {
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && (unsigned int)(DeviceNode[75] - 789) > 1 )
    {
      v6 = DeviceNode[176];
      if ( (v6 & 0x8000) != 0 )
        v3 = 255;
      else
        DeviceNode[176] = v6 | 0x8000;
    }
    else
    {
      v3 = -1073741738;
    }
    ObfDereferenceObject(v4);
  }
  else
  {
    v3 = -1073741808;
  }
  PpDevNodeUnlockTree(1);
  return v3;
}

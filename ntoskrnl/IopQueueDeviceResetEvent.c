/*
 * XREFs of IopQueueDeviceResetEvent @ 0x14095467C
 * Callers:
 *     PiProcessDeviceResetAction @ 0x14055DCD8 (PiProcessDeviceResetAction.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PnpRequestDeviceRemoval @ 0x140862294 (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     IopMarkDeviceToBeReset @ 0x140954500 (IopMarkDeviceToBeReset.c)
 *     PipSetDevNodeStateFlags @ 0x140956AA8 (PipSetDevNodeStateFlags.c)
 */

__int64 __fastcall IopQueueDeviceResetEvent(struct _DEVICE_OBJECT *MaxDataSize, _BYTE *a2)
{
  __int64 DeviceNode; // rdi
  int v5; // eax
  __int64 result; // rax
  int v7; // ecx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v10; // rcx
  unsigned __int16 *v11; // rdi
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx

  if ( !MaxDataSize )
    goto LABEL_26;
  DeviceNode = (__int64)MaxDataSize->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (v5 = *(_DWORD *)(DeviceNode + 396), (v5 & 0x20000) != 0) )
  {
    IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)MaxDataSize->Size);
    DriverObject = MaxDataSize->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &MaxDataSize->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)MaxDataSize->DriverObject->DriverName.Buffer,
          (PVOID)MaxDataSize->DriverObject->DriverName.Length);
      }
    }
    v10 = (char *)MaxDataSize->DeviceObjectExtension->DeviceNode;
    if ( v10 )
    {
      v11 = (unsigned __int16 *)(v10 + 40);
      IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)0x388);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v11 + 1), (PVOID)*v11);
      }
      v12 = (char *)MaxDataSize->DeviceObjectExtension->DeviceNode + 56;
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)MaxDataSize->DeviceObjectExtension->DeviceNode + 28));
      }
      v13 = *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 2);
      if ( v13 && *(_WORD *)(v13 + 56) )
      {
        IoAddTriageDumpDataBlock(v13 + 56, (PVOID)2);
        v14 = *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 64), (PVOID)*(unsigned __int16 *)(v14 + 56));
      }
    }
LABEL_26:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)MaxDataSize, 0LL, 0LL);
  }
  *a2 = 0;
  if ( (v5 & 0x10) == 0 )
    return 3221226166LL;
  result = PipSetDevNodeStateFlags(MaxDataSize);
  if ( (int)result >= 0 && (_DWORD)result != 255 )
  {
    v7 = *(_DWORD *)(DeviceNode + 300);
    if ( (unsigned int)(v7 - 787) <= 1 )
    {
      PipSetDevNodeProblem(DeviceNode, 54, 0);
      return IopMarkDeviceToBeReset((ULONG_PTR)MaxDataSize);
    }
    else if ( v7 == 785 )
    {
      return 259LL;
    }
    else
    {
      result = PnpRequestDeviceRemoval(DeviceNode, 0, 54, 0);
      if ( (int)result >= 0 )
        *a2 = 1;
    }
  }
  return result;
}

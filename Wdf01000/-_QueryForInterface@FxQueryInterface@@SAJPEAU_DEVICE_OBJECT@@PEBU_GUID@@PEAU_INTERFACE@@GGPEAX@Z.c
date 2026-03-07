__int64 __fastcall FxQueryInterface::_QueryForInterface(
        _DEVICE_OBJECT *TopOfStack,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        _NAMED_PIPE_CREATE_PARAMETERS *InterfaceSpecificData)
{
  PIRP v10; // rax
  _IRP *v11; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  _NAMED_PIPE_CREATE_PARAMETERS *v13; // rcx
  unsigned __int16 v14; // ax
  unsigned int v15; // ebx
  FxAutoIrp irp; // [rsp+40h] [rbp+8h] BYREF

  v10 = IoAllocateIrp(TopOfStack->StackSize, 0);
  v11 = v10;
  if ( v10 )
  {
    CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
    v13 = InterfaceSpecificData;
    v10->IoStatus.Status = -1073741637;
    irp.m_Irp = v10;
    v14 = Version;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = v13;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)Interface;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = Size;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = v14;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)InterfaceType;
    v15 = FxIrp::SendIrpSynchronously(&irp, TopOfStack);
    IoFreeIrp(v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v15;
}

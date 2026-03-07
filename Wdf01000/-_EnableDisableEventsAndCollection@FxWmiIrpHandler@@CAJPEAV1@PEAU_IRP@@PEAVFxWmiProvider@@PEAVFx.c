__int64 __fastcall FxWmiIrpHandler::_EnableDisableEventsAndCollection(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int Status; // edi
  unsigned __int8 v8; // r8
  unsigned int v9; // esi
  unsigned __int8 v10; // r8
  unsigned int m_Flags; // eax
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v13)(unsigned __int64, _QWORD); // r9
  int v14; // eax
  unsigned int v15; // eax

  Irp->IoStatus.Information = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x30 )
  {
    Status = -1073741811;
    goto $Done_14;
  }
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    v10 = 1;
  }
  else
  {
    if ( CurrentStackLocation->MinorFunction != 5 )
    {
      if ( CurrentStackLocation->MinorFunction == 6 )
      {
        v8 = 1;
      }
      else
      {
        if ( CurrentStackLocation->MinorFunction != 7 )
        {
          Status = Irp->IoStatus.Status;
          goto $Done_14;
        }
        v8 = 0;
      }
      v9 = 2;
      Provider->m_DataBlockControlEnabled = v8;
      goto LABEL_15;
    }
    v10 = 0;
  }
  m_Flags = Provider->m_Flags;
  v9 = 1;
  Provider->m_EventControlEnabled = v10;
  if ( (m_Flags & 4) != 0 )
    Provider->m_TracingHandle = *(_QWORD *)&CurrentStackLocation->Parameters.CreatePipe.Parameters->CompletionMode;
LABEL_15:
  if ( !Provider->m_FunctionControl.m_Method )
  {
    Status = 0;
    goto $Done_14;
  }
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Provider);
  v14 = v13(ObjectHandleUnchecked, v9);
  Status = v14;
  if ( v14 == 259 )
  {
    Status = -1073741823;
  }
  else if ( v14 >= 0 )
  {
    goto $Done_14;
  }
  if ( v9 == 1 )
  {
    v15 = Provider->m_Flags;
    Provider->m_EventControlEnabled = 0;
    if ( (v15 & 4) != 0 )
      Provider->m_TracingHandle = 0LL;
  }
  else
  {
    Provider->m_DataBlockControlEnabled = 0;
  }
$Done_14:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}

NTSTATUS __fastcall HalpDispatchPnp(_QWORD *Object, PIRP Irp)
{
  _DWORD *v2; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int MinorFunction; // ecx
  unsigned int v7; // ecx
  unsigned int DeviceRelations; // eax
  unsigned int Status; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // zf
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  unsigned int v18; // eax
  NTSTATUS Interface; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx

  v2 = (_DWORD *)Object[8];
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( *v2 == 192 )
  {
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( MinorFunction <= 7 )
    {
      if ( MinorFunction == 7 )
      {
        DeviceRelations = HalpQueryDeviceRelations(Object);
        goto LABEL_5;
      }
      Status = 0;
      if ( !CurrentStackLocation->MinorFunction )
      {
        if ( v2[8] == 129 )
        {
          HalpInitializeLateSystemActions();
          HalpInitSystemHelper(25LL, 26LL, 0LL);
        }
        goto LABEL_10;
      }
      v20 = MinorFunction - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 - 1 > 1 )
                goto LABEL_7;
            }
          }
        }
        goto LABEL_10;
      }
      Status = v2[8] != 132 ? 0xC0000001 : 0;
    }
    else
    {
      v7 = MinorFunction - 8;
      if ( !v7 )
      {
        DeviceRelations = HalpQueryInterface(
                            (_DWORD)Object,
                            CurrentStackLocation->Parameters.WMI.ProviderId,
                            CurrentStackLocation->Parameters.QueryInterface.Version,
                            CurrentStackLocation->Parameters.CreatePipe.Parameters,
                            CurrentStackLocation->Parameters.QueryInterface.Size,
                            CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
                            (__int64)&Irp->IoStatus.Information);
LABEL_5:
        Status = DeviceRelations;
        goto LABEL_6;
      }
      v11 = v7 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          DeviceRelations = HalpQueryResources(Object, &Irp->IoStatus.Information);
          goto LABEL_5;
        }
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 8;
          if ( !v14 )
          {
            DeviceRelations = HalpQueryIdPdo(
                                Object,
                                CurrentStackLocation->Parameters.Read.Length,
                                &Irp->IoStatus.Information);
            goto LABEL_5;
          }
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 == 2;
            goto LABEL_17;
          }
        }
        else
        {
          if ( v2[8] == 129 )
          {
            DeviceRelations = HalpQueryAcpiResourceRequirements((unsigned int **)&Irp->IoStatus.Information);
            goto LABEL_5;
          }
          if ( v2[8] != 130 && v2[8] != 131 )
          {
            v16 = v2[8] == 132;
LABEL_17:
            if ( !v16 )
              goto LABEL_7;
          }
        }
        Status = 0;
        goto LABEL_10;
      }
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( WORD1(SecurityContext->SecurityQos) != 1 )
        goto LABEL_7;
      v18 = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFEC3;
      SecurityContext->FullCreateOptions = 1;
      HIDWORD(SecurityContext->SecurityQos) = v18 | 0xC0;
      Status = 0;
      LODWORD(SecurityContext->AccessState) = -1;
      HIDWORD(SecurityContext->AccessState) = -1;
      HIDWORD(SecurityContext[1].AccessState) = 4;
      SecurityContext[1].DesiredAccess = 4;
      *(PSECURITY_QUALITY_OF_SERVICE *)((char *)&SecurityContext[2].SecurityQos + 4) = 0LL;
      HIDWORD(SecurityContext[2].AccessState) = 0;
    }
LABEL_6:
    if ( Status == -1073741637 )
    {
LABEL_7:
      Status = Irp->IoStatus.Status;
LABEL_8:
      IofCompleteRequest(Irp, 0);
      return Status;
    }
LABEL_10:
    Irp->IoStatus.Status = Status;
    goto LABEL_8;
  }
  if ( *v2 != 193 )
  {
    Status = -1073741808;
    goto LABEL_10;
  }
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 7u:
      Interface = HalpQueryDeviceRelations(Object);
      break;
    case 8u:
      Interface = HalpQueryInterface(
                    (_DWORD)Object,
                    CurrentStackLocation->Parameters.WMI.ProviderId,
                    CurrentStackLocation->Parameters.QueryInterface.Version,
                    CurrentStackLocation->Parameters.CreatePipe.Parameters,
                    CurrentStackLocation->Parameters.QueryInterface.Size,
                    CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
                    (__int64)&Irp->IoStatus.Information);
      break;
    case 0x13u:
      Interface = HalpQueryIdFdo(
                    (unsigned int)CurrentStackLocation->MinorFunction - 8,
                    CurrentStackLocation->Parameters.Read.Length,
                    &Irp->IoStatus.Information);
      break;
    default:
      return HalpPassIrpFromFdoToPdo((__int64)Object, Irp);
  }
  Status = Interface;
  if ( (int)(Interface + 0x80000000) >= 0 && Interface != -1073741637 )
    goto LABEL_10;
  if ( Interface != -1073741637 )
    Irp->IoStatus.Status = Interface;
  return HalpPassIrpFromFdoToPdo((__int64)Object, Irp);
}

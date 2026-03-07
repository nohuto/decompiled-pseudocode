__int64 __fastcall IoWMICompleteRequest(__int64 a1, __int64 a2, IRP *a3, int a4, int a5)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r10
  unsigned int v6; // ebx
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rdx
  unsigned int CompletionMode; // r11d
  unsigned int v10; // r8d
  __int64 MaximumInstances; // rdi
  unsigned int *p_OutboundQuota; // r10
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r11d
  bool v17; // zf

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a4;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( CurrentStackLocation->MinorFunction )
  {
    if ( CurrentStackLocation->MinorFunction == 1 )
    {
      v10 = Parameters[1].InboundQuota + a5;
      if ( a4 >= 0 )
      {
        Parameters->NamedPipeType = v10;
        *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
        goto LABEL_8;
      }
    }
    else
    {
      if ( CurrentStackLocation->MinorFunction != 9 )
        goto LABEL_12;
      v10 = a5 + Parameters[1].OutboundQuota;
      if ( a4 >= 0 )
      {
        Parameters->NamedPipeType = v10;
        *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
        Parameters[1].DefaultTimeout.LowPart = a5;
        goto LABEL_8;
      }
    }
    v17 = a4 == -1073741789;
LABEL_10:
    if ( v17 )
      goto LABEL_11;
LABEL_12:
    v10 = 0;
    goto LABEL_8;
  }
  CompletionMode = Parameters[1].CompletionMode;
  v10 = CompletionMode + a5;
  MaximumInstances = Parameters[1].MaximumInstances;
  if ( a4 < 0 )
  {
    v17 = a4 == -1073741789;
    goto LABEL_10;
  }
  if ( v10 > CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
LABEL_11:
    Parameters[1].CompletionMode = v10;
    Parameters->NamedPipeType = 56;
    v10 = 56;
    Parameters[1].ReadMode = 32;
    v6 = 0;
    goto LABEL_8;
  }
  p_OutboundQuota = &Parameters[1].OutboundQuota;
  *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
  Parameters->NamedPipeType = v10;
  v13 = MaximumInstances;
  if ( (_DWORD)MaximumInstances )
  {
    do
    {
      --v13;
      p_OutboundQuota[2 * v13 + 1] = p_OutboundQuota[v13];
    }
    while ( v13 );
    v14 = MaximumInstances;
    do
    {
      *p_OutboundQuota = CompletionMode;
      v15 = p_OutboundQuota[1] + CompletionMode + 7;
      p_OutboundQuota += 2;
      CompletionMode = v15 & 0xFFFFFFF8;
      --v14;
    }
    while ( v14 );
  }
LABEL_8:
  a3->IoStatus.Information = v10;
  a3->IoStatus.Status = v6;
  IofCompleteRequest(a3, 0);
  return v6;
}

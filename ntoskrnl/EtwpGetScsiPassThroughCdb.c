/*
 * XREFs of EtwpGetScsiPassThroughCdb @ 0x1405FB950
 * Callers:
 *     EtwpTraceOpticalIo @ 0x1405FC180 (EtwpTraceOpticalIo.c)
 *     EtwpTraceOpticalIoInit @ 0x1405FC430 (EtwpTraceOpticalIoInit.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140245910 (IoIs32bitProcess.c)
 */

IO_STATUS_BLOCK *__fastcall EtwpGetScsiPassThroughCdb(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v2; // rbx
  ULONG LowPart; // edx
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  struct _IRP *MasterIrp; // rdi
  unsigned int Options; // esi
  bool v8; // bp
  char *v9; // rax
  bool v10; // cf

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v2 = 0LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart != 315396 )
  {
    v4 = LowPart - 315412;
    if ( (unsigned int)v4 > 0x34 )
      return (IO_STATUS_BLOCK *)v2;
    v5 = 0x11000000000001LL;
    if ( !_bittest64(&v5, v4) )
      return (IO_STATUS_BLOCK *)v2;
  }
  MasterIrp = a1->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    return (IO_STATUS_BLOCK *)v2;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v8 = ((LowPart - 315460) & 0xFFFFFFFB) != 0;
  if ( IoIs32bitProcess(a1) )
  {
    if ( v8 )
    {
      v9 = (char *)&MasterIrp->AssociatedIrp.SystemBuffer + 4;
      v10 = Options < 0x2C;
LABEL_12:
      if ( v10 )
        return 0LL;
      return (IO_STATUS_BLOCK *)v9;
    }
    if ( Options >= 0x34 )
      return &MasterIrp->IoStatus;
  }
  else
  {
    if ( v8 )
    {
      v9 = (char *)&MasterIrp->ThreadListEntry.Flink + 4;
      v10 = Options < 0x38;
      goto LABEL_12;
    }
    if ( Options >= 0x40 )
      return (IO_STATUS_BLOCK *)&MasterIrp->IoStatus.Information;
  }
  return (IO_STATUS_BLOCK *)v2;
}

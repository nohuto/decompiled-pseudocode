/*
 * XREFs of ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C002A0A8
 * Callers:
 *     ?_ChangeSingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002A820 (-_ChangeSingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@.c)
 *     ?_ChangeSingleItem@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002A8F0 (-_ChangeSingleItem@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?_ExecuteMethod@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002AAD0 (-_ExecuteMethod@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002ABB0 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?_QuerySingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002B140 (-_QuerySingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     ?CompleteWmiExecuteMethodRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z @ 0x1C0029F74 (-CompleteWmiExecuteMethodRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z.c)
 *     ?CompleteWmiQueryAllDataRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z @ 0x1C0029FDC (-CompleteWmiQueryAllDataRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z.c)
 *     ?CompleteWmiQuerySingleInstanceRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z @ 0x1C002A044 (-CompleteWmiQuerySingleInstanceRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::CompleteWmiRequest(
        FxWmiIrpHandler *this,
        _IRP *Irp,
        int Status,
        unsigned int BufferUsed)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v5; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v8; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = Status;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      FxWmiIrpHandler::CompleteWmiQueryAllDataRequest(this, Irp, Status, BufferUsed);
      goto LABEL_13;
    case 1u:
      FxWmiIrpHandler::CompleteWmiQuerySingleInstanceRequest(this, Irp, Status, BufferUsed);
      goto LABEL_13;
    case 2u:
    case 3u:
      if ( Status == -1073741789 )
      {
        m_Globals = this->m_Globals;
        v5 = -1073741113;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_dd(m_Globals, 5u, 0xCu, 0x18u, WPP_FxWmiIrpHandler_cpp_Traceguids, -1073741789, -1073741113);
      }
      goto LABEL_10;
  }
  if ( CurrentStackLocation->MinorFunction != 9 )
  {
LABEL_10:
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = v5;
    goto LABEL_13;
  }
  FxWmiIrpHandler::CompleteWmiExecuteMethodRequest(this, Irp, Status, BufferUsed);
LABEL_13:
  v8 = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return v8;
}

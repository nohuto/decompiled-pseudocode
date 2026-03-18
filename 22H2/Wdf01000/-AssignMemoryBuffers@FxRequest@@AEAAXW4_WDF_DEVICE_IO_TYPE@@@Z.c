/*
 * XREFs of ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0012E68
 * Callers:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012F10 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C004F1D0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0077B80 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0077EE8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequest::AssignMemoryBuffers(FxRequest *this, _WDF_DEVICE_IO_TYPE IoType)
{
  _IRP *m_Irp; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  unsigned __int8 MajorFunction; // r9
  void *UserBuffer; // rax
  void *MasterIrp; // rax
  int v7; // edx

  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction < 3u )
    return;
  if ( MajorFunction <= 4u )
  {
    v7 = IoType - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return;
      MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
    }
    else
    {
      if ( m_Irp->RequestorMode )
        return;
      MasterIrp = m_Irp->UserBuffer;
    }
    this->m_SystemBuffer.m_Buffer = MasterIrp;
    goto LABEL_12;
  }
  if ( (unsigned __int8)(MajorFunction - 14) > 1u )
    return;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3 )
  {
    case 0u:
      this->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
      UserBuffer = m_Irp->AssociatedIrp.MasterIrp;
LABEL_10:
      this->m_OutputBuffer.m_Buffer = UserBuffer;
      break;
    case 1u:
    case 2u:
      this->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
      break;
    case 3u:
      if ( MajorFunction != 15 && m_Irp->RequestorMode )
        return;
      this->m_SystemBuffer.m_Buffer = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      UserBuffer = m_Irp->UserBuffer;
      goto LABEL_10;
  }
  MasterIrp = this->m_SystemBuffer.m_Buffer;
LABEL_12:
  if ( MasterIrp )
    this->m_RequestBaseStaticFlags |= 1u;
  if ( this->m_OutputBuffer.m_Buffer )
    this->m_RequestBaseStaticFlags |= 2u;
}

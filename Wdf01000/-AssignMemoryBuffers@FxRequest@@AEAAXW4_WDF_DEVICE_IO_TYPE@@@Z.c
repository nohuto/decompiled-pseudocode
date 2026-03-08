/*
 * XREFs of ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C000D986
 * Callers:
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C000DB80 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C00676D4 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0067A34 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequest::AssignMemoryBuffers(FxRequest *this, _WDF_DEVICE_IO_TYPE IoType)
{
  _IRP *m_Irp; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  void *MasterIrp; // rax
  int v5; // edx
  void *UserBuffer; // rax

  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 3 || CurrentStackLocation->MajorFunction == 4 )
  {
    v5 = IoType - 1;
    if ( !v5 )
    {
      if ( m_Irp->RequestorMode )
        return;
      UserBuffer = m_Irp->UserBuffer;
      goto LABEL_18;
    }
    if ( v5 != 1 )
      return;
LABEL_15:
    UserBuffer = m_Irp->AssociatedIrp.MasterIrp;
LABEL_18:
    this->m_SystemBuffer.m_Buffer = UserBuffer;
    goto LABEL_19;
  }
  if ( (unsigned int)CurrentStackLocation->MajorFunction - 14 > 1 )
    return;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3 )
  {
    case 0u:
      this->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
      MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
LABEL_12:
      this->m_OutputBuffer.m_Buffer = MasterIrp;
      break;
    case 1u:
    case 2u:
      goto LABEL_15;
    case 3u:
      if ( CurrentStackLocation->MajorFunction != 15 && m_Irp->RequestorMode )
        return;
      this->m_SystemBuffer.m_Buffer = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      MasterIrp = m_Irp->UserBuffer;
      goto LABEL_12;
  }
LABEL_19:
  if ( this->m_SystemBuffer.m_Buffer )
    this->m_RequestBaseStaticFlags |= 1u;
  if ( this->m_OutputBuffer.m_Buffer )
    this->m_RequestBaseStaticFlags |= 2u;
}

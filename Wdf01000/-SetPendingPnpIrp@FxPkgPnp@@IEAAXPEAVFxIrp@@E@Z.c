void __fastcall FxPkgPnp::SetPendingPnpIrp(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 MarkIrpPending)
{
  const void *id; // rax
  const void **v6; // rdx
  _QWORD *flags; // r9
  ULONG_PTR ObjectHandleUnchecked; // rax
  const _GUID *v9; // [rsp+20h] [rbp-38h]

  if ( this->m_PendingPnPIrp )
  {
    id = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_cqcqq(
      this->m_Globals,
      *((_QWORD *)*v6 + 23),
      (unsigned int)*v6,
      (unsigned __int16)flags,
      v9,
      *(_BYTE *)(*((_QWORD *)*v6 + 23) + 1LL),
      *v6,
      *(_BYTE *)(flags[23] + 1LL),
      flags,
      id);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    FxVerifierBugCheckWorker(this->m_Globals, WDF_PNP_FATAL_ERROR, ObjectHandleUnchecked, (ULONG_PTR)Irp->m_Irp);
  }
  if ( MarkIrpPending )
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingPnPIrp = Irp->m_Irp;
}

int __fastcall FxPkgFdo::DispatchSystemQueryPower(FxPkgFdo *this, FxIrp *Irp)
{
  int Power; // eax

  if ( FxPkgPnp::PowerPolicyIsWakeEnabled(this)
    && (Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(
                  this,
                  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart),
        Irp->m_Irp->IoStatus.Status = Power,
        Power < 0) )
  {
    return FxPkgPnp::CompletePowerRequest(this, Irp, Power);
  }
  else
  {
    return FxPkgFdo::_PowerPassDown(this, Irp);
  }
}

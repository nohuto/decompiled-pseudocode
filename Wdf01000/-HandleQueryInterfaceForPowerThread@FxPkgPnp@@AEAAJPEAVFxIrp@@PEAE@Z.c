/*
 * XREFs of ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0072F70
 * Callers:
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0072CCC (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryInterfaceForPowerThread(
        FxPkgPnp *this,
        FxIrp *Irp,
        unsigned __int8 *CompleteRequest)
{
  FxPkgPnp_vtbl *v3; // rax
  __int64 result; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v8; // ebx

  v3 = this->__vftable;
  *CompleteRequest = 1;
  result = ((__int64 (__fastcall *)(FxPkgPnp *))v3->SendIrpSynchronously)(this);
  if ( (_DWORD)result == -1073741637 )
  {
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->Parameters.QueryInterface.Version == 1
      && CurrentStackLocation->Parameters.QueryInterface.Size >= this->m_PowerThreadInterface.Interface.Size )
    {
      memmove(
        CurrentStackLocation->Parameters.SetFile.FileObject,
        &this->m_PowerThreadInterface,
        this->m_PowerThreadInterface.Interface.Size);
      v8 = 0;
      this->m_PowerThreadInterface.Interface.InterfaceReference(this->m_PowerThreadInterface.Interface.Context);
    }
    else
    {
      return (unsigned int)-1073741306;
    }
    return v8;
  }
  return result;
}

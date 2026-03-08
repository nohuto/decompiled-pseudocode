/*
 * XREFs of ?Dispose@FxDpc@@UEAAEXZ @ 0x1C00231C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxDpc::Dispose(FxDpc *this)
{
  FxObject *m_Object; // rcx

  this->m_RunningDown = 1;
  KeFlushQueuedDpcs();
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    m_Object->Release(m_Object, this, 405, "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxdpc.cpp");
  }
  this->Release(this, this, 411, "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxdpc.cpp");
  return 1;
}

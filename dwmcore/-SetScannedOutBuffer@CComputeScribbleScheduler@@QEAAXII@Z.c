/*
 * XREFs of ?SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z @ 0x180200C50
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801F894C (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CComputeScribbleScheduler::SetScannedOutBuffer(RTL_SRWLOCK *this, int a2, int a3)
{
  RTL_SRWLOCK *v3; // rbp

  v3 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  LODWORD(this[22].Ptr) = a3 - a2;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}

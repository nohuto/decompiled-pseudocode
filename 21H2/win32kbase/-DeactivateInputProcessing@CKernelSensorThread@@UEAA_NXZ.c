/*
 * XREFs of ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x1C0054070
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x1C00540A4 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x1C0054720 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 */

bool __fastcall CKernelSensorThread::DeactivateInputProcessing(CKernelSensorThread *this)
{
  bool v2; // bl

  v2 = CInputThreadBase::DeactivateInputProcessing(this);
  if ( v2 )
    CKernelSensorThread::DestroyEventHandles(this);
  return v2;
}

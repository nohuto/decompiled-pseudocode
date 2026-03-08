/*
 * XREFs of ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C0177D00
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0178240 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkDispMgrOperation @ 0x1C01D5490 (DxgkDispMgrOperation.c)
 *     DxgkDispMgrReferenceObjectByHandle @ 0x1C02F9970 (DxgkDispMgrReferenceObjectByHandle.c)
 *     DxgkDispMgrSourceOperation @ 0x1C02F9A60 (DxgkDispMgrSourceOperation.c)
 *     DxgkDispMgrTargetOperation @ 0x1C02F9D90 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(
        void **a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = ObfDereferenceObjectWithTag(v2, 0x4B677844u);
    *a1 = 0LL;
  }
  return result;
}

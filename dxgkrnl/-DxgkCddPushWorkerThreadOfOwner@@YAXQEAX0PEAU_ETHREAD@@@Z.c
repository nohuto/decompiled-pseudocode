/*
 * XREFs of ?DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z @ 0x1C01DC230
 * Callers:
 *     <none>
 * Callees:
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C00165C4 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 */

void __fastcall DxgkCddPushWorkerThreadOfOwner(PERESOURCE *a1, PERESOURCE *a2, struct _ERESOURCE *a3)
{
  if ( a1 )
    DXGADAPTER::PushWorkerThreadOfExclusiveOwner(a1, a3);
  if ( a2 )
  {
    if ( a1 != a2 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(a2, a3);
  }
}

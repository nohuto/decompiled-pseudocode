/*
 * XREFs of ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180034A90
 * Callers:
 *     <none>
 * Callees:
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180034AC8 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppDestroy(struct _CEM_RC_OBJECT *a1)
{
  HampAppCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}

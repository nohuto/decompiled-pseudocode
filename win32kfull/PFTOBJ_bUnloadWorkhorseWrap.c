/*
 * XREFs of PFTOBJ_bUnloadWorkhorseWrap @ 0x1C026E490
 * Callers:
 *     <none>
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01181FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 */

_BOOL8 __fastcall PFTOBJ_bUnloadWorkhorseWrap(PFTOBJ *a1, struct PFF *a2, struct PFF **a3, int a4)
{
  return PFTOBJ::bUnloadWorkhorse(a1, a2, a3, a4);
}

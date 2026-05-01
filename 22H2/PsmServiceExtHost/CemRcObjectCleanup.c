/*
 * XREFs of CemRcObjectCleanup @ 0x180034B80
 * Callers:
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800349A8 (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x180034B58 (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 *     ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003BEC0 (-HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003C100 (-HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800810A0 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CempRcTableRemoveObject @ 0x180034BC0 (CempRcTableRemoveObject.c)
 */

__int64 __fastcall CemRcObjectCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[3] )
    __int2c();
  if ( a1[2] != -1LL )
    result = CempRcTableRemoveObject(a1[4] & 0xFFFFFFFFFFFFFFFCuLL, a1);
  a1[4] |= 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}

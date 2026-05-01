/*
 * XREFs of ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x18003C540
 * Callers:
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x18003C160 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ?HampSystemEdpIsManaged@@YAKXZ @ 0x18003C5E4 (-HampSystemEdpIsManaged@@YAKXZ.c)
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x18003C6BC (-HampSystemCdplIsManaged@@YAKXZ.c)
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x18003C894 (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

void __fastcall HampSessionInitialize(struct _HOST_ACTIVITY_MANAGER *a1, int a2, struct _HAM_SESSION *a3)
{
  int v6; // ebp

  memset_0(a3, 0, 0x88uLL);
  HamRcNodeInitializeFromRoot(
    (void (*)(struct _CEM_RC_OBJECT *))HampUserDestroy,
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 128),
    a3);
  *((_OWORD *)a3 + 6) = 0LL;
  RtlInitializeSRWLock((char *)a3 + 96);
  v6 = 0;
  *((_DWORD *)a3 + 26) = 0;
  *((_DWORD *)a3 + 22) = a2;
  if ( HampSystemCdplIsManaged() || HampSystemEdpIsManaged() )
    v6 = 1;
  *((_DWORD *)a3 + 33) &= ~1u;
  *((_DWORD *)a3 + 33) |= v6;
}

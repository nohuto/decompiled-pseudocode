/*
 * XREFs of ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C003AA08
 * Callers:
 *     FreeHidData @ 0x1C000DC20 (FreeHidData.c)
 *     DestroyEventHook @ 0x1C0035F80 (DestroyEventHook.c)
 *     FreeHook @ 0x1C0039160 (FreeHook.c)
 *     FreeTimer @ 0x1C003A800 (FreeTimer.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     FreeDdeXact @ 0x1C01FD370 (FreeDdeXact.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C003AA40 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 */

IdentifyPrimaryDestroyTarget *__fastcall IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        void *a2)
{
  struct _HANDLEENTRY *v3; // rax

  *(_BYTE *)this = 0;
  v3 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(a2);
  IdentifyPrimaryDestroyTarget::Identify(this, v3);
  return this;
}

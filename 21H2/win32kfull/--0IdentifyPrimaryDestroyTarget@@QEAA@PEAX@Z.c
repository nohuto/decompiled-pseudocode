/*
 * XREFs of ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C002338C
 * Callers:
 *     FreeHidData @ 0x1C0003270 (FreeHidData.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     DestroyEventHook @ 0x1C00E5FC0 (DestroyEventHook.c)
 *     FreeDdeXact @ 0x1C02177D0 (FreeDdeXact.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C0070ECC (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
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

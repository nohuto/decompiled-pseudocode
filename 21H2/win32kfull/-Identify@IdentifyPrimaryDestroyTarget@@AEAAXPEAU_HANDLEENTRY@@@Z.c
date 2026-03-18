/*
 * XREFs of ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C0070ECC
 * Callers:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C002338C (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     DestroySMWP @ 0x1C0047920 (DestroySMWP.c)
 *     FreeHook @ 0x1C0070000 (FreeHook.c)
 *     FreeTimer @ 0x1C0070D80 (FreeTimer.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall IdentifyPrimaryDestroyTarget::Identify(Identify *this, struct _HANDLEENTRY *a2)
{
  if ( !gbInDestroyHandleTableObjects && ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
  {
    *(_BYTE *)this = gphePrimaryDestroyTarget == 0LL;
    if ( gphePrimaryDestroyTarget )
    {
      if ( a2 != gphePrimaryDestroyTarget )
        ++gcSecondaryDestroyTargets;
    }
    else
    {
      gphePrimaryDestroyTarget = a2;
    }
  }
}

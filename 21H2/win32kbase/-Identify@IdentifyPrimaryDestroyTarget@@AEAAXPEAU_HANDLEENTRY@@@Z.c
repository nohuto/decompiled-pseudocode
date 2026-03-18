/*
 * XREFs of ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C004E740
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00305C8 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C004E70C (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 */

void __fastcall IdentifyPrimaryDestroyTarget::Identify(Identify *this, struct _HANDLEENTRY *a2)
{
  if ( !gbInDestroyHandleTableObjects && UserIsUserCritSecInExclusive() )
  {
    if ( gphePrimaryDestroyTarget )
    {
      *(_BYTE *)this = 0;
      if ( a2 != gphePrimaryDestroyTarget )
        ++gcSecondaryDestroyTargets;
    }
    else
    {
      *(_BYTE *)this = 1;
      gphePrimaryDestroyTarget = a2;
    }
  }
}

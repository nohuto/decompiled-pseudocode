/*
 * XREFs of ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C00868AC
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00779D0 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0086878 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall IdentifyPrimaryDestroyTarget::Identify(Identify *this, struct _HANDLEENTRY *a2, __int64 a3, __int64 a4)
{
  if ( !gbInDestroyHandleTableObjects && IS_USERCRIT_OWNED_EXCLUSIVE((__int64)this, (__int64)a2, a3, a4) )
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

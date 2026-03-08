/*
 * XREFs of ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C003AA40
 * Callers:
 *     DestroySMWP @ 0x1C003A920 (DestroySMWP.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C003AA08 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall IdentifyPrimaryDestroyTarget::Identify(Identify *this, struct _HANDLEENTRY *a2)
{
  __int64 v4; // rax

  if ( !gbInDestroyHandleTableObjects )
  {
    v4 = SGDGetUserSessionState(this);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 8)) == 1 )
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
}

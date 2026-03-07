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

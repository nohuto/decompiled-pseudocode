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

// write access to const memory has been detected, the output may be wrong!
void __fastcall IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget(IdentifyPrimaryDestroyTarget *this)
{
  if ( *(_BYTE *)this )
    gphePrimaryDestroyTarget = 0LL;
}

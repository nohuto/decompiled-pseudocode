/*
 * XREFs of ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18021DD20
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     SysFreeString_0 @ 0x1800915D0 (SysFreeString_0.c)
 */

void __fastcall winrt::hresult_out_of_bounds::~hresult_out_of_bounds(BSTR *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(this + 2);
  if ( *v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v2);
  if ( *this )
  {
    SysFreeString_0(*this);
    *this = 0LL;
  }
}

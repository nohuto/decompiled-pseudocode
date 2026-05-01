/*
 * XREFs of ??$create_instance@UIIdentityStore2@@@winrt@@YA?AU?$com_ptr@UIIdentityStore2@@@0@AEBUguid@0@IPEAX@Z @ 0x180119A78
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2 @ 0x180122CC0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180122CC0.c)
 * Callees:
 *     CoCreateInstance_0 @ 0x18009134F (CoCreateInstance_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::create_instance<IIdentityStore2>(_QWORD *a1, const IID *a2)
{
  unsigned int v3; // eax
  LPVOID v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v3 = CoCreateInstance_0(a2, 0LL, 1u, &winrt::impl::guid_storage<IIdentityStore2>::value, &v5);
  winrt::check_hresult(v3);
  *a1 = v5;
  return a1;
}

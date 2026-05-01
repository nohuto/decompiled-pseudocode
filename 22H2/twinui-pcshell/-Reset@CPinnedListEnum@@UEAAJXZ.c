/*
 * XREFs of ?Reset@CPinnedListEnum@@UEAAJXZ @ 0x18015B430
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CPinnedListEnum::Reset(CPinnedListEnum *this)
{
  *((_DWORD *)this + 6) = 0;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 4);
  return 0LL;
}

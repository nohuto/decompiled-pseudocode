/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1804CBCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_42dce70c870a3964e7319458b8bf7bca_>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  std::wstring::_Tidy_deallocate(a1 + 3);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}

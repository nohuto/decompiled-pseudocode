/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d35354d926b4f7c0d2efe226c9ec2890___::_scalar_deleting_destructor_ @ 0x1800D0130
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d35354d926b4f7c0d2efe226c9ec2890___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  std::wstring::_Tidy_deallocate(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}

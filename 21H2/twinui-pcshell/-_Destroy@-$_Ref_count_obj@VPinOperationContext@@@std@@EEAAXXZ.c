/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VPinOperationContext@@@std@@EEAAXXZ @ 0x180144A50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F290 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 */

void __fastcall std::_Ref_count_obj<PinOperationContext>::_Destroy(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx

  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    a1 + 13,
    0LL);
  std::wstring::_Tidy_deallocate(a1 + 9);
  std::wstring::_Tidy_deallocate(a1 + 5);
  v2 = (std::_Ref_count_base *)a1[3];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}

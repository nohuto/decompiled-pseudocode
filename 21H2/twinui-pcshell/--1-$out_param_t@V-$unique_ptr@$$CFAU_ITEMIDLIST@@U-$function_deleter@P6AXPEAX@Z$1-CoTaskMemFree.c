/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x180152CFC
 * Callers:
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18015D990 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$2 @ 0x18015DC0B (_CPinList--_CreateTombstone_--_1_--dtor$2.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$4 @ 0x18015DC23 (_CPinList--_CreateTombstone_--_1_--dtor$4.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F290 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 */

__int64 __fastcall wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8));
  return result;
}

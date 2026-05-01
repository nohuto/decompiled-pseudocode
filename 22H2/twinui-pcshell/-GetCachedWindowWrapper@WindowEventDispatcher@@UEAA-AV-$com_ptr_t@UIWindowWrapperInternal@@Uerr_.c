/*
 * XREFs of ?GetCachedWindowWrapper@WindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180325410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18001D120 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 */

__int64 *__fastcall WindowEventDispatcher::GetCachedWindowWrapper(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rcx
  __int64 *result; // rax

  v4 = a1 - 16;
  try
  {
    WindowEventDispatcher::GetCachedView(v4, a2, a3);
    result = a2;
  }
  catch ( ... )
  {
    result = a2;
    *a2 = 0LL;
  }
  return result;
}

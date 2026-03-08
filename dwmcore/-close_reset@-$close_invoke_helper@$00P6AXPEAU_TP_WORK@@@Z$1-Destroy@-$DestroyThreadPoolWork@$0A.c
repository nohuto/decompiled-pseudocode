/*
 * XREFs of ?close_reset@?$close_invoke_helper@$00P6AXPEAU_TP_WORK@@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZPEAU1@@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x18028B8B4
 * Callers:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18028B910 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::close_invoke_helper<1,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),_TP_WORK *>::close_reset(
        PTP_WORK pwk)
{
  DWORD LastError; // ebx

  LastError = GetLastError();
  WaitForThreadpoolWorkCallbacks(pwk, 1);
  CloseThreadpoolWork(pwk);
  SetLastError(LastError);
}

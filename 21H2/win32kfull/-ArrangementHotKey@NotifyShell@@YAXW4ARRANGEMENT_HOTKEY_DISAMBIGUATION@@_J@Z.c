/*
 * XREFs of ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1C023625C
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00F67B8 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     _lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_ @ 0x1C02092F0 (_lambda_543ccbf82fb17ad955b7b487bb59a6ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C00F4DAC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::ArrangementHotKey(int a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax

  if ( anonymous_namespace_::NotifyShellSimplePayload(0LL, 4, a1, a2) && !a1 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    CInputGlobals::SetPtiLastWoken(
      gpInputGlobals,
      *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 320LL) + 16LL),
      0);
  }
}

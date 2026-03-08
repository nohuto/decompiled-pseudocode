/*
 * XREFs of ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1C021FB48
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C0098B5C (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     _lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_ @ 0x1C01E9E70 (_lambda_543ccbf82fb17ad955b7b487bb59a6ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0220058 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::ArrangementHotKey(int a1, int a2)
{
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax

  if ( (unsigned __int8)anonymous_namespace_::NotifyShellSimplePayload(0, 4, a1, a2, 0) )
  {
    if ( !a1 )
    {
      v4 = PtiCurrentShared(v3);
      CInputGlobals::SetPtiLastWoken(
        gpInputGlobals,
        *(struct tagTHREADINFO **)(*(_QWORD *)(*((_QWORD *)v4 + 57) + 320LL) + 16LL),
        0);
    }
  }
}

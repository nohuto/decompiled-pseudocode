/*
 * XREFs of ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1C021CF88
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C0050780 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     _lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_ @ 0x1C01E8D80 (_lambda_543ccbf82fb17ad955b7b487bb59a6ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C021D458 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::ArrangementHotKey(int a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagTHREADINFO *v7; // rax

  if ( (unsigned __int8)anonymous_namespace_::NotifyShellSimplePayload(0, 4, a1, a2, 0) )
  {
    if ( !a1 )
    {
      v7 = PtiCurrentShared(v4, v3, v5, v6);
      CInputGlobals::SetPtiLastWoken(
        gpInputGlobals,
        *(struct tagTHREADINFO **)(*(_QWORD *)(*((_QWORD *)v7 + 57) + 328LL) + 16LL),
        0);
    }
  }
}

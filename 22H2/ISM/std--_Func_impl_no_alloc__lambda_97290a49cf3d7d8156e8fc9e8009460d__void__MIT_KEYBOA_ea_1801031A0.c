/*
 * XREFs of std::_Func_impl_no_alloc__lambda_97290a49cf3d7d8156e8fc9e8009460d__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call @ 0x1801031A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_97290a49cf3d7d8156e8fc9e8009460d__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call(
        __int64 a1,
        HWND **a2)
{
  __int64 v2; // rbx
  unsigned int PropW; // eax

  v2 = *(_QWORD *)(a1 + 8);
  PropW = *(_DWORD *)(v2 + 72);
  if ( !PropW )
    PropW = (unsigned int)GetPropW(**a2, L"Microsoft.Windows.WindowFactory.ViewId");
  InputAttemptedTargetManager::ProcessInputAttempt((InputAttemptedTargetManager *)(v2 + 64), PropW);
}

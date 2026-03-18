/*
 * XREFs of NtMITSetKeyboardOverriderState @ 0x1C0155B50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C003E734 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 __fastcall NtMITSetKeyboardOverriderState(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 KeyboardProcessor; // rax

  v5 = 0LL;
  if ( CInputThreadBase::IsInputThread(gpInputThread) )
  {
    KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
    if ( KeyboardProcessor )
    {
      LOBYTE(v5) = a1 != 0;
      _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 24), v5);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v2, v3, v4);
  }
  return v5;
}

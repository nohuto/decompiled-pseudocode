/*
 * XREFs of NtMITSetKeyboardOverriderState @ 0x1C016BEE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C0080388 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 __fastcall NtMITSetKeyboardOverriderState(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 KeyboardProcessor; // rax

  v6 = 0LL;
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v3, v2, v4, v5);
    if ( KeyboardProcessor )
    {
      LOBYTE(v6) = a1 != 0;
      _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 24), v6);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  return v6;
}

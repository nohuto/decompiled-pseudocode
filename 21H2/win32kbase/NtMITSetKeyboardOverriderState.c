/*
 * XREFs of NtMITSetKeyboardOverriderState @ 0x1C012B6C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0042200 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C004CC74 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 __fastcall NtMITSetKeyboardOverriderState(int a1)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 KeyboardProcessor; // rax

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  v5 = 0LL;
  if ( v3 )
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
    UserSetLastError(5LL, v4);
  }
  return v5;
}

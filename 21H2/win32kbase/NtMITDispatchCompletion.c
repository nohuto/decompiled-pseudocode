/*
 * XREFs of NtMITDispatchCompletion @ 0x1C0042080
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0042200 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     UserDispatchMITCompletion @ 0x1C0042228 (UserDispatchMITCompletion.c)
 */

__int64 __fastcall NtMITDispatchCompletion(__int64 a1, __int64 a2)
{
  CInputThread *v2; // rdi
  bool v5; // bl
  __int64 v6; // rdx

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v2);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
    UserDispatchMITCompletion(a1, a2);
  else
    UserSetLastError(5LL, v6);
  return 0LL;
}

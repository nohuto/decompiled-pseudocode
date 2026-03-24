/*
 * XREFs of NtMITSetKeyboardInputRoutingPolicy @ 0x1C00B62C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0043670 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00B6390 (SetKeyboardInputRoutingPolicy.c)
 */

__int64 __fastcall NtMITSetKeyboardInputRoutingPolicy(unsigned int a1)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  CInputThread *v4; // rdi
  int v5; // ebx

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v3
    && (v4 = gpInputThread,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v4, 0LL),
        v5 = *((_DWORD *)v4 + 4),
        ExReleasePushLockSharedEx(v4, 0LL),
        KeLeaveCriticalRegion(),
        v5 == 2) )
  {
    return SetKeyboardInputRoutingPolicy(a1);
  }
  else
  {
    return 3221225506LL;
  }
}

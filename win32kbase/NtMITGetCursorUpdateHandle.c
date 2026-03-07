__int64 __fastcall NtMITGetCursorUpdateHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CursorUpdateHandle; // rbx
  __int64 v9; // r8
  __int64 v10; // r9

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)
    || (BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc,
        p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL),
        LODWORD(BufferChainingDpc) = BufferChainingDpc->DeferredRoutine,
        ExReleasePushLockSharedEx(p_DpcListEntry, 0LL),
        KeLeaveCriticalRegion(),
        (_DWORD)BufferChainingDpc == 2) )
  {
    CursorUpdateHandle = -1LL;
    UserSetLastError(5);
  }
  else
  {
    CursorUpdateHandle = GetCursorUpdateHandle();
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return CursorUpdateHandle;
}

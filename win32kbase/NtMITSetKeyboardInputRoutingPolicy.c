/*
 * XREFs of NtMITSetKeyboardInputRoutingPolicy @ 0x1C00CD720
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00CD7B4 (SetKeyboardInputRoutingPolicy.c)
 */

__int64 __fastcall NtMITSetKeyboardInputRoutingPolicy(unsigned int a1)
{
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx

  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)
    && (BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc,
        p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL),
        LODWORD(BufferChainingDpc) = BufferChainingDpc->DeferredRoutine,
        ExReleasePushLockSharedEx(p_DpcListEntry, 0LL),
        KeLeaveCriticalRegion(),
        (_DWORD)BufferChainingDpc == 2) )
  {
    return SetKeyboardInputRoutingPolicy(a1);
  }
  else
  {
    return 3221225506LL;
  }
}

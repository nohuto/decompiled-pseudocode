/*
 * XREFs of ProcgrpRevertToUserGroupAffinityThread @ 0x1C0091FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ProcgrpRevertToUserGroupAffinityThread(_GROUP_AFFINITY *PreviousAffinity)
{
  if ( !PreviousAffinity->Reserved[0] && !PreviousAffinity->Reserved[1] && !PreviousAffinity->Reserved[2] )
  {
    if ( PreviousAffinity->Mask )
    {
      if ( !PreviousAffinity->Group )
        (*(void (__fastcall **)(unsigned __int64))&WPP_GLOBAL_WDF_Control.DeviceLock.Header.Lock)(PreviousAffinity->Mask);
    }
    else
    {
      KeRevertToUserAffinityThread();
    }
  }
}

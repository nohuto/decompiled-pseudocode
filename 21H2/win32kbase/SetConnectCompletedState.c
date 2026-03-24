/*
 * XREFs of SetConnectCompletedState @ 0x1C00B09B0
 * Callers:
 *     xxxRemoteConnect @ 0x1C01177E0 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C0015180 (ReferenceDwmApiPort.c)
 *     PowerConnectionEvent @ 0x1C00B0A0C (PowerConnectionEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  int v1; // eax
  PVOID v2; // rcx

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( qword_1C0257E70 )
      v1 = qword_1C0257E70();
    else
      v1 = -1073741637;
    if ( v1 >= 0 )
    {
      v2 = ReferenceDwmApiPort();
      if ( qword_1C0257E78 )
        qword_1C0257E78(v2);
    }
  }
}

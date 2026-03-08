/*
 * XREFs of CleanupShellHandwritingInputDelegation @ 0x1C015D590
 * Callers:
 *     <none>
 * Callees:
 *     ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C015D54C (-ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall CleanupShellHandwritingInputDelegation(DelegationAPI *a1, struct tagTHREADINFO *a2)
{
  DelegationAPI::ScrubShellHandwritingDelegateThread(a1, a2);
}

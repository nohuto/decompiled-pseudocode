/*
 * XREFs of ?GetTrustLevel@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1801656D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::GetTrustLevel(__int64 a1, int *a2)
{
  return StubImmersiveApplication::IsRunning((StubImmersiveApplication *)(a1 - 24), a2);
}

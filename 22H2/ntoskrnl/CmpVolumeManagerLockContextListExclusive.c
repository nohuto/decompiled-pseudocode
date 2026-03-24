/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x1407D5378
 * Callers:
 *     SshpSetCollectionActive @ 0x14057FD7C (SshpSetCollectionActive.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140721364 (CmpVolumeManagerGetContextForFile.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DD54 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmpVolumeManagerLockContextListExclusive(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}

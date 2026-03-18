/*
 * XREFs of SepInitializationPhase0 @ 0x140B57104
 * Callers:
 *     SeInitSystem @ 0x140B53278 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x1406B69CC (ObInitializeFastReference.c)
 *     SeMakeSystemToken @ 0x140B576DC (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x140B57DA8 (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x140B57E58 (SepTokenInitialization.c)
 *     SepVariableInitialization @ 0x140B57F18 (SepVariableInitialization.c)
 *     SepRmDbInitialization @ 0x140B6DDC4 (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  __int64 SystemToken; // rax
  bool v3; // zf

  if ( !(unsigned __int8)SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *($B2204E9EE8E7DD8EE814BFFAF87CA578 *)((char *)&CurrentThread[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFFFFF7);
  Process[1].Affinity.StaticBitmap[5] = 0LL;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference((__int64 *)&Process[1].Affinity.StaticBitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  v3 = Process[1].Affinity.StaticBitmap[5] == 0;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return !v3;
}

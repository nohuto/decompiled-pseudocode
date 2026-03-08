/*
 * XREFs of SepInitializationPhase0 @ 0x140B48678
 * Callers:
 *     SeInitSystem @ 0x140B48368 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x14070A3AC (ObInitializeFastReference.c)
 *     SeMakeSystemToken @ 0x140B48C50 (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x140B49464 (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x140B49514 (SepTokenInitialization.c)
 *     SepVariableInitialization @ 0x140B4A3A0 (SepVariableInitialization.c)
 *     SepRmDbInitialization @ 0x140B69A18 (SepRmDbInitialization.c)
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

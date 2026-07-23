/*
 * XREFs of SepInitializationPhase0 @ 0x140A48920
 * Callers:
 *     SeInitSystem @ 0x140A488EC (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x1406AD8DC (ObInitializeFastReference.c)
 *     SeMakeSystemToken @ 0x140A48F10 (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x140A499FC (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x140A49AAC (SepTokenInitialization.c)
 *     SepVariableInitialization @ 0x140A49B6C (SepVariableInitialization.c)
 *     SepRmDbInitialization @ 0x140A6F540 (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  _KPROCESS *Process; // rbx
  ULONG_PTR SystemToken; // rax

  if ( !(unsigned __int8)SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  *($716DEF6A987B9E81ED436DA1BE78D38B *)((char *)&KeGetCurrentThread()[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0xFFFFFFF7);
  ObInitializeFastReference(&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}

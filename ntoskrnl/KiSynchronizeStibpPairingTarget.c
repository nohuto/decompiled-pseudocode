/*
 * XREFs of KiSynchronizeStibpPairingTarget @ 0x140458580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiSynchronizeStibpPairingTarget()
{
  struct _KPRCB *CurrentPrcb; // r8
  _KPRCB *PairPrcb; // r10
  unsigned __int16 BpbRetpolineExitSpecCtrl; // ax
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbCurrentSpecCtrl; // ax
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  PairPrcb = CurrentPrcb->PairPrcb;
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
  {
    BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
    if ( (BpbKernelSpecCtrl & 3) == 0 )
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl | 2;
    goto LABEL_8;
  }
  BpbRetpolineExitSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
  if ( (BpbRetpolineExitSpecCtrl & 3) == 0 )
    CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbRetpolineExitSpecCtrl | 2;
  if ( (CurrentPrcb->BpbRetpolineState & 1) != 0 )
  {
LABEL_8:
    BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
    if ( (BpbCurrentSpecCtrl & 3) == 0 )
    {
      CurrentPrcb->BpbCurrentSpecCtrl = BpbCurrentSpecCtrl | 2;
      __writemsr(0x48u, BpbCurrentSpecCtrl | 2u);
    }
  }
  result = 4294967278LL;
  _InterlockedAnd16(&PairPrcb->PairRegister, 0xFFEEu);
  _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
  return result;
}

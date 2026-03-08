/*
 * XREFs of IopLiveDumpCorralDpc @ 0x140A97DC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveProcessorControlState @ 0x140416350 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x140420580 (RtlCaptureContext.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x140A99280 (IopLiveDumpProcessCorralStateChange.c)
 */

void __fastcall IopLiveDumpCorralDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v6; // edx
  unsigned int Number; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+24h] [rbp-14h]
  int v9; // [rsp+28h] [rbp-10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  v8 = 0;
  Number = CurrentPrcb->Number;
  RtlCaptureContext(CurrentPrcb->Context);
  KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v6);
  do
    IopLiveDumpProcessCorralStateChange(DeferredContext, &Number);
  while ( v8 != -1 );
}

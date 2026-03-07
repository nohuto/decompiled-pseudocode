void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeContinuousReadDpc(
        _KDPC *Dpc,
        void *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  IofCallDriver(*(PDEVICE_OBJECT *)(*((_QWORD *)Dpc[-1].DpcData + 3) + 304LL), *((PIRP *)Dpc[-1].SystemArgument1 + 19));
}

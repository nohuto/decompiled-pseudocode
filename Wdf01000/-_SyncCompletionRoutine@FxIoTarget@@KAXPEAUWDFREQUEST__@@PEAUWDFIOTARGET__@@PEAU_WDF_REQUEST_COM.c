/*
 * XREFs of ?_SyncCompletionRoutine@FxIoTarget@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C0054500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoTarget::_SyncCompletionRoutine(
        WDFREQUEST__ *Request,
        WDFIOTARGET__ *Target,
        _WDF_REQUEST_COMPLETION_PARAMS *Params,
        _KEVENT *Context)
{
  _LIST_ENTRY *Blink; // rax

  LODWORD(Context[1].Header.WaitListHead.Flink) = Params->IoStatus.Status;
  Blink = Context[1].Header.WaitListHead.Blink;
  if ( Blink )
    ((void (__fastcall *)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, _QWORD))Blink)(
      Request,
      Target,
      Params,
      *(_QWORD *)&Context[2].Header.Lock);
  KeSetEvent(Context, 0, 0);
}

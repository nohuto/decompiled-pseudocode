/*
 * XREFs of ?PresentDisplayOnlyProgressDpcCb@BLTQUEUE@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C006D470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::PresentDisplayOnlyProgressDpcCb(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeSetEvent(DeferredContext, 0, 0);
}

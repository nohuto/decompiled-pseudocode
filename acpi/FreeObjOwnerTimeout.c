void __fastcall FreeObjOwnerTimeout(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  DbgPrintEx(0x19u, 0, "FreeObjOwner watchdog timer expired. Owner = %p\n", DeferredContext);
}

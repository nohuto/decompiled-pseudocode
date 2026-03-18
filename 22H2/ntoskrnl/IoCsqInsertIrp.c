/*
 * XREFs of IoCsqInsertIrp @ 0x140338510
 * Callers:
 *     <none>
 * Callees:
 *     IoCsqInsertIrpEx @ 0x140338530 (IoCsqInsertIrpEx.c)
 */

void __stdcall IoCsqInsertIrp(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context)
{
  IoCsqInsertIrpEx(Csq, Irp, Context, 0LL);
}

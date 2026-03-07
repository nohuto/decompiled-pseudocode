void __fastcall ACPIEcReadWriteCompletion(IRP *a1)
{
  a1->IoStatus.Status = 0;
  IofCompleteRequest(a1, 0);
}

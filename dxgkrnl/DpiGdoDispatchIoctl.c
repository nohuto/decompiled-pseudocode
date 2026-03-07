__int64 __fastcall DpiGdoDispatchIoctl(__int64 a1, IRP *a2)
{
  unsigned int v3; // esi
  ULONG_PTR Information; // rdx
  unsigned int v5; // eax

  v3 = -1073741637;
  Information = 0LL;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2293792 )
  {
    v5 = DpiGdoHandleVideoParameters(a1, a2);
    Information = a2->IoStatus.Information;
    v3 = v5;
  }
  a2->IoStatus.Information = Information;
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 1);
  return v3;
}

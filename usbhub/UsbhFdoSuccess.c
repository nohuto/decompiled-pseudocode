__int64 __fastcall UsbhFdoSuccess(__int64 a1, __int64 a2)
{
  int v2; // r9d
  IRP *v3; // r10

  Log(a1, 8, 1181967203, 0LL, a2);
  v3->IoStatus.Status &= v2;
  IofCompleteRequest(v3, 0);
  return 0LL;
}

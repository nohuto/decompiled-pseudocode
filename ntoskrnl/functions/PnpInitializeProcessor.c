__int64 PnpInitializeProcessor()
{
  void *v0; // rcx
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = (void *)*((_QWORD *)IopRootDeviceNode + 4);
  LODWORD(v2) = 1;
  PnpRequestDeviceAction(v0, 6, 0, &v2, 0LL, 0LL, 0LL);
  return 0LL;
}

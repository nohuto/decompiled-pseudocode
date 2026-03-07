__int64 __fastcall MiFlushWaitForReadInProgress(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v7[4]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v8[18]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v8, 0, 0x88uLL);
  v7[0] = 1;
  MiInitializePageFaultPacket(0LL, 0LL, 0, 0LL, v8);
  MiObtainProtoReference(a2, 1);
  return MiWaitForCollidedFaultComplete(v8, a1, a2, a3, v7);
}

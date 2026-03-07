__int64 __fastcall VfWmiTestStartedPdoStack(struct _DEVICE_OBJECT *a1)
{
  __int64 v2; // r9
  __int64 result; // rax
  _QWORD v4[11]; // [rsp+40h] [rbp-58h] BYREF

  memset(v4, 0, 0x48uLL);
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    LOWORD(v4[0]) = -233;
    v4[1] = a1;
    return VfIrpSendSynchronousIrp(a1, (__int64)v4, 1, v2, 0LL, 0LL, 0LL);
  }
  return result;
}

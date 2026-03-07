void __fastcall SepImageVerificationCallbackWorker(unsigned int *P)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[1] = 0LL;
  v2[0] = &SepImageVerificationCallbackPreProcess;
  v2[2] = *((_QWORD *)P + 4);
  v2[3] = P[10];
  ExNotifyWithProcessing((__int64)ExCbSeImageVerificationDriverInfo, 1LL, (__int64)(P + 12), (__int64)v2);
  ExFreePoolWithTag(*((PVOID *)P + 4), 0x63734943u);
  ExFreePoolWithTag(P, 0x63734943u);
}

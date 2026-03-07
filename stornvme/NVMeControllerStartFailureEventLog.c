__int64 __fastcall NVMeControllerStartFailureEventLog(__int64 a1)
{
  _QWORD v3[10]; // [rsp+20h] [rbp-50h] BYREF
  int v4; // [rsp+80h] [rbp+10h] BYREF

  memset(v3, 0, 0x48uLL);
  HIDWORD(v3[1]) = 0;
  v3[6] = a1 + 36;
  v4 = 72;
  v3[0] = 0x4800000100LL;
  BYTE4(v3[3]) = 1;
  v3[4] = 0x200000006LL;
  LODWORD(v3[5]) = 4;
  return StorPortExtendedFunction(16LL, a1, v3, &v4);
}

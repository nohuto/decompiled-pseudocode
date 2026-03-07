__int64 DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___()
{
  __int64 result; // rax
  __int64 v1; // rcx
  int v2; // r8d
  int v3; // eax
  _DWORD v4[20]; // [rsp+40h] [rbp-68h] BYREF

  memset(v4, 0, 0x48uLL);
  v4[10] = 1;
  v4[11] = 1;
  result = DrvSampleDisplayState(&v4[12]);
  if ( (int)result >= 0 )
  {
    v4[0] = 4718624;
    LOWORD(v4[1]) = 0x8000;
    v4[16] = gbConnected;
    v3 = (int)qword_1C02D7438;
    if ( qword_1C02D7438 )
      v3 = qword_1C02D7438(v1);
    v4[17] = v3;
    return DrvDxgkSendDisplayBrokerMessage(0x10000, (unsigned int)v4, v2, 0, 0LL);
  }
  return result;
}

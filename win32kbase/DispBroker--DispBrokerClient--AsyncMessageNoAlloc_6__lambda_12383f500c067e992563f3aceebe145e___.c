__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___(
        __int64 a1,
        int **a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  int *v5; // rax
  int v6; // ecx
  int *v7; // rax
  __int64 v8; // [rsp+28h] [rbp-80h]
  _DWORD v9[20]; // [rsp+40h] [rbp-68h] BYREF

  memset(v9, 0, 0x48uLL);
  v9[10] = 6;
  v9[11] = 1;
  result = DrvSampleDisplayState(&v9[12]);
  if ( (int)result >= 0 )
  {
    LOWORD(v9[1]) = 0x8000;
    v5 = *a2;
    v9[0] = 4718624;
    v6 = *v5;
    v7 = a2[1];
    v9[16] = v6;
    v9[17] = *v7;
    return DrvDxgkSendDisplayBrokerMessage(0x10000u, (__int64)v9, v4, 0LL, 0LL, v8, 0LL);
  }
  return result;
}

void __fastcall PopUmpoSendPowerRequestCreate(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v4; // rbx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v1 = a1;
  if ( (unsigned int)PopPowerRequestGetDiagnosticBuffer(a1, 0LL, &v5) == -1073741789 )
  {
    v2 = v5;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v5 + 16, 1869638997LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 15;
      Pool2[2] = v1;
      if ( (int)PopPowerRequestGetDiagnosticBuffer(v1, Pool2 + 4, &v5) >= 0 )
        PopUmpoSendPowerMessage(v4, v2 + 16, 0);
      ExFreePoolWithTag(v4, 0x6F706D55u);
    }
  }
}

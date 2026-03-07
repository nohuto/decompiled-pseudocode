__int64 HalpApicTimerDiscover()
{
  __int64 v0; // rcx
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int128 v10; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v11[18]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v12; // [rsp+E0h] [rbp+67h] BYREF

  *(_WORD *)((char *)&v12 + 1) = 0;
  v10 = 0LL;
  BYTE3(v12) = 0;
  if ( HalSocGetAcpiTable(1128878145) )
  {
    v1 = 0LL;
    if ( (int)HalSocRequestApi(v0, 0LL, 6, 16LL, &v10) >= 0 )
      v1 = (*((__int64 (**)(void))&v10 + 1))();
    memset(v11, 0, sizeof(v11));
    v12 = 0LL;
    v2 = 32LL;
    v11[11] = &v12;
    v11[0] = 0x9000000001LL;
    LODWORD(v11[17]) = 6;
    v11[12] = 0x2000000008LL;
    HIDWORD(v11[14]) = 2147;
    if ( (unsigned __int8)HalpApicTimerIsInvariant() )
    {
      v3 = 10;
    }
    else
    {
      HIDWORD(v11[14]) = 26723;
      v3 = 11;
    }
    HIDWORD(v12) = v3;
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 5;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( v8 == 1 )
                v2 = 128LL;
              else
                v2 = 1LL;
            }
            else
            {
              v2 = 64LL;
            }
          }
        }
        else
        {
          v2 = 16LL;
        }
      }
      else
      {
        v2 = 8LL;
      }
    }
    else
    {
      v2 = 4LL;
    }
    v11[16] = 0x100000001LL;
    LOBYTE(v12) = -1;
    v11[13] = v1 / v2;
    v11[1] = HalpApicTimerInitialize;
    v11[2] = HalpApicTimerQueryCounter;
    v11[3] = xHalTimerWatchdogStop;
    v11[4] = HalpApicTimerArm;
    v11[9] = HalpApicTimerSetInterruptVector;
    v11[5] = HalpApicTimerStop;
    HalpTimerRegister((__int64)v11, 0LL);
  }
  return 0LL;
}

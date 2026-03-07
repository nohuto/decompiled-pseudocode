LONG WheapLogPolicyTelemetry()
{
  _DWORD Src[9]; // [rsp+20h] [rbp-40h] BYREF
  char v2; // [rsp+44h] [rbp-1Ch]
  char v3; // [rsp+45h] [rbp-1Bh]
  char v4; // [rsp+46h] [rbp-1Ah]
  int v5; // [rsp+47h] [rbp-19h]
  int v6; // [rsp+4Bh] [rbp-15h]
  int v7; // [rsp+4Fh] [rbp-11h]

  Src[3] = 0;
  Src[8] = WheaRegistryKeysPresent;
  v2 = WheapPolicyDisableOffline;
  v3 = WheapPolicyMemPersistOffline;
  v4 = WheapPolicyMemPfaDisable;
  v5 = WheapPolicyMemPfaPageCount;
  v6 = WheapPolicyMemPfaThreshold;
  Src[0] = 1733060695;
  v7 = WheapPolicyMemPfaTimeout / 0x989680uLL;
  Src[1] = 1;
  Src[2] = 51;
  Src[5] = -2147483640;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 19;
  return WheaLogInternalEvent(Src);
}

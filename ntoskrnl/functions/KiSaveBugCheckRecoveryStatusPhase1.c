__int64 __fastcall KiSaveBugCheckRecoveryStatusPhase1(unsigned __int8 a1, int a2)
{
  __int64 v3; // [rsp+20h] [rbp-20h] BYREF
  int v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+2Ch] [rbp-14h]

  v4 = a2;
  HIDWORD(v3) = a1;
  LODWORD(v3) = 1;
  IoSaveBugCheckRecoveryStatus((int *)&v3);
  v5 = 0LL;
  v3 = 1LL;
  v4 = 193;
  return KiUpdateBugcheckRecoveryProgress(&v3);
}

__int64 __fastcall KiSaveBugCheckRecoveryStatusPhase0(char a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v7[12]; // [rsp+28h] [rbp-18h]

  v6 = 0LL;
  BYTE4(v6) = a1;
  *(_DWORD *)v7 = 0;
  IoSaveBugCheckRecoveryStatus((int *)&v6);
  *(_DWORD *)&v7[8] = a2;
  v6 = 0LL;
  *(_QWORD *)v7 = a3;
  result = KiUpdateBugcheckRecoveryProgress(&v6);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&v7[4] = 0LL;
    v6 = 1LL;
    *(_DWORD *)v7 = 192;
    return KiUpdateBugcheckRecoveryProgress(&v6);
  }
  return result;
}

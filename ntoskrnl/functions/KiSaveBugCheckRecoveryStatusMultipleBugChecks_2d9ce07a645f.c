__int64 __fastcall KiSaveBugCheckRecoveryStatusMultipleBugChecks(char a1, char a2, unsigned __int8 a3)
{
  _BYTE v4[12]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+2Ch] [rbp-14h]

  v4[4] = a1;
  *(_WORD *)&v4[10] = 0;
  *(_DWORD *)v4 = 3;
  v4[5] = a2;
  *(_DWORD *)&v4[6] = a3;
  IoSaveBugCheckRecoveryStatus((int *)v4);
  v5 = 0LL;
  *(_QWORD *)v4 = 2LL;
  *(_DWORD *)&v4[8] = 0x800000;
  return KiUpdateBugcheckRecoveryProgress(v4);
}

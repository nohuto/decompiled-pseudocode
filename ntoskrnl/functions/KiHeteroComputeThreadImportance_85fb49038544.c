__int64 __fastcall KiHeteroComputeThreadImportance(int a1, char a2)
{
  unsigned __int16 v3; // [rsp+0h] [rbp-28h]
  int v4; // [rsp+4h] [rbp-24h]
  __int16 v5; // [rsp+8h] [rbp-20h]
  char v6; // [rsp+Ah] [rbp-1Eh]

  v4 = 33752069;
  v5 = 6;
  v6 = 1;
  HIBYTE(v3) = *((_BYTE *)&v4 + a1);
  LOBYTE(v3) = ((unsigned __int8)KiHeteroSchedulerOptionsMask & (unsigned __int8)KiHeteroSchedulerOptions & 8) != 0
             ? a2
             : 0;
  return v3;
}

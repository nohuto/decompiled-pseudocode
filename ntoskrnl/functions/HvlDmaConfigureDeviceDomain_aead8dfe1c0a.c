__int64 __fastcall HvlDmaConfigureDeviceDomain(int *a1, __int64 a2)
{
  int v2; // eax
  char v3; // cl
  unsigned __int16 v4; // ax
  _QWORD v6[2]; // [rsp+40h] [rbp-48h] BYREF
  int v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+54h] [rbp-34h]
  __int64 v9; // [rsp+58h] [rbp-30h]
  __int64 v10; // [rsp+60h] [rbp-28h]

  v6[1] = 0LL;
  v6[0] = -1LL;
  v7 = 1;
  v2 = *a1;
  v3 = *(_BYTE *)(a2 + 17);
  v8 = v2;
  v10 = *(_QWORD *)(a2 + 8);
  v9 = *(_BYTE *)(a2 + 16) & 1 | (2LL * (v3 & 1));
  v4 = HvcallFastExtended(65742LL, (__int64)v6, 0x28u, 0LL, 0);
  return HvlpHvToNtStatus(v4);
}

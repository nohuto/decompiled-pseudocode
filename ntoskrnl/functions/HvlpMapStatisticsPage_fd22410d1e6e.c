__int64 __fastcall HvlpMapStatisticsPage(ULONG a1, _OWORD *a2, _QWORD *a3)
{
  PHYSICAL_ADDRESS *v6; // rbx
  PHYSICAL_ADDRESS *v7; // rdi
  __int128 v9; // [rsp+28h] [rbp-49h] BYREF
  __int64 v10; // [rsp+38h] [rbp-39h]
  __int64 v11; // [rsp+40h] [rbp-31h]
  __int128 v12; // [rsp+48h] [rbp-29h] BYREF
  __int64 v13; // [rsp+58h] [rbp-19h]
  __int64 v14; // [rsp+60h] [rbp-11h]
  _BYTE v15[16]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v16[48]; // [rsp+78h] [rbp+7h] BYREF

  v13 = 0LL;
  LODWORD(v14) = 0;
  v10 = 0LL;
  LODWORD(v11) = 0;
  v12 = 0LL;
  v9 = 0LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v12, 1, (__int64)v16, 24LL);
  v7 = HvlpAcquireHypercallPage((__int64)&v9, 2, (__int64)v15, 8LL);
  *(_OWORD *)&v6[1].LowPart = *a2;
  v6->LowPart = a1;
  LOWORD(v6) = HvcallInitiateHypercall(108);
  *a3 = v7->QuadPart << 12;
  HvlpReleaseHypercallPage(&v9);
  HvlpReleaseHypercallPage(&v12);
  return (_WORD)v6 != 0 ? 0xC0000001 : 0;
}

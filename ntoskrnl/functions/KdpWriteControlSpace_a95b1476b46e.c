__int64 __fastcall KdpWriteControlSpace(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  int v3; // r9d
  __int64 v5; // r8
  __int64 v7; // rdx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *a2;
  v5 = *((_QWORD *)a2 + 1);
  LODWORD(v10) = 0;
  v9 = 0LL;
  LOWORD(v9) = 56;
  v7 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v9 + 1) = a1;
  *(_DWORD *)(a1 + 8) = KdpSysWriteControlSpace(*(unsigned __int16 *)(a1 + 6), v7, v5, v3, (__int64)&v10);
  *(_DWORD *)(a1 + 28) = v10;
  return KdSendPacket(2LL, &v9, a2, &KdpContext);
}

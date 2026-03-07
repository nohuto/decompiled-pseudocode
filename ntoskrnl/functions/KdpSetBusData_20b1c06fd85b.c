__int64 __fastcall KdpSetBusData(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  int v9; // [rsp+28h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v3 = (unsigned int)a1[7];
  v4 = (unsigned int)a1[6];
  LODWORD(v11) = 0;
  v10 = 0LL;
  LOWORD(v10) = 56;
  v9 = a1[8];
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (unsigned int)a1[5];
  *((_QWORD *)&v10 + 1) = a1;
  a1[2] = KdpSysWriteBusData((unsigned int)a1[4], v7, v4, v3, v6, v9, &v11);
  a1[8] = v11;
  return KdSendPacket(2LL, &v10, 0LL, &KdpContext);
}

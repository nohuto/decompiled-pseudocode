__int64 __fastcall KdpGetBusData(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  bool v12; // cf
  __int64 v14; // [rsp+20h] [rbp-38h]
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  v15[0] = 0LL;
  v15[1] = a1;
  v5 = (unsigned int)a1[8];
  LOWORD(v15[0]) = 56;
  if ( v5 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v5) = KdTransportMaxPacketSize - 56;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = (unsigned int)a1[7];
  v8 = (unsigned int)a1[6];
  if ( (unsigned int)v5 <= v6 )
    v6 = v5;
  v10 = (unsigned int)a1[4];
  v9 = (unsigned int)a1[5];
  v14 = *(_QWORD *)(a2 + 8);
  LODWORD(v16) = v6;
  v11 = KdpSysReadBusData(v10, v9, v8, v7, v14, v6, &v16);
  v12 = (unsigned int)v16 < v6;
  a1[2] = v11;
  if ( v12 )
    v6 = v16;
  a1[8] = v6;
  *(_WORD *)a2 = v6;
  return KdSendPacket(2LL, v15, a2, &KdpContext);
}

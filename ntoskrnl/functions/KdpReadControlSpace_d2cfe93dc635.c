__int64 __fastcall KdpReadControlSpace(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  int ControlSpace; // eax
  bool v11; // cf
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v3 = *(unsigned int *)(a1 + 24);
  v13[0] = 56LL;
  v13[1] = a1;
  if ( v3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v3) = KdTransportMaxPacketSize - 56;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = *(unsigned __int16 *)(a1 + 6);
  if ( (unsigned int)v3 <= v6 )
    v6 = v3;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a2 + 8);
  LODWORD(v14) = v6;
  ControlSpace = KdpSysReadControlSpace(v7, v8, v9, v6, (__int64)&v14);
  v11 = (unsigned int)v14 < v6;
  *(_DWORD *)(a1 + 8) = ControlSpace;
  if ( v11 )
    v6 = v14;
  *(_WORD *)a2 = v6;
  *(_DWORD *)(a1 + 28) = v6;
  return KdSendPacket(2LL, v13, a2, &KdpContext);
}

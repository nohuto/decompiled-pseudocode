__int64 __fastcall ScsiSecurityProtocolInRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  unsigned int *v6; // rdx
  _BYTE *v7; // r8
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned int v13; // ecx
  unsigned int v14; // [rsp+50h] [rbp+8h]
  unsigned __int16 v15; // [rsp+50h] [rbp+8h]
  unsigned int *v16; // [rsp+68h] [rbp+20h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v9 = *(_QWORD *)(a1 + 1840);
  v10 = SrbExtension;
  v16 = 0LL;
  if ( (*(_BYTE *)(v9 + 256) & 1) == 0 )
    goto LABEL_2;
  HIBYTE(v14) = v7[6];
  BYTE2(v14) = v7[7];
  BYTE1(v14) = v7[8];
  LOBYTE(v14) = v7[9];
  v12 = v14;
  if ( (char)v7[4] < 0 )
    v12 = v14 << 9;
  HIBYTE(v15) = v7[2];
  LOBYTE(v15) = v7[3];
  GetSrbDataBuffer(v8, &v16);
  v6 = v16;
  if ( *v16 >= v12 )
  {
    *(_BYTE *)(v10 + 4253) = (v12 != 0 ? 2 : 0) | *(_BYTE *)(v10 + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v8);
    *(_BYTE *)(v10 + 4139) = *(_BYTE *)(a3 + 1);
    v13 = *(_DWORD *)(v10 + 4136) & 0xFF0000FF | (v15 << 8);
    *(_BYTE *)(v10 + 4096) = -126;
    *(_DWORD *)(v10 + 4136) = v13;
    result = 0LL;
    *(_DWORD *)(v10 + 4140) = v12;
  }
  else
  {
LABEL_2:
    LOBYTE(v9) = 36;
    LOBYTE(v7) = 5;
    LOBYTE(v6) = 6;
    NVMeSetSenseData(v8, v6, v7, v9);
    return 3238002694LL;
  }
  return result;
}

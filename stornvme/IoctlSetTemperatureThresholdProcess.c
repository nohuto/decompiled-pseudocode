__int64 __fastcall IoctlSetTemperatureThresholdProcess(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 SrbExtension; // rsi
  __int64 v4; // r9
  __int64 SrbDataBuffer; // rdi
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int16 v8; // ax
  __int16 v9; // bp
  __int16 v10; // bp
  char v11; // cl
  int v12; // edx
  int v13; // edx
  unsigned int v14; // edx
  _DWORD *v16; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v16 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(v4, &v16);
  if ( *v16 < 0x2Cu )
  {
    *(_BYTE *)(v6 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  if ( (*(_BYTE *)(SrbDataBuffer + 36) & 1) == 0
    || (v8 = *(_WORD *)(SrbDataBuffer + 38), v8 > 8u)
    || !v8 && !*(_BYTE *)(SrbDataBuffer + 42) && !*(_WORD *)(*(_QWORD *)(v7 + 1840) + 266LL)
    || (v9 = *(_WORD *)(SrbDataBuffer + 40), v9 < -273) )
  {
    *(_BYTE *)(v6 + 3) = 6;
    return (unsigned int)-1056964602;
  }
  v10 = v9 + 273;
  *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
  SrbAssignQueueId(v7, v6);
  v11 = *(_BYTE *)(SrbDataBuffer + 42);
  v12 = (*(_DWORD *)(SrbExtension + 4140) ^ (*(unsigned __int8 *)(SrbDataBuffer + 38) << 16)) & 0xF0000;
  *(_BYTE *)(SrbExtension + 4096) = 9;
  v13 = *(_DWORD *)(SrbExtension + 4140) ^ v12;
  *(_BYTE *)(SrbExtension + 4136) = 4;
  if ( v11 )
    v14 = v13 & 0xFFCFFFFF;
  else
    v14 = v13 & 0xFFCFFFFF | 0x100000;
  *(_DWORD *)(SrbExtension + 4140) = v14;
  *(_WORD *)(SrbExtension + 4140) = v10;
  *(_BYTE *)(SrbExtension + 4253) &= ~4u;
  return v2;
}

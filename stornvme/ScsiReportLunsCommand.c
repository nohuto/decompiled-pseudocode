__int64 __fastcall ScsiReportLunsCommand(__int64 a1, __int64 a2)
{
  int v2; // eax
  _BYTE *SrbDataBuffer; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  _DWORD *v6; // rax
  unsigned int v7; // r8d
  unsigned int v8; // r11d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r11d
  unsigned int *v13; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a2 + 3) = 1;
  v2 = *(_DWORD *)(a1 + 136);
  v13 = 0LL;
  if ( ((v2 & 0x10) != 0 || (*(_DWORD *)(a1 + 32) & 0x2000) == 0) && *(_WORD *)(a1 + 338) && *(_WORD *)(a1 + 336) )
  {
    SrbDataBuffer = (_BYTE *)GetSrbDataBuffer(a2, &v13);
    v6 = v13;
    v7 = 8 * *(_DWORD *)(v4 + 232);
    if ( *v13 >= (unsigned __int64)v7 + 8 )
    {
      SrbDataBuffer[3] = v7;
      v8 = 0;
      *SrbDataBuffer = HIBYTE(v7);
      SrbDataBuffer[1] = BYTE2(v7);
      for ( SrbDataBuffer[2] = BYTE1(v7); v8 < *(_DWORD *)(v4 + 232); v8 = v11 + 1 )
      {
        if ( NVMeIsLunActive(*(_QWORD *)(v4 + 8LL * v8 + 1952)) )
        {
          *(_BYTE *)(v10 + 8 * v9 + 8) = 0;
          *(_BYTE *)(v10 + 8 * v9 + 9) = v11;
          *(_DWORD *)(v10 + 8 * v9 + 10) = 0;
          *(_WORD *)(v10 + 8 * v9 + 14) = 0;
        }
      }
    }
    else
    {
      *(_BYTE *)(v5 + 3) = 18;
      if ( *v6 >= 4u )
      {
        SrbDataBuffer[3] = v7;
        *SrbDataBuffer = HIBYTE(v7);
        SrbDataBuffer[1] = BYTE2(v7);
        SrbDataBuffer[2] = BYTE1(v7);
      }
    }
  }
  return 0LL;
}

__int64 __fastcall ScsiPersistentReserveOut(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  __int64 v7; // rdx
  char v8; // cl
  __int64 v9; // r9
  unsigned int v10; // ebx
  unsigned __int8 v11; // cl
  __int64 v12; // r10
  __int64 SrbDataBuffer; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r11
  unsigned __int16 v19; // [rsp+50h] [rbp+18h]
  _DWORD *v20; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v5 = (unsigned __int8)a3[2];
  v7 = (unsigned int)(v5 & 0xF) - 1;
  if ( (v5 & 0xF) == 1 )
  {
    v9 = 1LL;
  }
  else
  {
    v7 = (unsigned int)(v5 & 0xF) - 3;
    if ( (v5 & 0xF) == 3 )
    {
      v9 = 2LL;
    }
    else
    {
      v7 = (unsigned int)(v5 & 0xF) - 5;
      if ( (v5 & 0xF) == 5 )
      {
        v9 = 3LL;
      }
      else
      {
        v7 = (unsigned int)(v5 & 0xF) - 6;
        if ( (v5 & 0xF) == 6 )
        {
          v9 = 4LL;
        }
        else
        {
          v7 = (unsigned int)(v5 & 0xF) - 7;
          if ( (v5 & 0xF) == 7 )
          {
            v9 = 5LL;
          }
          else if ( (v5 & 0xF) == 8 )
          {
            v9 = 6LL;
          }
          else
          {
            v8 = a3[1] & 0x1F;
            if ( ((v8 - 1) & 0xFC) == 0 && v8 != 3 )
              goto LABEL_10;
            v9 = 0LL;
            if ( v8 == 5 )
              goto LABEL_10;
          }
        }
      }
    }
  }
  if ( (v5 & 0xF0) != 0 )
    return (unsigned int)-1056964602;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 520LL) & 0x20) == 0
    || (*(_BYTE *)(v3 + 2) != 40 ? (v11 = *(_BYTE *)(v3 + 7)) : (v11 = *(_BYTE *)(*(unsigned int *)(v3 + 52) + v3 + 10)),
        v7 = v11,
        !*(_BYTE *)(*(_QWORD *)(a1 + 8LL * v11 + 1952) + 112LL)) )
  {
    LOBYTE(v9) = 36;
    LOBYTE(v5) = 5;
    LOBYTE(v7) = 6;
    v10 = -1056964602;
    NVMeSetSenseData(v3, v7, v5, v9);
    return v10;
  }
  GetNamespaceId(a1, v11);
  v20 = 0LL;
  HIBYTE(v19) = a3[7];
  LOBYTE(v19) = a3[8];
  SrbDataBuffer = GetSrbDataBuffer(v12, &v20);
  if ( *v20 < (unsigned int)v19 )
  {
    v10 = -1056964604;
    goto LABEL_11;
  }
  if ( (*(_BYTE *)(SrbDataBuffer + 20) & 8) == 0 )
  {
    if ( (a3[1] & 0x1F) != 0 )
    {
      switch ( a3[1] & 0x1F )
      {
        case 1:
          return (unsigned int)NVMeReservationAcquireCommand(v16, v3);
        case 2:
        case 3:
          return (unsigned int)NVMeReservationReleaseCommand(v16, v3);
        case 4:
        case 5:
          return (unsigned int)NVMeReservationAcquireCommand(v16, v3);
      }
      if ( (a3[1] & 0x1F) != 6 )
      {
        if ( (a3[1] & 0x1F) != 7 )
        {
          LOBYTE(v15) = 36;
          LOBYTE(v14) = 5;
          LOBYTE(SrbDataBuffer) = 6;
          NVMeSetSenseData(v3, SrbDataBuffer, v14, v15);
          return (unsigned int)-1056964602;
        }
        return (unsigned int)NVMeReservationRegisterAndMoveCommand(v16, v3);
      }
    }
    return (unsigned int)NVMeReservationRegisterCommand(v16, v3);
  }
LABEL_10:
  v10 = -1056964602;
LABEL_11:
  *(_BYTE *)(v3 + 3) = 6;
  return v10;
}

__int64 __fastcall ScsiPersistentReserveIn(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned __int8 v9; // r8
  unsigned __int8 v11; // cl
  unsigned __int16 v13; // [rsp+50h] [rbp+18h]
  _DWORD *v14; // [rsp+58h] [rbp+20h] BYREF

  HIBYTE(v13) = *(_BYTE *)(a3 + 7);
  LOBYTE(v13) = *(_BYTE *)(a3 + 8);
  v14 = 0LL;
  GetSrbDataBuffer(a2, &v14);
  v7 = v13;
  if ( *v14 >= (unsigned int)v13 )
  {
    v9 = *(_BYTE *)(v4 + 1) & 0x1F;
    if ( v9 == 2 )
    {
      return (unsigned int)NVMeReservationReportCapabilities(v6, v5, v13);
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v6 + 1840) + 520LL) & 0x20) == 0 )
        goto LABEL_8;
      if ( (*(_BYTE *)(v4 + 1) & 0x1C) != 0 )
      {
        LOBYTE(v4) = 36;
        LOBYTE(v3) = 5;
        LOBYTE(v7) = 6;
        v8 = -1056964602;
        NVMeSetSenseData(v5, v7, v3, v4);
        return v8;
      }
      v11 = *(_BYTE *)(v5 + 2) == 40 ? *(_BYTE *)(*(unsigned int *)(v5 + 52) + v5 + 10) : *(_BYTE *)(v5 + 7);
      if ( !*(_BYTE *)(*(_QWORD *)(v6 + 8LL * v11 + 1952) + 112LL) )
      {
LABEL_8:
        v8 = -1056964602;
        goto LABEL_3;
      }
      return (unsigned int)NVMeReservationReportStatus(v6, v5, v9, v13, 0);
    }
  }
  v8 = -1056964604;
LABEL_3:
  *(_BYTE *)(v5 + 3) = 6;
  return v8;
}

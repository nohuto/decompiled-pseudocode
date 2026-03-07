__int64 __fastcall WheapAttemptErrorRecovery(__int64 a1)
{
  int v2; // ebx
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 ErrorSource; // rax
  __int64 v5; // r11
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = *(_DWORD *)(a1 + 12);
  v2 = -1073741811;
  ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord((PWHEA_ERROR_RECORD)a1);
  if ( ErrPacketFromErrRecord )
  {
    if ( ErrPacketFromErrRecord->ErrorSourceType <= (unsigned int)WheaErrSrcTypeSei )
    {
      ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, ErrPacketFromErrRecord->ErrorSourceId);
      if ( ErrorSource )
      {
        if ( *(_QWORD *)(v5 + 48) )
        {
          v6 = WheapCallErrorSourceRecover(ErrorSource, a1, &v11);
          v7 = v11;
          *(_DWORD *)(a1 + 12) = v11;
          v2 = v6;
          if ( v6 >= 0 && !v7 )
            *(_DWORD *)(a1 + 12) = 2;
        }
      }
    }
  }
  v8 = PshedAttemptErrorRecovery(a1);
  v9 = *(_DWORD *)(a1 + 12);
  if ( v9 )
  {
    if ( v9 == 2 )
      goto LABEL_13;
  }
  else
  {
    if ( v8 >= 0 )
    {
      *(_DWORD *)(a1 + 12) = 2;
LABEL_13:
      *(_DWORD *)(a1 + 104) |= 1u;
      goto LABEL_14;
    }
    *(_DWORD *)(a1 + 12) = 1;
  }
LABEL_14:
  if ( v2 < 0 && v8 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v2;
}

void __fastcall RootHub_HandleResumedPorts(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rsi
  char v4; // al
  int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v1 = 1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 48) + 120LL * (v1 - 1);
      v4 = *(_BYTE *)(v3 + 13);
      if ( v4 == 2 )
        break;
      if ( v4 == 3 )
        goto LABEL_6;
LABEL_9:
      if ( ++v1 > *(_DWORD *)(a1 + 16) )
        return;
    }
    if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
           WdfDriverGlobals,
           *(_QWORD *)(v3 + 40),
           0LL) )
    {
      *(_BYTE *)(v3 + 18) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v5,
          11,
          235,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v1);
      }
      goto LABEL_9;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v5,
        11,
        236,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v1);
    }
LABEL_6:
    RootHub_WaitForResumeCompletion(a1, v1, &v7);
    if ( v7 != -1 && (v7 & 0x200) != 0 && (v7 & 1) != 0 && (v7 & 2) != 0 && (v7 & 0x20000) == 0 )
    {
      v6 = (v7 >> 5) & 0xF;
      if ( v6 <= 2 || v6 == 8 )
        RootHub_ForceU3(a1, v1);
    }
    goto LABEL_9;
  }
}

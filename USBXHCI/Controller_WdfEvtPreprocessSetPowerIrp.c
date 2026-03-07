__int64 __fastcall Controller_WdfEvtPreprocessSetPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned int v9; // ecx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // ebx

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00633D8);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = v4;
  v8 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)(v6 + 16) )
    goto LABEL_15;
  v9 = *(_DWORD *)(v6 + 8);
  switch ( (v9 >> 8) & 0xF )
  {
    case 1u:
      v10 = ((v9 & 0xF0000) == 327680) + 1;
LABEL_10:
      *(_DWORD *)(v8 + 420) = v10;
      break;
    case 2u:
    case 3u:
    case 4u:
      v10 = 4 - ((v9 & 0xF000) != 20480);
      goto LABEL_10;
    case 5u:
      *(_DWORD *)(v8 + 420) = 5;
      break;
    case 6u:
      v10 = ((v9 & 0xF000) != 20480) + 5;
      goto LABEL_10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_L(
      *(_QWORD *)(v7 + 16),
      v5,
      4,
      210,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      *(_DWORD *)(v8 + 420));
  }
  v11 = *(_QWORD *)(v8 + 424);
  if ( v11 )
    Crashdump_ProcessSystemPowerAction(v11, *(unsigned int *)(v8 + 420));
LABEL_15:
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 272))(
          WdfDriverGlobals,
          a1,
          a2);
  v14 = v12;
  if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v7 + 16), v13, 4, 211, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v12);
  }
  return v14;
}

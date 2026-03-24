/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0169844
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C01317D0 (NtUserInjectMouseInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0166A18 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C0167060 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C016711C (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C0169AA4 (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C016A1FC (RIMIDEValidateMouseInputStruct.c)
 */

__int64 __fastcall RIMIDEInjectMouseFromMouseInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // ebp
  char *v7; // rsi
  __int16 *v8; // r14
  __int64 v9; // xmm1_8
  unsigned int v10; // edi
  int v11; // ebx
  __int16 v12; // dx
  __int16 v13; // cx
  int v14; // eax
  __int16 v15; // ax
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  __int64 v20; // [rsp+30h] [rbp-1D8h]
  _OWORD v22[24]; // [rsp+40h] [rbp-1C8h] BYREF

  v4 = a2;
  memset(v22, 0, sizeof(v22));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1530);
  InputTraceLogging::RIM::InjectInput((a1 + 88) & -(__int64)(a1 != 0));
  v6 = 0;
  if ( a3 )
  {
    v7 = (char *)v22 + 2;
    v8 = (__int16 *)(v4 + 8);
    while ( 1 )
    {
      if ( v6 )
      {
        v9 = *((_QWORD *)v22 + 3 * v6 - 1);
        *(_OWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x35C) = *(_OWORD *)((char *)&v22[-1] + 24 * v6 - 8);
        *(_QWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x36C) = v9;
      }
      v20 = v4 + 32LL * v6;
      if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v20) )
        break;
      v10 = *((_DWORD *)v8 + 1);
      v11 = *(_DWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x364);
      *((_WORD *)v7 - 1) = -2;
      v12 = (v10 >> 15) & 1 | 8;
      if ( (v10 & 0x2000) == 0 )
        v12 = (v10 >> 15) & 1;
      v13 = v12 | 2;
      if ( (v10 & 0x4000) == 0 )
        v13 = v12;
      *(_WORD *)v7 = v13;
      v14 = RIMIDEBuildRawButtonsFromMouseInputStruct(v11, v20);
      *(_DWORD *)(v7 + 6) = v14;
      *((_WORD *)v7 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v11, v14, v20);
      v15 = 0;
      if ( (v10 & 0x1800) != 0 )
        v15 = *v8;
      v4 = a2;
      ++v6;
      *((_WORD *)v7 + 2) = v15;
      *(_DWORD *)(v7 + 10) = *((_DWORD *)v8 - 2);
      *(_DWORD *)(v7 + 14) = *((_DWORD *)v8 - 1);
      v16 = *((_DWORD *)v8 + 2);
      v8 += 16;
      *(_DWORD *)(v7 + 18) = v16;
      v7 += 24;
      if ( v6 >= a3 )
        goto LABEL_15;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_((_DWORD)gRimLog, 2, 1, 34, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_15:
    v18 = RIMIDEInjectMouseInput(a1, v22, a3);
    if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v17, 1, 35, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v18);
    }
  }
  return (unsigned int)v18;
}

/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C016B00C
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0168DEC (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 */

__int64 __fastcall BuildValueDeviceUsages(int a1, struct tagINPUT_INJECTION_VALUE **a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  struct tagINPUT_INJECTION_VALUE **v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // edi
  int v9; // esi
  char *v10; // r15
  char *v11; // r12
  struct tagINPUT_INJECTION_VALUE *v12; // rax
  int v13; // edx
  struct tagINPUT_INJECTION_VALUE *v14; // r9
  struct tagINPUT_INJECTION_VALUE *v15; // rcx
  __int16 *v16; // r8
  unsigned int v17; // edx
  __int16 v18; // ax
  unsigned int v19; // r8d
  _WORD *v20; // r9
  __int64 v21; // rcx

  v3 = 0;
  v6 = a2;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 493);
  v7 = 5LL;
  if ( a1 == 3 )
  {
    v8 = 6;
    v9 = 11;
    v10 = (char *)&unk_1C024E7E2;
    v11 = (char *)&unk_1C024E7E4;
LABEL_7:
    v12 = (struct tagINPUT_INJECTION_VALUE *)Win32AllocPoolZInit(0x90uLL, 1785620818LL);
    *v6 = v12;
    v14 = v12;
    if ( v12 )
    {
      v15 = v12;
      v16 = (__int16 *)&unk_1C024E8C4;
      v17 = 5;
      do
      {
        *(_WORD *)v15 = *(v16 - 1);
        v15 = (struct tagINPUT_INJECTION_VALUE *)((char *)v15 + 12);
        v18 = *v16;
        v16 += 16;
        *((_WORD *)v15 - 5) = v18;
        --v7;
      }
      while ( v7 );
      v19 = 0;
      v20 = (_WORD *)((char *)v14 + 60);
      do
      {
        if ( v19 >= v8 )
          break;
        ++v17;
        v21 = 32LL * v19++;
        *v20 = *(_WORD *)&v10[v21];
        v20[1] = *(_WORD *)&v11[v21];
        v20 += 6;
      }
      while ( v17 < 0xC );
      if ( v17 == v9 )
      {
        *a3 = 12;
        return 1;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Dd(
          (__int64)gRimLog,
          2u,
          1u,
          0xCu,
          (__int64)&WPP_4ec5c7b8de2538b43b29520e01bcbd50_Traceguids,
          v17,
          v9);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v13, 1, 13, (__int64)&WPP_4ec5c7b8de2538b43b29520e01bcbd50_Traceguids, 23);
    }
    return v3;
  }
  if ( a1 == 2 )
  {
    v8 = 5;
    v10 = (char *)&unk_1C024E702;
    v9 = 10;
    v11 = (char *)&unk_1C024E704;
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, (_DWORD)a2, 1, 11, (__int64)&WPP_4ec5c7b8de2538b43b29520e01bcbd50_Traceguids, a1);
  }
  return 0LL;
}

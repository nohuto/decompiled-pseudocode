/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C01693F0
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0131680 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C00429EC (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0166948 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C0169680 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0169EE0 (RIMIDEValidateKeybdInputStruct.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r14d
  _BYTE *v7; // rdi
  _WORD *v8; // rbx
  int v9; // edx
  bool v10; // zf
  char v11; // al
  unsigned int v12; // r8d
  __int16 v13; // ax
  __int16 v14; // ax
  __int16 v15; // dx
  __int16 v16; // dx
  __int16 v17; // cx
  __int16 v18; // ax
  __int16 v19; // ax
  unsigned __int64 v20; // rcx
  int v21; // edx
  int v22; // ebx
  _BYTE v24[192]; // [rsp+40h] [rbp-108h] BYREF

  memset(v24, 0, sizeof(v24));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1461);
  InputTraceLogging::RIM::InjectInput(-(__int64)(a1 != 0) & (a1 + 88));
  v6 = 0;
  if ( a3 )
  {
    v7 = &v24[4];
    v8 = (_WORD *)(a2 + 16);
    while ( (unsigned int)RIMIDEValidateKeybdInputStruct(a2 + 24LL * v6) )
    {
      if ( *(_DWORD *)(a1 + 488) || (v10 = !RIMIsRunningOnDesktop(), v11 = 0, v10) )
        v11 = 1;
      v12 = *((_DWORD *)v8 - 3);
      if ( (v12 & 0x8000) == 0 || (v10 = v11 == 0, v13 = -3, v10) )
        v13 = -2;
      *((_WORD *)v7 - 2) = v13;
      v14 = 8 * (v12 & 0x10);
      if ( (v12 & 4) != 0 )
      {
        v15 = v14 | 0x20;
      }
      else
      {
        v15 = 8 * (v12 & 0x10);
        if ( *(v8 - 8) && (v12 & 8) == 0 )
          v15 = v14 | 0x40;
      }
      v16 = (2 * (v12 & 1)) | (v12 >> 1) & 1 | v15;
      if ( (v12 & 0x8000) != 0 )
      {
        v17 = 256;
        if ( *v8 == 256 || (v17 = 512, *v8 == 512) )
          v16 |= v17;
      }
      *(_WORD *)v7 = v16;
      if ( (v16 & 0x40) != 0 )
        v18 = *(v8 - 8);
      else
        v18 = *(v8 - 7);
      *((_WORD *)v7 - 1) = v18;
      if ( (v12 & 0x20) != 0 )
        v19 = v8[1];
      else
        v19 = 0;
      *((_WORD *)v7 + 1) = v19;
      LODWORD(v20) = *((_DWORD *)v8 - 2);
      if ( !(_DWORD)v20 )
        v20 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *((_DWORD *)v7 + 1) = v20;
      ++v6;
      v7 += 12;
      v8 += 12;
      if ( v6 >= a3 )
        goto LABEL_30;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 32, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_30:
    v22 = RIMIDEInjectKeyboardInput(a1, v24, a3);
    if ( v22 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v21, 1, 33, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v22);
    }
  }
  return (unsigned int)v22;
}

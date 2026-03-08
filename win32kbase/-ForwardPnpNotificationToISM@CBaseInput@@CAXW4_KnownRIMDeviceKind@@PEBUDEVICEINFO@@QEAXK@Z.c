/*
 * XREFs of ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C002EC7C
 * Callers:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C002EFEC (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C002F5A4 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x1C0081230 (SendMessageTo.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall CBaseInput::ForwardPnpNotificationToISM(int a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  bool v9; // cf
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // di
  const void *v14; // rdx
  int v15; // eax
  __int64 v16; // xmm1_8
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rcx
  _DWORD v22[144]; // [rsp+30h] [rbp-D0h] BYREF

  result = (unsigned int)(a4 - 2);
  if ( (unsigned int)result <= 1 )
  {
    memset(&v22[4], 0, 0x22CuLL);
    v9 = __CFSHR__(*(_DWORD *)(a2 + 184), 14);
    v22[0] = a1;
    v22[1] = a3;
    v22[3] = -v9;
    v10 = *(_QWORD *)(a2 + 384);
    v22[2] = a4;
    if ( v10 )
    {
      v18 = *(_QWORD *)(v10 + 88);
      if ( v18 )
        v22[4] = *(_DWORD *)(v18 + 56);
    }
    v11 = *(_WORD *)(a2 + 208);
    if ( v11 )
    {
      v12 = v11 >> 1;
      v13 = 260;
      if ( v12 > 0x104u )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2077LL);
      else
        v13 = v12;
      v14 = *(const void **)(a2 + 216);
      v22[12] = v13;
      memmove(&v22[13], v14, 2LL * v13);
    }
    if ( a1 == 1 )
    {
      v17 = *(_DWORD *)(a2 + 464);
      *(_QWORD *)&v22[5] = *(_QWORD *)(a2 + 456);
      v22[7] = v17;
    }
    else if ( a1 == 2 )
    {
      v15 = *(_DWORD *)(a2 + 480);
      v16 = *(_QWORD *)(a2 + 472);
      *(_OWORD *)&v22[5] = *(_OWORD *)(a2 + 456);
      v22[11] = v15;
      *(_QWORD *)&v22[9] = v16;
    }
    else
    {
      v19 = *(_QWORD *)(a2 + 464);
      LOWORD(v22[5]) = *(_WORD *)(v19 + 16);
      v20 = *(_WORD *)(v19 + 18);
      v21 = *(_QWORD *)(a2 + 456);
      HIWORD(v22[5]) = v20;
      v22[6] = *(_DWORD *)(v21 + 110);
      LOWORD(v22[7]) = *(_WORD *)(v21 + 114);
    }
    return SendMessageTo(12LL, v22, 572LL);
  }
  return result;
}

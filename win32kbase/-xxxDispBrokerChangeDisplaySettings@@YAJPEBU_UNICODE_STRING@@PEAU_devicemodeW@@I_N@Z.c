/*
 * XREFs of ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0156F40
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015DB90 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1C0022700 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0156854 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     _lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_::operator() @ 0x1C0156CEC (_lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_--operator().c)
 */

__int64 __fastcall xxxDispBrokerChangeDisplaySettings(
        const struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        int a3,
        char a4)
{
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ecx
  _QWORD v8[4]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v9[20]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v10[76]; // [rsp+98h] [rbp-70h] BYREF
  const struct _UNICODE_STRING *v11; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _devicemodeW *v12; // [rsp+200h] [rbp+F8h] BYREF
  int v13; // [rsp+208h] [rbp+100h] BYREF
  char v14; // [rsp+210h] [rbp+108h] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  v11 = a1;
  memset(v9, 0, 0x48uLL);
  v8[0] = &v14;
  v8[1] = &v13;
  v8[2] = &v12;
  v8[3] = &v11;
  memset(v10, 0, 0x128uLL);
  v10[10] = 7;
  v10[11] = 1;
  result = DrvSampleDisplayState(&v10[12]);
  if ( (int)result >= 0 )
  {
    v10[0] = 19398912;
    LOWORD(v10[1]) = 0x8000;
    result = lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_::operator()((__int64)v8, (__int64)v10);
    if ( (int)result >= 0 )
    {
      v6 = DispBroker::DispBrokerClient::SyncMessage<8>(
             (__int64)DispBroker::DispBrokerClient::s_pSessionBroker,
             (__int64)v10,
             (__int64)v9,
             v5);
      v7 = v9[16];
      if ( v6 < 0 )
        return (unsigned int)v6;
      return v7;
    }
  }
  return result;
}

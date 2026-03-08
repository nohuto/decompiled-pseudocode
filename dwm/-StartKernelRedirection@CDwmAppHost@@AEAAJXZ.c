/*
 * XREFs of ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x14000394C
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x1400038B0 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x1400026E8 (--1CPortClient@@UEAA@XZ.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x14000272C (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000309C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140003A18 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14000B068 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDwmAppHost::StartKernelRedirection(CDwmAppHost *this, __int64 a2, void *a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // r8d
  int v6; // eax
  signed int LastError; // eax
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-68h]
  _BYTE v11[16]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+40h] [rbp-48h]
  _BYTE v13[16]; // [rsp+68h] [rbp-20h] BYREF

  v3 = 0;
  if ( *(&hInstance + 1) )
  {
    CPortClient::CPortClient((CPortClient *)v11, a2, a3);
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(v4, (unsigned int)&EstablishKernelRedirection, v5, 1, (__int64)v13);
    v12 = (__int64)*(&hInstance + 1);
    v6 = CPortClient::SendSimpleAsyncRequest((CPortClient *)v11, 0x40000025u);
    v3 = v6;
    if ( v6 < 0 )
    {
      v10 = 334;
    }
    else
    {
      SetLastError(0);
      if ( !(unsigned int)DwmKernelStartup() )
      {
        LastError = GetLastError();
        v3 = LastError;
        if ( LastError > 0 )
          v3 = (unsigned __int16)LastError | 0x80070000;
        v10 = 336;
        if ( (v3 & 0x80000000) == 0 )
          v3 = -2003304445;
        v9 = v3;
        goto LABEL_17;
      }
      v6 = CPortClient::SendSimpleAsyncRequest((CPortClient *)v11, 0x40000026u);
      v3 = v6;
      if ( v6 >= 0 )
      {
LABEL_7:
        CPortClient::~CPortClient((CPortClient *)v11);
        return v3;
      }
      v10 = 338;
    }
    v9 = v6;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010A38, 2LL, v9, v10);
    goto LABEL_7;
  }
  return v3;
}

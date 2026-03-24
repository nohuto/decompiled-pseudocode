/*
 * XREFs of UsbhBuildCompatibleID @ 0x1C004FEC0
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039FD8 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C00542B4 (UsbhCreatePdo.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     Feature_2473223486__private_IsEnabledDeviceUsage @ 0x1C001CFD8 (Feature_2473223486__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhBuildClassCompatibleID @ 0x1C004F94C (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C00505A0 (UsbhBuildDeviceCompatibleID.c)
 */

__int64 __fastcall UsbhBuildCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD *v10; // rax
  _OWORD *v11; // rbx

  Log(a1, 4096, 1667451204, a2, 0LL);
  if ( !a2 )
  {
    Feature_2473223486__private_IsEnabledDeviceUsage();
    PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x1AuLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *(_OWORD *)PoolWithTag = 0LL;
      PoolWithTag[2] = 0LL;
      *((_WORD *)PoolWithTag + 12) = 0;
      *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\UNKNOWN";
      *((_DWORD *)PoolWithTag + 4) = *(_DWORD *)L"OWN";
      *((_WORD *)PoolWithTag + 10) = aUsbUnknown[10];
      *(_QWORD *)(a3 + 8) = PoolWithTag;
      *(_DWORD *)(a3 + 4) = 26;
      return 0LL;
    }
    return 3221225626LL;
  }
  v9 = (unsigned int)PdoExt(a2)[355];
  if ( (v9 & 0x40) != 0 )
  {
    v10 = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x44uLL, 0x42554855u);
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, 0x44uLL);
      *v11 = xmmword_1C0065C20;
      v11[1] = xmmword_1C0065C30;
      v11[2] = xmmword_1C0065C40;
      v11[3] = xmmword_1C0065C50;
      *((_DWORD *)v11 + 16) = 0;
      *(_QWORD *)(a3 + 8) = v11;
      *(_DWORD *)(a3 + 4) = 68;
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( (v9 & 0x20) != 0 )
    return UsbhBuildDeviceCompatibleID(v9, v8, a3);
  else
    return UsbhBuildClassCompatibleID(a1, a2, a3);
}

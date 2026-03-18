/*
 * XREFs of ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C004E6D0
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004DD80 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004E1A0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C004E28C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     HMDestroyObject @ 0x1C004E3A0 (HMDestroyObject.c)
 *     DestroyMonitor @ 0x1C0050630 (DestroyMonitor.c)
 *     DestroyKF @ 0x1C0051F60 (DestroyKF.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B9600 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     HMUnlockDestroyObject @ 0x1C00D0300 (HMUnlockDestroyObject.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C01E2770 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMMarkObjectDestroyWorker(_DWORD *a1)
{
  char *v1; // r8
  char v2; // al

  v1 = (char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*a1;
  v2 = v1[25] | 1;
  v1[25] = v2;
  if ( !a1[2] )
    return 1LL;
  v1[25] = v2 & 0xFD;
  return 0LL;
}

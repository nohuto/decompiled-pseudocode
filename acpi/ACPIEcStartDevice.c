/*
 * XREFs of ACPIEcStartDevice @ 0x1C0025450
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIEcCreateEcData @ 0x1C00250B4 (ACPIEcCreateEcData.c)
 *     ACPIInitStartDevice @ 0x1C002DA2C (ACPIInitStartDevice.c)
 *     AMLIIsEqualHandle @ 0x1C0048794 (AMLIIsEqualHandle.c)
 */

__int64 __fastcall ACPIEcStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // r14
  __int64 v6; // rdi
  _QWORD *v7; // r8
  _QWORD *v8; // rbx
  __int64 EcData; // rax
  __int64 result; // rax
  __int64 v11; // rcx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = DeviceExtension;
  v7 = *(_QWORD **)(DeviceExtension + 184);
  if ( !v7 )
  {
    v8 = (_QWORD *)(DeviceExtension + 760);
    if ( !gECDTContext || !(unsigned __int8)AMLIIsEqualHandle(*v8, *(_QWORD *)(gECDTContext + 56)) )
    {
      EcData = ACPIEcCreateEcData();
      v7 = (_QWORD *)EcData;
      if ( !EcData )
        return 3221225626LL;
      v11 = *v8;
      *(_QWORD *)(EcData + 56) = *v8;
      dword_1C006F938 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    }
    *(_QWORD *)(v6 + 184) = v7;
  }
  *v7 = a1;
  result = ACPIInitStartDevice(a1, v5, (unsigned int)&ACPIEcStartDeviceCompletion, a2, a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}

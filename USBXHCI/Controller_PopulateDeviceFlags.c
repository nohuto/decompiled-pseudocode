/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x1C00738B4
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C001C340 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_Create @ 0x1C00712C4 (Controller_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C000B0F8 (Controller_IsSecureDevice.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C001AB68 (Controller_PopulateDeviceFlagsFromKse.c)
 *     WPP_RECORDER_SF_di @ 0x1C001C448 (WPP_RECORDER_SF_di.c)
 *     Controller_PopulateTestRegistrySettings @ 0x1C001C4E0 (Controller_PopulateTestRegistrySettings.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C00739B8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C0073B6C (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x1C0073C40 (Controller_PopulateDeviceFlagsFromACPI.c)
 */

_UNKNOWN **__fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, int a3)
{
  int v4; // edx
  int v5; // r8d
  unsigned int v6; // edi
  __int16 v7; // ax
  _QWORD *v8; // rsi
  _UNKNOWN **result; // rax
  __int16 v10; // ax
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-28h]

  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  Controller_PopulateDeviceFlagsFromACPI(a1);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  Controller_PopulateTestRegistrySettings(a1);
  v6 = 0;
  if ( Controller_IsSecureDevice(a1) )
    *(_QWORD *)(a1 + 336) |= 0x20080uLL;
  if ( !*(_BYTE *)(a1 + 633) )
    *(_QWORD *)(a1 + 344) &= ~1uLL;
  v7 = *(_WORD *)(a1 + 248);
  *(_QWORD *)(a1 + 352) = 0LL;
  switch ( v7 )
  {
    case 7027:
      v10 = *(_WORD *)(a1 + 252);
      if ( v10 == 4105 )
      {
        *(_QWORD *)(a1 + 352) = 2LL;
      }
      else if ( v10 == 4352 )
      {
        v4 = 16;
        if ( *(_BYTE *)(a1 + 256) == 16 )
          *(_QWORD *)(a1 + 352) = 1LL;
      }
      break;
    case 7023:
      if ( *(_WORD *)(a1 + 252) == 28707 )
        *(_QWORD *)(a1 + 352) = 12LL;
      break;
    case 6945:
      v4 = 16;
      v11 = 0LL;
      if ( (unsigned __int16)(*(_WORD *)(a1 + 252) - 4160) <= 2u )
        v11 = 16LL;
      *(_QWORD *)(a1 + 352) = v11;
      break;
  }
  v8 = (_QWORD *)(a1 + 336);
  do
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      result = (_UNKNOWN **)WPP_RECORDER_SF_di(*(_QWORD *)(a1 + 72), v4, v5, 171, v12, v6, *v8);
    }
    ++v6;
    ++v8;
  }
  while ( v6 < 2 );
  return result;
}

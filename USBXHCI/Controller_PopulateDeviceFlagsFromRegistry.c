/*
 * XREFs of Controller_PopulateDeviceFlagsFromRegistry @ 0x1C00739B8
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C00738B4 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_di @ 0x1C001C448 (WPP_RECORDER_SF_di.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromRegistry(__int64 *a1, int a2)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  unsigned int v10; // edi
  _QWORD *v11; // rsi
  __int64 *v12; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+10h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF

  v3 = *a1;
  v15 = 0LL;
  v14 = 0;
  DestinationString = 0LL;
  if ( a2 == 2 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 312))(WdfDriverGlobals, v3);
    v12 = &v15;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01023 + 952))(
               WdfDriverGlobals,
               v5,
               131097LL,
               0LL);
  }
  else
  {
    LODWORD(v12) = 0;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01023 + 384))(
               WdfDriverGlobals,
               v3,
               1LL,
               131097LL);
  }
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      result = WPP_RECORDER_SF_d(a1[9], v7, 4, 164, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, result);
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"UseStrictBiosHandoff");
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, unsigned int *))(WdfFunctions_01023 + 1920))(
               WdfDriverGlobals,
               v15,
               &DestinationString,
               &v14);
    if ( (int)result >= 0 )
    {
      result = v14;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          result = 0x8000000000000000uLL;
          a1[42] |= 0x8000000000000000uLL;
        }
      }
      else
      {
        result = 0x7FFFFFFFFFFFFFFFLL;
        a1[42] &= ~0x8000000000000000uLL;
      }
    }
  }
  v9 = v15;
  if ( v15 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = (__int64)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      result = WPP_RECORDER_SF_d(a1[9], v9, 4, 165, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, a2);
    }
  }
  v10 = 0;
  v11 = a1 + 42;
  do
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      result = (__int64)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v9) = 5;
        result = WPP_RECORDER_SF_di(a1[9], v9, v8, 166, (_DWORD)v12, v10, *v11);
      }
    }
    ++v10;
    ++v11;
  }
  while ( v10 < 2 );
  return result;
}

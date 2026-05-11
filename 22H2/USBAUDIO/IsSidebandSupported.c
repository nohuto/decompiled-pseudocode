/*
 * XREFs of IsSidebandSupported @ 0x1C0022728
 * Callers:
 *     DeviceStart @ 0x1C00228A0 (DeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 *     IsClassDriverOnly @ 0x1C002253C (IsClassDriverOnly.c)
 */

__int64 __fastcall IsSidebandSupported(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // ebp
  int v9; // eax
  __int64 v10; // rdx
  int v11; // edi

  v2 = *(_QWORD *)(a1 + 16);
  v4 = pExtBusDeviceDispatchTable;
  *a2 = 0;
  v6 = (_DWORD *)(v2 + 852);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(v4 + 40))(a1, v2 + 852);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      9u,
      0xFu,
      (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
      *v6);
  v9 = IsClassDriverOnly(a1);
  v10 = 1LL;
  v11 = v9;
  if ( (unsigned int)(*v6 - 1) > 1 || *(_DWORD *)(v2 + 992) || !v9 )
    v10 = 0LL;
  *a2 = v10;
  if ( !(_DWORD)v10 )
  {
    if ( *(_DWORD *)(v2 + 992) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        v10 + 9,
        v10 + 16,
        (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids);
    if ( !v11 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        9u,
        0x11u,
        (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids);
    if ( !*v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        9u,
        0x12u,
        (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids);
    *v6 = 0;
  }
  return v8;
}

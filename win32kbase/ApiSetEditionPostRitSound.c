/*
 * XREFs of ApiSetEditionPostRitSound @ 0x1C0241DC8
 * Callers:
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E3F00 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01E4050 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01E4320 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01E4460 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01E46D0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C01E48A0 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E48F0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E49D0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4A90 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01E5AD0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01E5C10 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E6040 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01E61D0 (-xxxTwoKeysDown@@YAHH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionPostRitSound(
        unsigned int a1,
        __int64 a2,
        __int64 a3))(_QWORD, _QWORD, _QWORD)
{
  __int64 v3; // rdi
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  void *v7; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  void *v9; // r8

  v3 = a3;
  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v7 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      150,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02D7570;
  if ( qword_1C02D7570 )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02D7570(v5, a2, a3, v7);
    if ( (int)result >= 0 )
    {
      result = qword_1C02D7578;
      if ( qword_1C02D7578 )
        result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02D7578(a1, 0LL, v3);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)a2 || v6 )
  {
    v9 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v9) = v6;
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WPP_RECORDER_AND_TRACE_SF_(
                                                             WPP_GLOBAL_Control->AttachedDevice,
                                                             a2,
                                                             (_DWORD)v9,
                                                             WPP_GLOBAL_Control->DeviceExtension,
                                                             5,
                                                             10,
                                                             151,
                                                             (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return result;
}

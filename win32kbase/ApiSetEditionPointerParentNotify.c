/*
 * XREFs of ApiSetEditionPointerParentNotify @ 0x1C0241170
 * Callers:
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01FCB8C (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     EditionPointerParentNotify @ 0x1C0271B00 (EditionPointerParentNotify.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionPointerParentNotify(
        _OWORD *a1,
        __int64 a2,
        __int64 a3))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  PDEVICE_OBJECT v6; // rcx
  char v7; // bl
  void *v8; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  void *v15; // r8
  _OWORD v16[7]; // [rsp+40h] [rbp-88h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  v7 = 1;
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
  v8 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      214,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  result = qword_1C02D7A68;
  if ( qword_1C02D7A68 )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C02D7A68(v6, a2, a3, v8);
    if ( (int)result >= 0 )
    {
      v10 = a1[1];
      v16[0] = *a1;
      v16[2] = a1[2];
      v11 = a1[4];
      v16[1] = v10;
      v12 = a1[3];
      v16[4] = v11;
      v13 = a1[6];
      v16[3] = v12;
      v14 = a1[5];
      v16[6] = v13;
      v16[5] = v14;
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))EditionPointerParentNotify(v16, v4, v3);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( (_BYTE)a2 || v7 )
  {
    v15 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v15) = v7;
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WPP_RECORDER_AND_TRACE_SF_(
                                                                     WPP_GLOBAL_Control->AttachedDevice,
                                                                     a2,
                                                                     (_DWORD)v15,
                                                                     WPP_GLOBAL_Control->DeviceExtension,
                                                                     5,
                                                                     10,
                                                                     215,
                                                                     (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return result;
}

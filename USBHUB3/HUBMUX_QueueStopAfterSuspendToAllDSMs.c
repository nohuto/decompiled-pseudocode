_QWORD *__fastcall HUBMUX_QueueStopAfterSuspendToAllDSMs(__int64 a1)
{
  __int64 v2; // rbx
  KIRQL v3; // r12
  int v4; // ebp
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *result; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // [rsp+30h] [rbp-38h] BYREF
  _QWORD **v17; // [rsp+38h] [rbp-30h]

  v17 = &v16;
  v2 = a1 + 2320;
  v16 = &v16;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2320));
  _InterlockedOr((volatile signed __int32 *)(v2 + 32), 8u);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 64);
  v6 = 0;
  v7 = v5 - 192;
  if ( v2 + 64 != v5 )
  {
    do
    {
      ++v6;
      _InterlockedOr((volatile signed __int32 *)(v7 + 240), 4u);
      v8 = v17;
      ++v4;
      v9 = (_QWORD *)(v7 + 208);
      if ( *v17 != &v16 )
        __fastfail(3u);
      *(_QWORD *)(v7 + 216) = v17;
      *v9 = &v16;
      *v8 = v9;
      v17 = (_QWORD **)(v7 + 208);
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v7);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v10,
        "DSM PnPPower Tag",
        2119LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
      v11 = *(_QWORD *)(v7 + 192);
      v7 = v11 - 192;
    }
    while ( v2 + 64 != v11 );
  }
  *(_DWORD *)(v2 + 12) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v3);
  if ( !v4 )
    return (_QWORD *)HUBSM_AddEvent(a1 + 1264, 2022);
  v12 = (__int64)(v16 - 26);
  result = v16;
  while ( 1 )
  {
    v15 = *result - 208LL;
    if ( &v16 == result )
      break;
    HUBSM_AddEvent(v12 + 504, 4026);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v12);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v14,
      "DSM PnPPower Tag",
      2168LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    result = (_QWORD *)(v15 + 208);
    v12 = v15;
  }
  if ( !v6 )
    return (_QWORD *)HUBSM_AddEvent(a1 + 1264, 2022);
  return result;
}

_QWORD *__fastcall HUBMUX_QueuePowerUpEventToDSMs(__int64 a1, int a2)
{
  __int64 v3; // rsi
  KIRQL v5; // al
  int v6; // edi
  __int64 v7; // r8
  KIRQL v8; // r15
  bool v9; // zf
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *result; // rax
  _QWORD *v16; // rdi
  __int64 i; // rbx
  __int64 v18; // rax
  _QWORD *v19; // [rsp+30h] [rbp-38h] BYREF
  _QWORD **v20; // [rsp+38h] [rbp-30h]

  v20 = &v19;
  v3 = a1 + 2320;
  v19 = &v19;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2320));
  v6 = 0;
  v7 = *(_QWORD *)(v3 + 64);
  v8 = v5;
  v9 = v3 + 64 == v7;
  v10 = v7 - 192;
  while ( !v9 )
  {
    if ( (*(_DWORD *)(v10 + 240) & 1) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v10 + 240), 0xFFFFFFFE);
      _InterlockedOr((volatile signed __int32 *)(v10 + 240), 4u);
      v11 = v20;
      ++v6;
      v12 = (_QWORD *)(v10 + 208);
      if ( *v20 != &v19 )
        __fastfail(3u);
      *(_QWORD *)(v10 + 216) = v20;
      *v12 = &v19;
      *v11 = v12;
      v20 = (_QWORD **)(v10 + 208);
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v10);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v13,
        "DSM PnPPower Tag",
        2350LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    }
    v14 = *(_QWORD *)(v10 + 192);
    v9 = v3 + 64 == v14;
    v10 = v14 - 192;
  }
  *(_DWORD *)(v3 + 12) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v8);
  if ( !v6 )
    return (_QWORD *)HUBSM_AddEvent(a1 + 1264, 2014);
  v16 = v19 - 26;
  result = v19;
  for ( i = *v19 - 208LL; &v19 != result; i = *(_QWORD *)(i + 208) - 208LL )
  {
    HUBSM_AddEvent((__int64)(v16 + 63), a2);
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v16);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v18,
      "DSM PnPPower Tag",
      2391LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    result = (_QWORD *)(i + 208);
    v16 = (_QWORD *)i;
  }
  return result;
}

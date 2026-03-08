/*
 * XREFs of HUBMISC_EvtDsmDestroy @ 0x1C0031EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_EvtDsmDestroy(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  PVOID *v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C006A0D0);
  v2 = v1;
  if ( v1[187] )
  {
    (*(void (**)(void))(*v1 + 520LL))();
    (*(void (__fastcall **)(_QWORD))(*v2 + 504LL))(v2[187]);
    v2[187] = 0LL;
  }
  v3 = (PVOID *)v2[331];
  if ( v3 && *v3 )
    ExFreePoolWithTag(*v3, 0x68334855u);
  v4 = (void *)v2[331];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x68334855u);
  v5 = (void *)v2[269];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x64334855u);
  RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 265));
  v6 = (void *)v2[306];
  if ( v6 )
    ExFreePoolWithTag(v6, 0x64334855u);
  v7 = (void *)v2[271];
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  v8 = (void *)v2[252];
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  v9 = (void *)v2[263];
  if ( v9 )
    ExFreePoolWithTag(v9, 0x64334855u);
  v10 = (void *)v2[253];
  if ( v10 )
    ExFreePoolWithTag(v10, 0x64334855u);
  v11 = (void *)v2[254];
  if ( v11 )
    ExFreePoolWithTag(v11, 0x64334855u);
  v12 = (void *)v2[257];
  if ( v12 )
    ExFreePoolWithTag(v12, 0x64334855u);
  v13 = (void *)v2[321];
  if ( v13 )
    ExFreePoolWithTag(v13, 0x64334855u);
  v14 = (void *)v2[311];
  if ( v14 )
    ExFreePoolWithTag(v14, 0x64334855u);
  *((_DWORD *)v2 + 24) = 0;
  v15 = (void *)v2[13];
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x64334855u);
    v2[13] = 0LL;
  }
  v16 = (void *)v2[17];
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x64334855u);
    v2[17] = 0LL;
  }
  v17 = (void *)v2[15];
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x64334855u);
    v2[15] = 0LL;
  }
  if ( v2[31] )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[31],
      "DSM Tag",
      7355LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[31] = 0LL;
  }
  v18 = v2[52];
  if ( v18 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[52],
      "DSM Tag",
      7355LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[52] = 0LL;
  }
  v19 = v2[193];
  if ( v19 )
  {
    LOBYTE(v18) = 1;
    ExDeleteTimer(v19, v18, 0LL, 0LL);
    v2[193] = 0LL;
  }
  if ( v2[302] )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[302],
      "DSM Tag",
      7355LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[302] = 0LL;
  }
  if ( v2[54] )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[54],
      "DSM Tag",
      7355LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[54] = 0LL;
  }
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2[1]);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v20,
           "DSM Create Tag",
           7441LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
}

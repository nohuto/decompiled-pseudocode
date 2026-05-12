/*
 * XREFs of RaidPowerPassToMiniPort @ 0x1C0014B48
 * Callers:
 *     RaidAdapterStopOnPowerdown @ 0x1C0014A10 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0014A80 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaSrbSetMiniportContext @ 0x1C000674C (RaSrbSetMiniportContext.c)
 *     RaAdapterStartPowerIo @ 0x1C0014CB0 (RaAdapterStartPowerIo.c)
 *     RaInitializePower @ 0x1C002B27C (RaInitializePower.c)
 *     WPP_SF_qqq @ 0x1C0033880 (WPP_SF_qqq.c)
 *     WPP_SF_qqqq @ 0x1C00365F0 (WPP_SF_qqqq.c)
 *     WPP_SF_qqqD @ 0x1C00427B8 (WPP_SF_qqqD.c)
 */

__int64 __fastcall RaidPowerPassToMiniPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v7; // r14d
  __int64 v8; // rcx
  _WORD *v9; // rbx
  __int64 v10; // r8
  int v11; // ecx
  struct _DEVICE_OBJECT *v12; // r10
  unsigned int started; // ebp
  __int64 v14; // r8
  __int64 Timer_high; // rdx
  char *v17; // rcx
  __int64 v18; // rax
  _QWORD v19[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 184);
  v19[0] = 0LL;
  v7 = a1;
  if ( *(_DWORD *)v3 == 1 )
    v3 = *(_QWORD *)(v3 + 24);
  v8 = *(_QWORD *)(v3 + 4696);
  v9 = (_WORD *)(v3 + 4528);
  if ( v8 )
    goto LABEL_4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      58LL,
      &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids,
      a2,
      v3 + 4528,
      v3);
  }
  RaInitializePower(v3);
  v8 = *(_QWORD *)(v3 + 4696);
  if ( v8 )
  {
LABEL_4:
    *(_BYTE *)(v3 + 4704) = 1;
    v10 = v8 + 1088;
    v19[2] = v8 + 32;
    v19[1] = v8 + 1088;
    v19[3] = v8 + 832;
    v11 = *(_BYTE *)(v3 + 4705) != 0 ? 2304 : 256;
    if ( *(_BYTE *)(v3 + 426) == 1 )
    {
      *(_DWORD *)(v3 + 4552) = v11;
      *v9 = 8;
      *(_WORD *)(v3 + 4564) = 2;
      *(_QWORD *)(v3 + 4624) = 0LL;
      *(_QWORD *)(v3 + 4608) = a2;
      *(_BYTE *)(v3 + 4530) = 40;
      *(_DWORD *)(v3 + 4536) = 1397899864;
      *(_DWORD *)(v3 + 4540) = 1;
      *(_DWORD *)(v3 + 4544) = 168;
      *(_DWORD *)(v3 + 4548) = 36;
      *(_DWORD *)(v3 + 4568) = *(_DWORD *)(v3 + 5728);
      *(_DWORD *)(v3 + 4648) = 144;
      *(_DWORD *)(v3 + 4580) = 128;
      *(_QWORD *)(v3 + 4592) = 0LL;
      *(_QWORD *)(v3 + 4584) = 1LL;
      *(_WORD *)(v3 + 4656) = 1;
      *(_DWORD *)(v3 + 4660) = 4;
      *(_WORD *)(v3 + 4658) = *(_WORD *)(v3 + 56);
      *(_WORD *)(v3 + 4664) = 0;
      *(_BYTE *)(v3 + 4666) = 0;
      v17 = (char *)v9 + *(unsigned int *)(v3 + 4648);
      *(_DWORD *)v17 = 97;
      *((_DWORD *)v17 + 1) = 12;
      *((_DWORD *)v17 + 4) = *(_DWORD *)(v4 + 32);
      *((_DWORD *)v17 + 3) = *(_DWORD *)(v4 + 24);
      v17[8] = 1;
    }
    else
    {
      *(_QWORD *)(v3 + 4576) = 0LL;
      *v9 = 88;
      *(_BYTE *)(v3 + 4530) = 36;
      *(_QWORD *)(v3 + 4552) = 0LL;
      *(_DWORD *)(v3 + 4544) = 0;
      *(_DWORD *)(v3 + 4592) = *(_DWORD *)(v4 + 32);
      *(_DWORD *)(v3 + 4536) = *(_DWORD *)(v4 + 24);
      *(_DWORD *)(v3 + 4540) = v11;
      *(_DWORD *)(v3 + 4548) = *(_DWORD *)(v3 + 5728);
      *(_DWORD *)(v3 + 4532) = 1;
    }
    RaSrbSetMiniportContext(v3, v3 + 4528, v10);
    if ( WPP_GLOBAL_Control != v12
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      if ( *(_BYTE *)(v3 + 4530) == 40 )
        v18 = *(_QWORD *)(v3 + 4632);
      else
        v18 = *(_QWORD *)(v3 + 4584);
      WPP_SF_qqqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids,
        a2,
        v3 + 4528,
        v18,
        v3);
    }
    started = RaAdapterStartPowerIo(v7, a2, (int)v3 + 4528, (unsigned int)v19, a3);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (Timer_high & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, Timer_high, v14, a2, v3 + 4528, v3, started);
    }
    return started;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        59LL,
        &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids,
        a2,
        v3 + 4528,
        v3);
    }
    return 3221225495LL;
  }
}

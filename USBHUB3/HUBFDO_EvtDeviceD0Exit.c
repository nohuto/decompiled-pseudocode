/*
 * XREFs of HUBFDO_EvtDeviceD0Exit @ 0x1C000D7D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000CE90 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C000CF08 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x1C0032DEC (HUBMISC_WaitForSignal.c)
 *     SleepstudyHelper_ComponentInactive @ 0x1C0043DEC (SleepstudyHelper_ComponentInactive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceD0Exit(__int64 a1, int a2)
{
  NTSTATUS v4; // ebx
  char v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // eax
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rbx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]

  v4 = 0;
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A198);
  v7 = v6;
  *(_DWORD *)(v6 + 2600) = a2;
  _InterlockedAnd((volatile signed __int32 *)(v6 + 40), 0xFFFDFFFF);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v8 = v6 + 2276;
    v4 = EtwActivityIdControl(3u, (LPGUID)(v6 + 2276));
    if ( v4 >= 0 )
    {
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v7 + 816), v8);
      v5 = 1;
    }
  }
  if ( *(_QWORD *)(v7 + 2616) )
    SleepstudyHelper_ComponentInactive();
  if ( *(_QWORD *)(v7 + 2624) )
    SleepstudyHelper_ComponentInactive();
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v10 = v9;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v11 = *(_DWORD *)(v7 + 40) >> 10;
    LOWORD(v11) = (*(_DWORD *)(v7 + 40) & 0x400) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v11,
      &USBHUB3_ETW_EVENT_HUB_D0_EXIT_START,
      (const GUID *)(v7 + 2276),
      *(_QWORD *)(v7 + 248),
      a2,
      v9,
      v11);
  }
  if ( !v10 )
  {
    v13 = (void *)(v7 + 1152);
    KeResetEvent((PRKEVENT)(v7 + 1152));
    v14 = v7 + 1264;
    v15 = 2019;
    if ( a2 == 5 )
    {
LABEL_20:
      HUBSM_AddEvent(v14, v15);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v7);
      HUBMISC_WaitForSignal(v13);
      v4 = *(_DWORD *)(v7 + 1176);
      goto LABEL_21;
    }
LABEL_19:
    v15 = 2015;
    goto LABEL_20;
  }
  if ( v10 == 2 || v10 == 3 || v10 == 4 || (v12 = (unsigned int)(v10 - 5), (unsigned int)v12 <= 1) )
  {
    v13 = (void *)(v7 + 1152);
    KeResetEvent((PRKEVENT)(v7 + 1152));
    v14 = v7 + 1264;
    goto LABEL_19;
  }
LABEL_21:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v18) = v10;
    LODWORD(v17) = v4;
    McTemplateK0pqq_EtwWriteTransfer(
      v12,
      &USBHUB3_ETW_EVENT_HUB_D0_EXIT_COMPLETE,
      (const GUID *)(v7 + 2276),
      *(_QWORD *)(v7 + 248),
      v17,
      v18);
  }
  if ( v5 == 1 )
    *(_OWORD *)(v7 + 2276) = 0LL;
  return (unsigned int)v4;
}

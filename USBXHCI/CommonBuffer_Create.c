/*
 * XREFs of CommonBuffer_Create @ 0x1C0072F2C
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C000B0F8 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     XilCoreCommonBuffer_Create @ 0x1C001BE7C (XilCoreCommonBuffer_Create.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C00737C4 (Counter_CreateCommonBufferInstance.c)
 */

__int64 __fastcall CommonBuffer_Create(__int64 a1, char a2, __int64 *a3)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // esi
  int v9; // edx
  __int64 v10; // rbx
  int v11; // eax
  int v12; // edx
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int128 v16; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int128 v19; // [rsp+68h] [rbp-18h]
  void *v20; // [rsp+78h] [rbp-8h]
  unsigned __int64 v21; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)&v16 = 56LL;
  LODWORD(v15) = 0;
  v21 = 0LL;
  v17 = 0LL;
  v18 = 0x100000001LL;
  v20 = off_1C0063298;
  v19 = *(unsigned __int64 *)(a1 + 8);
  *((_QWORD *)&v16 + 1) = CommonBuffer_WdfEvtCleanupCallback;
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, unsigned __int64 *))(WdfFunctions_01023 + 1656))(
         WdfDriverGlobals,
         &v16,
         &v21);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v7, 8, 10, (__int64)&WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids, v6);
    }
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v21,
            off_1C0063298);
    *(_QWORD *)v10 = a1;
    *(_BYTE *)(v10 + 80) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(*(_QWORD *)(a1 + 72), v9, 8, 11, (__int64)&WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids, v21);
    }
    KeInitializeSpinLock((PKSPIN_LOCK)(v10 + 48));
    *(_QWORD *)(v10 + 64) = v10 + 56;
    *(_QWORD *)(v10 + 56) = v10 + 56;
    XilCoreCommonBuffer_Create(a1, v10, v10 + 88);
    KeInitializeEvent((PRKEVENT)(v10 + 24), NotificationEvent, 1u);
    if ( !Controller_IsSecureDevice(a1) )
    {
      v20 = 0LL;
      *(_QWORD *)&v14 = 24LL;
      v17 = 0LL;
      v18 = 0x100000001LL;
      v19 = v21;
      v15 = 1LL;
      *((_QWORD *)&v14 + 1) = CommonBuffer_RebalanceResourcesWorkItem;
      v16 = 0LL;
      LODWORD(v16) = 56;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01023 + 3032))(
              WdfDriverGlobals,
              &v14,
              &v16,
              v10 + 72);
      v8 = v11;
      if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v12,
          8,
          12,
          (__int64)&WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids,
          v11);
      }
    }
    *(_QWORD *)(v10 + 8) = v10 + 288;
    Counter_CreateCommonBufferInstance(v10);
    *a3 = v10;
  }
  return v8;
}

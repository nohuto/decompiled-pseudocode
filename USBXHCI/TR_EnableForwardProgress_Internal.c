/*
 * XREFs of TR_EnableForwardProgress_Internal @ 0x1C0041604
 * Callers:
 *     Endpoint_UcxEvtEndpointEnableForwardProgress @ 0x1C003C720 (Endpoint_UcxEvtEndpointEnableForwardProgress.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0007C90 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDd @ 0x1C001BCB0 (WPP_RECORDER_SF_DDd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001E054 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_EnableForwardProgress_Internal(_QWORD *a1, ULONG a2)
{
  int v4; // edi
  struct _MDL *Mdl; // rsi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // eax
  struct _MDL *v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  _DWORD v15[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+50h] [rbp-28h]
  __int128 v17; // [rsp+58h] [rbp-20h]

  v4 = (*(__int64 (**)(void))(a1[4] + 48LL))();
  if ( v4 >= 0 )
  {
    Mdl = IoAllocateMdl(0LL, a2, 0, 0, 0LL);
    if ( Mdl )
    {
      v15[3] = 0;
      v8 = a1[9];
      v16 = TR_WdfEvtIoExamineIrpForForwardProgress;
      v17 = 0LL;
      v15[0] = 40;
      v15[1] = 1;
      v15[2] = 2;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01023 + 3120))(
             WdfDriverGlobals,
             v8,
             v15);
      if ( v4 >= 0 )
      {
        v11 = (struct _MDL *)a1[15];
        if ( v11 )
          IoFreeMdl(v11);
        a1[15] = Mdl;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = a1[7];
          v13 = *(_DWORD *)(v12 + 144);
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_DDD(
            *(_QWORD *)(a1[5] + 72LL),
            v12,
            14,
            21,
            (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
            *(_BYTE *)(a1[6] + 135LL),
            v13,
            a2);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = a1[7];
          v10 = *(_DWORD *)(v9 + 144);
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_DDd(
            *(_QWORD *)(a1[5] + 72LL),
            v9,
            14,
            20,
            (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
            *(_BYTE *)(a1[6] + 135LL),
            v10,
            v4);
        }
        IoFreeMdl(Mdl);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = a1[7];
        v7 = *(_DWORD *)(v6 + 144);
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(a1[5] + 72LL),
          v6,
          14,
          19,
          (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
          *(_BYTE *)(a1[6] + 135LL),
          v7);
      }
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}

/*
 * XREFs of Interrupter_CreateInterrupter @ 0x1C0070198
 * Callers:
 *     Interrupter_Create @ 0x1C006FDC8 (Interrupter_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C0072C28 (Interrupter_PrepareHardware.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C000B0F8 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00141F4 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     DynamicLock_Create @ 0x1C001AA74 (DynamicLock_Create.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     Counter_CreateInterrupterInstance @ 0x1C006E9EC (Counter_CreateInterrupterInstance.c)
 */

__int64 __fastcall Interrupter_CreateInterrupter(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int64 **a7)
{
  char v8; // r13
  char IsSecureDevice; // al
  __int64 v11; // rdx
  int v12; // r12d
  int v13; // eax
  int v14; // edx
  unsigned int v15; // esi
  int v16; // r9d
  __int64 v17; // r13
  int v18; // r8d
  char v19; // al
  unsigned __int64 **v20; // r13
  int v22; // r9d
  unsigned __int64 *v23; // [rsp+40h] [rbp-A1h] BYREF
  _BYTE v24[24]; // [rsp+48h] [rbp-99h] BYREF
  __int64 v25; // [rsp+60h] [rbp-81h]
  __int128 v26; // [rsp+68h] [rbp-79h]
  void *v27; // [rsp+78h] [rbp-69h]
  _QWORD v28[20]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v31; // [rsp+148h] [rbp+67h] BYREF

  v8 = a3;
  memset(v28, 0, 0x64uLL);
  memset(&v24[4], 0, 20);
  v31 = 0LL;
  v23 = 0LL;
  if ( a4 || a5 || a7 )
  {
    memset(v28, 0, 0x68uLL);
    LODWORD(v28[0]) = 104;
    v28[3] = Interrupter_WdfEvtInterruptIsr;
    LODWORD(v28[2]) = 2;
    v28[5] = Interrupter_WdfEvtInterruptEnable;
    v28[4] = 0LL;
    v28[6] = Interrupter_WdfEvtInterruptDisable;
    HIDWORD(v28[11]) = 2;
    v28[8] = a4;
    v28[9] = a5;
    IsSecureDevice = Controller_IsSecureDevice(a2);
    v12 = v11 + 1;
    if ( IsSecureDevice )
    {
      v28[7] = Interrupter_WdfEvtInterruptWorkItem;
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 88) + 137LL) == (_BYTE)v11 )
        LOBYTE(v28[11]) = v11 + 1;
    }
    else
    {
      v28[4] = Interrupter_WdfEvtInterruptDpc;
    }
    v27 = off_1C0063310;
    *(_QWORD *)&v24[16] = v11;
    *(_QWORD *)&v24[8] = Interrupter_WdfEvtCleanupCallback;
    *(_QWORD *)v24 = 56LL;
    v26 = 0LL;
    LODWORD(v25) = v11 + 1;
    HIDWORD(v25) = v11 + 1;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *, _BYTE *, __int64 *))(WdfFunctions_01023 + 1128))(
            WdfDriverGlobals,
            a1,
            v28,
            v24,
            &v31);
    v15 = v13;
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v15;
      v22 = 13;
      goto LABEL_20;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 14;
LABEL_9:
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(a2 + 72),
        v14,
        9,
        v16,
        (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
        v31,
        v8);
    }
  }
  else
  {
    v27 = off_1C0063310;
    v26 = a1;
    v12 = 1;
    memset(&v24[4], 0, 20);
    *(_DWORD *)v24 = 56;
    v25 = 0x100000001LL;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _BYTE *, __int64 *))(WdfFunctions_01023 + 1656))(
            WdfDriverGlobals,
            v24,
            &v31);
    v15 = v13;
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v15;
      v22 = 11;
      goto LABEL_20;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 12;
      goto LABEL_9;
    }
  }
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v31,
          off_1C0063310);
  *(_QWORD *)v17 = v31;
  *(_QWORD *)(v17 + 8) = a2;
  *(_DWORD *)(v17 + 32) = a3;
  if ( !Controller_IsSecureDevice(a2) || *(_BYTE *)(*(_QWORD *)(a2 + 88) + 137LL) )
  {
    v18 = 0;
    v19 = 0;
  }
  else
  {
    v18 = v12;
    v19 = v12;
  }
  *(_BYTE *)(v17 + 216) = v19;
  v13 = DynamicLock_Create(v31, *(_QWORD *)(a2 + 72), v18, (__int64 *)(v17 + 208));
  v15 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v15;
    v22 = 15;
    goto LABEL_20;
  }
  Counter_CreateInterrupterInstance(v17);
  *a6 = v17;
  v20 = a7;
  if ( a7 )
  {
    v27 = off_1C0063180;
    memset(v24, 0, sizeof(v24));
    *(_DWORD *)v24 = 56;
    v26 = 0LL;
    LODWORD(v25) = v12;
    HIDWORD(v25) = v12;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _BYTE *, unsigned __int64 **))(WdfFunctions_01023
                                                                                                + 1624))(
            WdfDriverGlobals,
            v31,
            v24,
            &v23);
    v15 = v13;
    if ( v13 >= 0 )
    {
      *v23 = a1;
      v23[1] = a2;
      *v20 = v23;
      return v15;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v15;
    v22 = 16;
LABEL_20:
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v14, 9, v22, (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids, v13);
  }
  return v15;
}

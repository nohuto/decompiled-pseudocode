/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C01780D0
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C017572C (DpiFdoHandleSystemPower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0176CB4 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C0177DD0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0188434 (DpiFdoCreateRelatedObjects.c)
 *     DpiPollDisplayChildren @ 0x1C02C71CC (DpiPollDisplayChildren.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02CB770 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02D6A7C (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x1C0020364 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C0145F7C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0178308 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rbx
  int v16; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v24; // [rsp+30h] [rbp-49h]
  __int64 v25; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v26[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v27[24]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v28; // [rsp+60h] [rbp-19h]
  int v29; // [rsp+68h] [rbp-11h]
  int v30; // [rsp+6Ch] [rbp-Dh]
  int v31; // [rsp+70h] [rbp-9h]
  int v32; // [rsp+74h] [rbp-5h]
  int v33; // [rsp+78h] [rbp-1h]
  int v34; // [rsp+7Ch] [rbp+3h]
  __int64 v35; // [rsp+80h] [rbp+7h]

  v3 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 64);
  v25 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3304), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v3 & 1;
  v10 = (v3 & 0xFFFFFFFE) - 1;
  if ( (v3 & 1) == 0 )
    v10 = v3 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3552) >= v10 && v8 - *(_QWORD *)(v6 + 3560) < 10000000 )
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    LODWORD(v14) = 1075708985;
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
    v20[3] = DpiFdoInvalidateChildRelations;
    v21 = *(int *)(v6 + 3552);
    v20[6] = v3;
    v20[4] = v21;
    v20[5] = v8;
    v20[7] = 1075708985LL;
  }
  else
  {
    *(_DWORD *)(v6 + 3552) = v10;
    *(_QWORD *)(v6 + 3560) = v8;
    v24 = 0x10000LL;
    v23[1] = a3;
    v23[0] = (v9 << 28) | 0x2000000u;
    LOBYTE(v24) = (v3 & 4) != 0;
    BYTE1(v24) = (v3 & 2) != 0;
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD *))DpiDxgkDdiDisplayDetectControl)(
            v6,
            *(_QWORD *)(v6 + 40),
            *(_QWORD *)(v6 + 48),
            v23);
    v14 = v11;
    if ( v11 < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v22 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL);
      *(_QWORD *)(v22 + 32) = v14;
      WdLogEvent5_WdError(v22);
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3513) = 0;
  }
  memset(v27, 0, sizeof(v27));
  v30 = 0;
  v15 = *(_QWORD *)(v6 + 2672);
  v16 = DxgkDiagCalcDuration1us(&v25);
  v26[0] = 30;
  v26[1] = 72;
  v32 = v9 | v5 & 0xFFFF00;
  v29 = 0;
  v28 = 0LL;
  memset(v27, 0, sizeof(v27));
  v31 = 37;
  v33 = v16;
  v34 = v14;
  v35 = v15;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v26, *(_QWORD *)(v6 + 5936));
  return (unsigned int)v14;
}

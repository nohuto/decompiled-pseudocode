/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C01E67E0
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01E1214 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleSystemPower @ 0x1C01E2484 (DpiFdoHandleSystemPower.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01E4AB0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01E64B0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0202548 (DpiFdoCreateRelatedObjects.c)
 *     DpiPollDisplayChildren @ 0x1C0394D00 (DpiPollDisplayChildren.c)
 *     DpiAcpiProcessEventRequests @ 0x1C03A2598 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x1C001BD88 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01E6A28 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rbx
  int v16; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rcx
  __int64 v23; // rax
  _DWORD v24[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v25; // [rsp+28h] [rbp-51h]
  bool v26; // [rsp+30h] [rbp-49h]
  bool v27; // [rsp+31h] [rbp-48h]
  char v28; // [rsp+32h] [rbp-47h]
  bool v29; // [rsp+33h] [rbp-46h]
  int v30; // [rsp+34h] [rbp-45h]
  __int64 v31; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v32[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v33[24]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v34; // [rsp+60h] [rbp-19h]
  int v35; // [rsp+68h] [rbp-11h]
  int v36; // [rsp+6Ch] [rbp-Dh]
  int v37; // [rsp+70h] [rbp-9h]
  int v38; // [rsp+74h] [rbp-5h]
  int v39; // [rsp+78h] [rbp-1h]
  unsigned int v40; // [rsp+7Ch] [rbp+3h]
  __int64 v41; // [rsp+80h] [rbp+7h]

  v3 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 64);
  v31 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3320), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v3 & 1;
  v10 = (v3 & 0xFFFFFFFE) - 1;
  if ( (v3 & 1) == 0 )
    v10 = v3 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3568) < v10 || v8 - *(_QWORD *)(v6 + 3576) >= 10000000 || (v3 & 8) != 0 )
  {
    v11 = *(_QWORD *)(v6 + 48);
    v12 = *(_QWORD *)(v6 + 40);
    v24[1] = 0;
    v30 = 0;
    *(_DWORD *)(v6 + 3568) = v10;
    v24[0] = (v9 << 28) | 0x2000000;
    *(_QWORD *)(v6 + 3576) = v8;
    v25 = a3;
    v26 = (v3 & 4) != 0;
    v27 = (v3 & 2) != 0;
    v29 = (v3 & 8) != 0;
    v28 = 1;
    v13 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *))DpiDxgkDdiDisplayDetectControl)(
            v6,
            v12,
            v11,
            v24);
    v14 = v13;
    if ( v13 < 0 )
      WdLogSingleEntry2(2LL, *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL), v13);
    ExReleaseResourceLite((PERESOURCE)(v6 + 3320));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3529) = 0;
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3320));
    KeLeaveCriticalRegion();
    v14 = 1075708985;
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
    v22[3] = DpiFdoInvalidateChildRelations;
    v23 = *(int *)(v6 + 3568);
    v22[6] = v3;
    v22[4] = v23;
    v22[5] = v8;
    v22[7] = 1075708985LL;
  }
  memset(v33, 0, sizeof(v33));
  v36 = 0;
  v15 = *(_QWORD *)(v6 + 2672);
  v16 = DxgkDiagCalcDuration1us(&v31);
  v32[0] = 30;
  v32[1] = 72;
  v38 = v9 | v5 & 0xFFFF00;
  v35 = 0;
  v34 = 0LL;
  memset(v33, 0, sizeof(v33));
  v37 = 37;
  v39 = v16;
  v40 = v14;
  v41 = v15;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, *(_QWORD *)(v6 + 5744));
  return v14;
}

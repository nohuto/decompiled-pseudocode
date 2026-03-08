/*
 * XREFs of ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01E9AC4
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C01EA4F4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializePowerManagement(ADAPTER_RENDER *this)
{
  __int64 v1; // r15
  void (__fastcall *v3)(__int64, unsigned int); // rax
  unsigned int v4; // r12d
  __int64 v5; // rdi
  int v6; // r14d
  __int64 i; // rbx
  __int64 v8; // r10
  int v9; // eax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  const wchar_t *v14; // r9
  _QWORD v15[6]; // [rsp+58h] [rbp-19h] BYREF
  void (__fastcall *v16)(__int64, unsigned int); // [rsp+88h] [rbp+17h]
  __int64 (__fastcall *v17)(__int64, unsigned int, char); // [rsp+90h] [rbp+1Fh]
  __int64 v18; // [rsp+98h] [rbp+27h]
  int v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A4h] [rbp+33h]
  char v21; // [rsp+D8h] [rbp+67h] BYREF

  v1 = *((_QWORD *)this + 2);
  v16 = 0LL;
  v20 = 0;
  v18 = *(_QWORD *)(v1 + 216);
  v15[1] = DxgSetPowerComponentActiveNoWaitCB;
  v15[0] = DxgSetPowerComponentActiveCBInternal;
  v15[2] = DxgSetPowerComponentIdleCBInternal;
  v15[3] = DxgSetPowerComponentActiveNoWaitForceAsyncCB;
  v15[4] = DxgSetPowerComponentIdleForceAsyncCBInternal;
  v15[5] = DxgkLatencyToleranceTimerNotification;
  v19 = *(_DWORD *)(v1 + 3456);
  v17 = DxgkNotifyMemorySegmentHasData;
  v3 = 0LL;
  if ( *(int *)(v1 + 2820) >= 1300 )
    v3 = DxgNotifyVSyncCB;
  v16 = v3;
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 792LL))(
    *((_QWORD *)this + 93),
    v15);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 728LL))(
    *((_QWORD *)this + 96),
    v15);
  v4 = *(_DWORD *)(v1 + 3168);
  LODWORD(v5) = 0;
  v6 = 0;
  if ( !v4 )
    return (unsigned int)v5;
  for ( i = 0LL; ; i += 520LL )
  {
    v8 = *(_QWORD *)(v1 + 3024);
    v9 = *(_DWORD *)(i + v8 + 208);
    switch ( v9 )
    {
      case 0:
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64))(*(_QWORD *)(*((_QWORD *)this + 92)
                                                                                                  + 8LL)
                                                                                      + 800LL))(
                *((_QWORD *)this + 93),
                0LL,
                *(unsigned __int16 *)(i + v8 + 6),
                *(unsigned int *)(i + v8 + 212),
                v6,
                i + v8 + 358);
        goto LABEL_12;
      case 2:
        v12 = *((_QWORD *)this + 92);
        v21 = 0;
        v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, char *))(*(_QWORD *)(v12 + 8) + 800LL))(
                *((_QWORD *)this + 93),
                2LL,
                0LL,
                *(unsigned int *)(i + v8 + 212),
                v6,
                &v21);
LABEL_12:
        v5 = v11;
        if ( v11 < 0 )
        {
          WdLogSingleEntry1(2LL, v11);
          v14 = L"VidSchInitializeComponentPowerManagement failed with status:0x%I64x";
          goto LABEL_19;
        }
        goto LABEL_9;
      case 3:
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL)
                                                                             + 736LL))(
                *((_QWORD *)this + 96),
                *(unsigned __int16 *)(i + v8 + 6),
                *(unsigned int *)(i + v8 + 212),
                *(unsigned int *)(i + v8),
                3);
        goto LABEL_17;
    }
    if ( v9 == 4 )
      break;
LABEL_9:
    if ( ++v6 >= v4 )
      return (unsigned int)v5;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL)
                                                                       + 736LL))(
          *((_QWORD *)this + 96),
          0LL,
          0LL,
          *(unsigned int *)(i + v8),
          4);
LABEL_17:
  v5 = v13;
  if ( v13 >= 0 )
    goto LABEL_9;
  WdLogSingleEntry1(2LL, v13);
  v14 = L"VidMmInitializeSegmentPowerManagement failed with status:0x%I64x";
LABEL_19:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v5, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v5;
}

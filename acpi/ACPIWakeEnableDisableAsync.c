/*
 * XREFs of ACPIWakeEnableDisableAsync @ 0x1C0045348
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C001C150 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001CF98 (ACPIDeviceInitializePowerRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0045850 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C0045BB4 (ACPIWakeEnableDisablePciDevice.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIWakeEnableDisableAsync(
        __int64 a1,
        char a2,
        __int64 (__fastcall *a3)(__int64, _QWORD, _QWORD, __int64),
        __int64 a4)
{
  unsigned int v6; // r15d
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdi
  bool v10; // zf
  char v11; // r8
  const char *v12; // rsi
  const char *v13; // r10
  const char *v14; // rcx
  char v15; // r11
  __int64 v16; // rax
  __int64 v17; // r14
  char v18; // r11
  __int64 v19; // rax
  _BYTE *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  const char *v23; // rax
  KIRQL v25; // dl
  __int64 *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // edi
  const char *v34; // rax
  const char *v35; // rcx
  __int64 v37; // [rsp+58h] [rbp-F0h]
  __int64 v39; // [rsp+60h] [rbp-E8h]
  _QWORD v41[15]; // [rsp+70h] [rbp-D8h] BYREF

  v6 = 259;
  memset(v41, 0, sizeof(v41));
  v8 = *(_DWORD *)(a1 + 552);
  v9 = 0LL;
  v10 = a2 == 0;
  v11 = 0;
  v12 = (const char *)&unk_1C00622D0;
  v13 = (const char *)&unk_1C00622D0;
  v14 = (const char *)&unk_1C00622D0;
  if ( v10 )
  {
    v18 = v8 - 1;
    *(_DWORD *)(a1 + 552) = v8 - 1;
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 8);
      v11 = a1;
      if ( (v19 & 0x200000000000LL) != 0 )
      {
        v13 = *(const char **)(a1 + 608);
        if ( (v19 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x10u,
        (__int64)&WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
        v18,
        v11,
        v13,
        v14);
    if ( *(_DWORD *)(a1 + 552) )
    {
      if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
        goto LABEL_12;
      v7 = 1LL;
      goto LABEL_11;
    }
  }
  else
  {
    v15 = v8 + 1;
    *(_DWORD *)(a1 + 552) = v8 + 1;
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v11 = a1;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v13 = *(const char **)(a1 + 608);
        if ( (v16 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xFu,
        (__int64)&WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
        v15,
        v11,
        v13,
        v14);
    if ( *(_DWORD *)(a1 + 552) != 1 )
    {
      if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
      {
LABEL_12:
        v17 = 0LL;
        goto LABEL_27;
      }
      LOBYTE(v7) = 1;
LABEL_11:
      ACPIWakeEnableDisablePciDevice(a1, v7);
      goto LABEL_12;
    }
  }
  v17 = *(_QWORD *)(a1 + 456);
  v37 = v17;
  if ( !v17 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
    {
      LOBYTE(v7) = a2;
      ACPIWakeEnableDisablePciDevice(a1, v7);
    }
    goto LABEL_27;
  }
  v20 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v21 = (__int64)v20;
  if ( !v20 )
  {
    v17 = v37;
    v6 = -1073741670;
LABEL_27:
    v22 = *(_QWORD *)(a1 + 8);
    v23 = (const char *)&unk_1C00622D0;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 608);
      if ( (v22 & 0x400000000000LL) != 0 )
        v23 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x13u,
        (__int64)&WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
        v6,
        a1,
        v12,
        v23);
    return a3(v17, v6, 0LL, a4);
  }
  v20[24] = a2;
  *((_QWORD *)v20 + 4) = a3;
  *((_QWORD *)v20 + 5) = a4;
  *((_QWORD *)v20 + 2) = a1;
  *((_DWORD *)v20 + 7) = 1;
  v25 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v39 = *(_QWORD *)(a1 + 560);
  v26 = *(__int64 **)(a1 + 568);
  if ( *v26 != a1 + 560 )
    __fastfail(3u);
  *(_QWORD *)(v21 + 8) = v26;
  *(_QWORD *)v21 = a1 + 560;
  *v26 = v21;
  *(_QWORD *)(a1 + 568) = v21;
  KeReleaseSpinLock(&AcpiPowerLock, v25);
  v27 = *(_QWORD *)(a1 + 8);
  if ( v39 == a1 + 560 )
  {
    if ( (v27 & 0x800000000000000LL) != 0 && !*(_BYTE *)(v21 + 24) )
      ACPIWakeEnableDisablePciDevice(a1, 0LL);
    v28 = *(_DWORD *)(a1 + 600);
    WORD1(v41[0]) = 1;
    if ( (v28 & 0x40) != 0 )
    {
      v30 = *(_DWORD *)(a1 + 540);
      v29 = 3;
      WORD1(v41[5]) = 1;
      v41[2] = a2 != 0;
      LOBYTE(v9) = AcpiPowerLeavingS0 != 0;
      WORD1(v41[10]) = 1;
      v41[7] = v9;
      if ( v30 != 4 || (*(_DWORD *)(a1 + 8) & 0x800LL) != 0 )
        v41[12] = v30 - 1;
      else
        v41[12] = 4LL;
    }
    else
    {
      v29 = 1;
      LOBYTE(v9) = a2 != 0;
      v41[2] = v9;
    }
    v31 = AMLIAsyncEvalObject(v37, 0, v29, (unsigned int)v41, (__int64)ACPIWakeEnableDisableAsyncCallBack, v21);
    v32 = *(_QWORD *)(a1 + 8);
    v33 = v31;
    v34 = (const char *)&unk_1C00622D0;
    if ( (v32 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 608);
      if ( (v32 & 0x400000000000LL) != 0 )
        v34 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x11u,
        (__int64)&WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
        v33,
        a1,
        v12,
        v34);
    if ( v33 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v37, v33, 0LL, v21);
  }
  else
  {
    v35 = (const char *)&unk_1C00622D0;
    if ( (v27 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 608);
      if ( (v27 & 0x400000000000LL) != 0 )
        v35 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x12u,
        (__int64)&WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
        3,
        a1,
        v12,
        v35);
  }
  return 259LL;
}

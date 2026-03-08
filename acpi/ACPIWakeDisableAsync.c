/*
 * XREFs of ACPIWakeDisableAsync @ 0x1C0044CC8
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C0032FFC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0033280 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C003348C (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0033670 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0045850 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C0045BB4 (ACPIWakeEnableDisablePciDevice.c)
 *     WPP_RECORDER_SF_LLLqss @ 0x1C0046360 (WPP_RECORDER_SF_LLLqss.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIWakeDisableAsync(__int64 a1, _QWORD **a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // edi
  _QWORD *v8; // rax
  int v9; // ebp
  const char *v10; // rsi
  void *v11; // r9
  void *v12; // rdx
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rcx
  const char *v18; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r14
  __int64 v22; // r15
  _QWORD *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  bool v26; // zf
  int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // edi
  const char *v31; // rax
  const char *v32; // rcx
  KIRQL NewIrql; // [rsp+60h] [rbp-D8h]
  _QWORD v34[15]; // [rsp+70h] [rbp-C8h] BYREF

  v4 = 0;
  memset(v34, 0, sizeof(v34));
  v8 = *a2;
  v9 = 0;
  while ( v8 != a2 )
  {
    v8 = (_QWORD *)*v8;
    ++v9;
  }
  v10 = (const char *)&unk_1C00622D0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v11 = &unk_1C00622D0;
  v12 = &unk_1C00622D0;
  v13 = 0;
  if ( a1 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v13 = a1;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v11 = *(void **)(a1 + 608);
      if ( (v14 & 0x400000000000LL) != 0 )
        v12 = *(void **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LLLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v12, v13, (_DWORD)v11);
  v15 = *(_DWORD *)(a1 + 552) - v9;
  *(_DWORD *)(a1 + 552) = v15;
  v16 = *(_QWORD *)(a1 + 456);
  if ( !v16 )
    goto LABEL_14;
  if ( v15 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
    {
      LOBYTE(v12) = 1;
      ACPIWakeEnableDisablePciDevice(a1, v12);
    }
    goto LABEL_14;
  }
  v20 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v21 = v20;
  if ( !v20 )
  {
    v4 = -1073741670;
LABEL_14:
    KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
    v17 = *(_QWORD *)(a1 + 8);
    v18 = (const char *)&unk_1C00622D0;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 608);
      if ( (v17 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xEu,
        (__int64)&WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
        v4,
        a1,
        v10,
        v18);
    OSNotifyDeviceWakeCallBack(v16, v4, 0LL, a4);
    return 259LL;
  }
  *((_BYTE *)v20 + 24) = 0;
  v22 = a1 + 560;
  v20[5] = a4;
  v20[4] = OSNotifyDeviceWakeCallBack;
  v20[2] = a1;
  *((_DWORD *)v20 + 7) = v9;
  v23 = *(_QWORD **)(a1 + 568);
  v24 = *(_QWORD *)(a1 + 560);
  if ( *v23 != a1 + 560 )
    __fastfail(3u);
  *v21 = v22;
  v21[1] = v23;
  *v23 = v21;
  *(_QWORD *)(a1 + 568) = v21;
  KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
  v25 = *(_QWORD *)(a1 + 8);
  if ( v24 == v22 )
  {
    if ( (v25 & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 0LL);
    v26 = (*(_DWORD *)(a1 + 600) & 0x40) == 0;
    v34[2] = 0LL;
    WORD1(v34[0]) = 1;
    if ( v26 )
    {
      v27 = 1;
    }
    else
    {
      v27 = 3;
      WORD1(v34[5]) = 1;
      v34[7] = 0LL;
      WORD1(v34[10]) = 1;
      v34[12] = 0LL;
    }
    v28 = AMLIAsyncEvalObject(v16, 0, v27, (unsigned int)v34, (__int64)ACPIWakeEnableDisableAsyncCallBack, (__int64)v21);
    v29 = *(_QWORD *)(a1 + 8);
    v30 = v28;
    v31 = (const char *)&unk_1C00622D0;
    if ( (v29 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 608);
      if ( (v29 & 0x400000000000LL) != 0 )
        v31 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xCu,
        (__int64)&WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
        v30,
        a1,
        v10,
        v31);
    if ( v30 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v16, v30, 0LL, v21);
  }
  else
  {
    v32 = (const char *)&unk_1C00622D0;
    if ( (v25 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 608);
      if ( (v25 & 0x400000000000LL) != 0 )
        v32 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xDu,
        (__int64)&WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
        3,
        a1,
        v10,
        v32);
  }
  return 259LL;
}

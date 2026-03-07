__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r14
  int v3; // edi
  _OWORD *Pool2; // rbp
  __int64 v5; // rdx
  const char *v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  KIRQL v11; // al
  __int64 v12; // rcx
  KIRQL v13; // r12
  _OWORD *v14; // rax
  size_t v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  const char *v18; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C00622D0;
  v3 = 0;
  Pool2 = 0LL;
  v5 = 0LL;
  v7 = (const char *)&unk_1C00622D0;
  *(_DWORD *)(a1 + 212) = 5;
  v8 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v1 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      0xAu,
      0x4Du,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      5,
      v5,
      v7,
      v8);
  if ( _bittest64((const signed __int64 *)(v1 + 8), 0x33u)
    || (v10 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1397904223LL)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 1008), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_23:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v12 = *(_QWORD *)(v1 + 688);
  v13 = v11;
  if ( v12 )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, *(unsigned int *)(v12 + 24) + 40LL, 1332765505LL);
    if ( Pool2 )
    {
      v14 = *(_OWORD **)(v1 + 688);
      *Pool2 = *v14;
      Pool2[1] = v14[1];
      v15 = *((unsigned int *)Pool2 + 6);
      *((_QWORD *)Pool2 + 4) = (char *)Pool2 + 40;
      memmove((char *)Pool2 + 40, *(const void **)(*(_QWORD *)(v1 + 688) + 32LL), v15);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v13);
  if ( Pool2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 1008), 0xFFFFFFFFFFFFFEFFuLL);
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v16 = AMLIAsyncEvalObject(v10, 0, 1, (_DWORD)Pool2, (__int64)ACPIDeviceCompleteGenericPhase, a1);
    v17 = *(_QWORD *)(v1 + 8);
    v3 = v16;
    v18 = (const char *)&unk_1C00622D0;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v17 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x4Eu,
        (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
        a1,
        v3,
        v1,
        v2,
        v18);
    ExFreePoolWithTag(Pool2, 0);
  }
  AMLIDereferenceHandleEx(v10);
  result = 259LL;
  if ( v3 != 259 )
    goto LABEL_23;
  return result;
}

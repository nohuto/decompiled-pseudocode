/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckDep(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // si
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  const char *v7; // rax
  const char *v8; // rdx
  __int64 v9; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 5;
  *(_OWORD *)(a1 + 88) = 0LL;
  v2 = 0;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v4 = 0;
  if ( (*(_BYTE *)(v1 + 1008) & 0x20) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( v5 )
    {
      AMLIDereferenceHandleEx(v5);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1346716767LL);
    *(_QWORD *)(a1 + 56) = v6;
    if ( v6 )
    {
      v4 = AMLIAsyncEvalObject(v6, (int)a1 + 88, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x20uLL);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    }
  }
  v7 = (const char *)&unk_1C00622D0;
  v8 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v2 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v1 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x3Du,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v4,
      v2,
      v7,
      v8);
  if ( v4 != 259 )
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v4;
}

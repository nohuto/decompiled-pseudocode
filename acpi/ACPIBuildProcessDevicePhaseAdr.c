/*
 * XREFs of ACPIBuildProcessDevicePhaseAdr @ 0x1C000EA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00146C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C00487BC (AMLIIsNamedChildPresent.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseAdr(__int64 a1)
{
  ULONG_PTR v1; // rdi
  const char *v2; // r14
  int v3; // ebp
  int v5; // eax
  __int64 v6; // rax
  const char *v7; // rdx
  const char *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char v11; // dl
  const char *v12; // rax
  __int64 v13; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C00622D0;
  v3 = 0;
  if ( (*(_BYTE *)(v1 + 1008) & 0x20) != 0 )
  {
    if ( !*(_QWORD *)(v1 + 648) || (*(_QWORD *)(v1 + 8) & 0x300000000000LL) != 0 )
      goto LABEL_12;
LABEL_11:
    *(_DWORD *)(a1 + 20) |= 0x20u;
    goto LABEL_12;
  }
  v5 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 760));
  dword_1C006F938 = 0;
  pszDest = 0;
  v3 = v5;
  FreeDataBuffs(a1 + 80, 1LL);
  if ( v3 >= 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x20uLL);
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(v1 + 8);
  v7 = (const char *)&unk_1C00622D0;
  v8 = (const char *)&unk_1C00622D0;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v7 = *(const char **)(v1 + 608);
    if ( (v6 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x20u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v3,
      v1,
      v7,
      v8);
LABEL_12:
  if ( (*(_QWORD *)(v1 + 8) & 0x100000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else if ( (unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v1 + 760), 1145653343LL) )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
      *(_DWORD *)(a1 + 32) = 16;
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 6;
    }
  }
  else
  {
    v9 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1380204895LL);
    if ( !v9 )
      KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x5244415FuLL, 0LL);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x100000000000uLL);
    v10 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 10;
    if ( v10 )
      AMLIDereferenceHandleEx(v10);
    *(_QWORD *)(a1 + 56) = v9;
    v3 = ACPIGet(v1, 1380204895, -1610349566, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 608, 0LL);
  }
  v11 = 0;
  v12 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v13 = *(_QWORD *)(v1 + 8);
    v11 = v1;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x21u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v3,
      v11,
      v2,
      v12);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return (unsigned int)v3;
}

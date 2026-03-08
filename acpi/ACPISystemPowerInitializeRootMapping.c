/*
 * XREFs of ACPISystemPowerInitializeRootMapping @ 0x1C003DEA4
 * Callers:
 *     ACPIRootIrpQueryCapabilities @ 0x1C0093FA0 (ACPIRootIrpQueryCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C00950C0 (ACPISystemPowerProcessRootMapping.c)
 *     ACPISystemPowerProcessSxD @ 0x1C00951C8 (ACPISystemPowerProcessSxD.c)
 */

__int64 __fastcall ACPISystemPowerInitializeRootMapping(__int64 a1, __int64 a2)
{
  __int128 v5; // xmm0
  __int64 v6; // rdx
  _DWORD *v7; // rax
  __int64 v8; // r8
  int v9; // ecx
  int v10; // edi
  __int64 v11; // r8
  const char *v12; // rcx
  const char *v13; // rdx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  const char *v18; // rcx
  const char *v19; // r10
  KIRQL v20; // al
  int v21; // edx
  __int64 v22; // xmm1_8
  char v23[8]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+58h] [rbp-28h] BYREF
  __int64 v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+70h] [rbp-10h]

  v23[0] = 0;
  if ( (*(_QWORD *)(a1 + 8) & 0x400000000000000LL) != 0 || (unsigned int)(*(_DWORD *)(a1 + 368) - 2) > 1 )
  {
LABEL_23:
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 508);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 524);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 532);
    return 0LL;
  }
  v5 = *(_OWORD *)(a1 + 508);
  v6 = 5LL;
  v26 = *(_DWORD *)(a1 + 532);
  v7 = (_DWORD *)&v24 + 2;
  v25 = *(_QWORD *)(a1 + 524);
  v24 = v5;
  DWORD1(v24) = 1;
  v8 = a2 - ((_QWORD)&v24 + 8);
  do
  {
    v9 = *(_DWORD *)((char *)v7 + v8 + 24);
    if ( v9 )
      *v7 = v9;
    ++v7;
    --v6;
  }
  while ( v6 );
  v10 = ACPISystemPowerProcessSxD(a1, &v24, v23);
  if ( v10 >= 0 )
  {
    v15 = v26;
    if ( !v26 )
      v15 = 4;
    v26 = v15;
    v16 = ACPISystemPowerProcessRootMapping(a1, &v24);
    if ( v16 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x400000000000000uLL);
      v20 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v21 = v26;
      v22 = v25;
      *(_OWORD *)(a1 + 508) = v24;
      *(_QWORD *)(a1 + 524) = v22;
      *(_DWORD *)(a1 + 532) = v21;
      KeReleaseSpinLock(&AcpiPowerLock, v20);
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = (const char *)&unk_1C00622D0;
      v19 = (const char *)&unk_1C00622D0;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v18 = *(const char **)(a1 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v19 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0xFu,
          (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
          v16,
          a1,
          v18,
          v19);
    }
    goto LABEL_23;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = (const char *)&unk_1C00622D0;
  v13 = (const char *)&unk_1C00622D0;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v12 = *(const char **)(a1 + 608);
    if ( (v11 & 0x400000000000LL) != 0 )
      v13 = *(const char **)(a1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xFu,
      0xEu,
      (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
      v10,
      a1,
      v12,
      v13);
  return (unsigned int)v10;
}

/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C003DAE0
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C003DAE0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C00950C0 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1C0014AC8 (WPP_RECORDER_SF_ddqss.c)
 *     ACPIExtListEnumNext @ 0x1C00263F4 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C00264F8 (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C0026554 (ACPIExtListTestElement.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C003DAE0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C003DE60 (ACPISystemPowerDetermineSupportedSystemState.c)
 *     WPP_RECORDER_SF_DDDDqss @ 0x1C003ECEC (WPP_RECORDER_SF_DDDDqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C0094FC0 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceStates(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int SxD; // edi
  char *i; // rax
  char *v7; // rbx
  char v8; // cl
  const char *v9; // r10
  const char *v10; // rdx
  char v11; // r8
  __int64 v12; // rax
  char v13; // dl
  const char *v14; // r8
  const char *v15; // rcx
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rdx
  int v19; // eax
  char v20; // r10
  char v21; // r11
  char v22; // cl
  void *v23; // r8
  void *v24; // r10
  int v25; // r9d
  __int64 v26; // rax
  int v28; // [rsp+20h] [rbp-49h]
  _QWORD v29[3]; // [rsp+68h] [rbp-1h] BYREF
  __int128 v30; // [rsp+80h] [rbp+17h]
  __int64 v31; // [rsp+90h] [rbp+27h]
  int v32; // [rsp+98h] [rbp+2Fh]
  int v33; // [rsp+9Ch] [rbp+33h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h]
  int v35; // [rsp+E8h] [rbp+7Fh] BYREF

  v35 = 0;
  v33 = 0;
  v29[0] = a1 + 800;
  SxD = 0;
  v29[1] = 0LL;
  v29[2] = &AcpiDeviceTreeLock;
  v31 = 816LL;
  v32 = 1;
  v30 = 0LL;
  for ( i = ACPIExtListStartEnum((__int64)v29); ; i = ACPIExtListEnumNext((__int64)v29) )
  {
    v7 = i;
    if ( !ACPIExtListTestElement((__int64)v29, SxD >= 0) )
      break;
    SxD = ACPISystemPowerDetermineSupportedDeviceStates(v7, a2, a3);
    if ( SxD >= 0 )
    {
      SxD = ACPISystemPowerGetSxD(v7, a2, &v35);
      if ( SxD < 0 )
      {
        if ( SxD == -1073741772 )
        {
          v17 = 1;
          NewIrql = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v18 = 1LL;
          do
          {
            v19 = ACPISystemPowerDetermineSupportedSystemState(v7, v18);
            v21 = v19;
            if ( v19 >= (int)a2 )
            {
              v22 = v20;
              v23 = &unk_1C00622D0;
              v24 = &unk_1C00622D0;
              v25 = 0;
              *a3 |= 1 << v22;
              if ( v7 )
              {
                v26 = *((_QWORD *)v7 + 1);
                v25 = (int)v7;
                if ( (v26 & 0x200000000000LL) != 0 )
                {
                  v24 = (void *)*((_QWORD *)v7 + 76);
                  if ( (v26 & 0x400000000000LL) != 0 )
                    v23 = (void *)*((_QWORD *)v7 + 77);
                }
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DDDDqss(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v17 - 1,
                  (_DWORD)v23,
                  v25,
                  v28,
                  v17 - 1,
                  v21 - 1,
                  a2 - 1,
                  v17 - 1,
                  v25,
                  (__int64)v24,
                  (__int64)v23);
            }
            v35 = ++v17;
            v18 = (unsigned int)v17;
          }
          while ( v17 <= 3 );
          KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
          SxD = 0;
        }
        else
        {
          v13 = 0;
          v14 = (const char *)&unk_1C00622D0;
          v15 = (const char *)&unk_1C00622D0;
          if ( v7 )
          {
            v16 = *((_QWORD *)v7 + 1);
            v13 = (char)v7;
            if ( (v16 & 0x200000000000LL) != 0 )
            {
              v14 = (const char *)*((_QWORD *)v7 + 76);
              if ( (v16 & 0x400000000000LL) != 0 )
                v15 = (const char *)*((_QWORD *)v7 + 77);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0xBu,
              (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
              SxD,
              v13,
              v14,
              v15);
        }
      }
      else
      {
        v8 = v35;
        v9 = (const char *)&unk_1C00622D0;
        v10 = (const char *)&unk_1C00622D0;
        v11 = 0;
        *a3 |= 1 << v35;
        if ( v7 )
        {
          v12 = *((_QWORD *)v7 + 1);
          v11 = (char)v7;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v9 = (const char *)*((_QWORD *)v7 + 76);
            if ( (v12 & 0x400000000000LL) != 0 )
              v10 = (const char *)*((_QWORD *)v7 + 77);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xFu,
            0xAu,
            (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
            a2 - 1,
            v8 - 1,
            v11,
            v9,
            v10);
      }
    }
  }
  return 0LL;
}

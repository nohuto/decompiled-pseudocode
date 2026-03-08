/*
 * XREFs of IommupDeviceEnablePasidTaggedDma @ 0x140822E44
 * Callers:
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 * Callees:
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x140409C64 (Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpDmaGetIommuInterface @ 0x1404FDDF4 (HalpDmaGetIommuInterface.c)
 *     HalpIommuIsDmarStageCompatible @ 0x140515E88 (HalpIommuIsDmarStageCompatible.c)
 *     IommupHvIsStage1DmarCompatible @ 0x140522BE4 (IommupHvIsStage1DmarCompatible.c)
 *     IommupDeviceGetPasidSettings @ 0x140822F74 (IommupDeviceGetPasidSettings.c)
 *     IommupDeviceEnableSvm @ 0x140930DD4 (IommupDeviceEnableSvm.c)
 */

__int64 __fastcall IommupDeviceEnablePasidTaggedDma(__int64 a1, __int64 a2)
{
  int PasidSettings; // ebx
  char v4; // bp
  char v5; // si
  __int64 v6; // rcx
  char v7; // al
  bool IsStage1DmarCompatible; // al
  __int64 v9; // rdx
  char v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF
  char v13; // [rsp+68h] [rbp+20h] BYREF

  *(_WORD *)(a1 + 265) = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  PasidSettings = IommupDeviceGetPasidSettings(a2, &v12, &v11, &v13);
  if ( PasidSettings < 0 )
    goto LABEL_17;
  v4 = v12;
  v5 = v11;
  if ( v12 )
  {
    if ( v11 )
    {
      PasidSettings = -1073741776;
      goto LABEL_17;
    }
  }
  else if ( !v11 )
  {
    return (unsigned int)PasidSettings;
  }
  if ( !(unsigned int)Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage()
    || (v6 = *(_QWORD *)(a1 + 8),
        v7 = v13,
        *(_BYTE *)(a1 + 265) = v4,
        *(_BYTE *)(a1 + 266) = 1,
        *(_BYTE *)(a1 + 264) = v7,
        !v6) )
  {
    PasidSettings = -1073741637;
LABEL_17:
    *(_WORD *)(a1 + 265) = 0;
    *(_BYTE *)(a1 + 264) = 0;
    return (unsigned int)PasidSettings;
  }
  PasidSettings = HalpDmaGetIommuInterface(v6, (void *)(a1 + 272));
  if ( PasidSettings < 0 )
    goto LABEL_17;
  if ( HalpHvIommu )
    IsStage1DmarCompatible = IommupHvIsStage1DmarCompatible(*(_DWORD **)a1, v4);
  else
    IsStage1DmarCompatible = HalpIommuIsDmarStageCompatible(*(_QWORD *)(a1 + 32), 1);
  if ( !IsStage1DmarCompatible )
  {
    PasidSettings = -1073741637;
LABEL_16:
    (*(void (__fastcall **)(_QWORD))(a1 + 296))(*(_QWORD *)(a1 + 280));
    goto LABEL_17;
  }
  LOBYTE(v9) = v5;
  PasidSettings = IommupDeviceEnableSvm(a1, v9);
  if ( PasidSettings < 0 )
    goto LABEL_16;
  return (unsigned int)PasidSettings;
}

/*
 * XREFs of ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C024DA70
 * Callers:
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0248E28 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C024D3B4 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1C024D484 (-CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C024D73C (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C024DB00 (-ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERAC.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1C0242EB0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

__int64 __fastcall InteractiveControlParser::GetScaledComponentValue(
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY *a1,
        int a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  const char *v12; // [rsp+68h] [rbp+20h] BYREF

  v2 = *((int *)a1 + 29);
  v3 = a2;
  v4 = *((unsigned int *)a1 + 31);
  v5 = v3 * v2;
  v6 = *((_DWORD *)a1 + 30);
  v7 = v4 * v6;
  if ( v7 )
    return v5 / v7;
  if ( (unsigned int)dword_1C0357150 > 3 )
  {
    v9 = v6;
    v12 = "InteractiveControlParser::GetScaledComponentValue -> Invalid component configuration.";
    v10 = v4;
    v11 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      0LL,
      byte_1C031FE0D,
      v5,
      v2,
      (void **)&v12,
      (__int64)&v11,
      (__int64)&v9,
      (__int64)&v10);
  }
  return 1LL;
}

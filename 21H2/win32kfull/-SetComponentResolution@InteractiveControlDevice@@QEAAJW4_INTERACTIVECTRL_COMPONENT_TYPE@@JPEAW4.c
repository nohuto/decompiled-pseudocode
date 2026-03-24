/*
 * XREFs of ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0257D58
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02525A8 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0252B54 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0258448 (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00E5E60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D4BD8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C025175C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C025AC1C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C025C4E0 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlDevice::SetComponentResolution(__int64 a1, NTSTATUS a2, int a3, _DWORD *a4)
{
  unsigned int v4; // r12d
  int v6; // r14d
  CHAR *v9; // r15
  ULONG v10; // r13d
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  NTSTATUS v14; // ecx
  _QWORD *v15; // rbx
  NTSTATUS SpecificValueCaps; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  ULONG LogicalMin; // esi
  __int64 v21; // rax
  SimpleHapticsController *v22; // rcx
  SimpleHapticsController *v23; // rcx
  int ScaledComponentValue; // eax
  int v25; // eax
  int v26; // eax
  NTSTATUS v27; // [rsp+40h] [rbp-C0h] BYREF
  USHORT ValueCapsLength; // [rsp+44h] [rbp-BCh] BYREF
  USHORT v29[2]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v30[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  _DWORD *v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS v34; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0;
  v30[0] = a3;
  v27 = a2;
  v6 = a3;
  v31 = a4;
  ValueCapsLength = 1;
  v9 = 0LL;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v10 = 2;
  if ( !a4 || *a4 )
  {
LABEL_7:
    if ( !*(_DWORD *)(a1 + 64) && *((_DWORD *)InteractiveControlManager::Instance() + 29) )
      v6 = *((_DWORD *)InteractiveControlManager::Instance() + 27);
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21)
      && *((_DWORD *)InteractiveControlManager::Instance() + 25) )
    {
      v10 = 3;
    }
    goto LABEL_7;
  }
LABEL_10:
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v6 = (v6 << 8) / *((_DWORD *)InteractiveControlManager::Instance() + 35);
    }
    else if ( a2 != 4 )
    {
      return 3221225659LL;
    }
  }
  v12 = (_QWORD *)(a1 + 184);
  v13 = *(_QWORD **)(a1 + 184);
  if ( v13 == (_QWORD *)(a1 + 184) )
    return v4;
  v14 = v27;
  while ( 1 )
  {
    v15 = v13;
    v13 = (_QWORD *)*v13;
    *(_QWORD *)&v30[1] = v13;
    if ( *((_DWORD *)v15 + 4) == v14 )
      break;
LABEL_58:
    if ( v13 == v12 )
      goto LABEL_63;
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        1u,
                        *((_WORD *)v15 + 15),
                        0x48u,
                        &ValueCaps,
                        &ValueCapsLength,
                        *(PHIDP_PREPARSED_DATA *)(a1 + 256));
  v4 = SpecificValueCaps;
  if ( SpecificValueCaps >= 0 )
  {
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21) && (v19 = v6 * (__int64)*((int *)v15 + 30)) != 0 && v6 )
    {
      LogicalMin = ValueCaps.LogicalMin;
      v21 = *((int *)v15 + 29) / v19;
      if ( (int)v21 >= ValueCaps.LogicalMin )
      {
        LogicalMin = *((int *)v15 + 29) / v19;
        if ( (int)v21 > ValueCaps.LogicalMax )
          LogicalMin = ValueCaps.LogicalMax;
      }
    }
    else
    {
      LogicalMin = ValueCaps.LogicalMax;
    }
    if ( *((_DWORD *)v15 + 31) != LogicalMin || v31 && *v31 != *(_DWORD *)(a1 + 60) )
    {
      if ( !v9 )
      {
        v9 = (CHAR *)Win32AllocPool(*(unsigned __int16 *)(a1 + 84), 1819440195LL);
        if ( !v9 )
          return (unsigned int)-1073741670;
      }
      *v9 = ValueCaps.ReportID;
      v22 = *(SimpleHapticsController **)(a1 + 384);
      if ( v22
        && SimpleHapticsController::SendDeviceIOControl(v22, 0xB0192u, 0LL, 0, v9, *(unsigned __int16 *)(a1 + 84), 0LL) >= 0 )
      {
        if ( v31 )
        {
          memset(&v34, 0, sizeof(v34));
          v29[0] = 1;
          HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &v34, v29, *(PHIDP_PREPARSED_DATA *)(a1 + 256));
          HidP_SetUsageValue(
            HidP_Feature,
            0xEu,
            v34.LinkCollection,
            0x20u,
            v10,
            *(PHIDP_PREPARSED_DATA *)(a1 + 256),
            v9,
            *(unsigned __int16 *)(a1 + 84));
        }
        if ( HidP_SetUsageValue(
               HidP_Feature,
               1u,
               ValueCaps.LinkCollection,
               0x48u,
               LogicalMin,
               *(PHIDP_PREPARSED_DATA *)(a1 + 256),
               v9,
               *(unsigned __int16 *)(a1 + 84)) >= 0 )
        {
          v23 = *(SimpleHapticsController **)(a1 + 384);
          if ( v23 )
          {
            if ( SimpleHapticsController::SendDeviceIOControl(
                   v23,
                   0xB0191u,
                   v9,
                   *(unsigned __int16 *)(a1 + 84),
                   0LL,
                   0,
                   0LL) >= 0 )
              *((_DWORD *)v15 + 31) = LogicalMin;
          }
        }
      }
    }
    ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                             (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v15,
                             1);
    v13 = *(_QWORD **)&v30[1];
    *((_DWORD *)v15 + 28) = ScaledComponentValue;
    if ( v31 )
      *(_DWORD *)(a1 + 60) = *v31;
LABEL_46:
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
    {
      if ( v6 )
        v25 = v6;
      else
        v25 = *((_DWORD *)v15 + 28);
      *((_DWORD *)v15 + 28) = v25;
    }
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) )
    {
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) != 1 )
      {
        v26 = 1;
        goto LABEL_57;
      }
    }
    else
    {
      v26 = v30[0];
      if ( v30[0] )
      {
LABEL_57:
        *((_DWORD *)v15 + 27) = v26;
        v14 = v27;
        v12 = (_QWORD *)(a1 + 184);
        *((_DWORD *)v15 + 26) = 0;
        goto LABEL_58;
      }
    }
    v26 = *((_DWORD *)v15 + 28);
    goto LABEL_57;
  }
  if ( SpecificValueCaps == -1072627708 )
  {
    if ( (unsigned int)dword_1C032B2F8 > 4 )
    {
      *(_QWORD *)&v30[1] = "Device does not support resolution multiplier. Falling back to OS based scaling.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1C032B2F8,
        byte_1C02F41C8,
        0LL,
        0LL,
        (void **)&v30[1]);
    }
    v4 = 0;
    goto LABEL_46;
  }
  if ( (unsigned int)dword_1C032B2F8 > 2 )
  {
    v30[0] = *((_DWORD *)v15 + 28);
    v27 = SpecificValueCaps;
    v32 = (__int64)"Failed to updated device resolution multiplier. Keeping existing actual resolution.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032B2F8,
      byte_1C02F4A57,
      v17,
      v18,
      (void **)&v32,
      (__int64)&v27,
      (__int64)v30);
  }
LABEL_63:
  if ( v9 )
    Win32FreePool(v9);
  return v4;
}

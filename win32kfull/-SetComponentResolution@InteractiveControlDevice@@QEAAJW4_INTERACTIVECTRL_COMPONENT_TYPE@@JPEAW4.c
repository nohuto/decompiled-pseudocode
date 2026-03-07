__int64 __fastcall InteractiveControlDevice::SetComponentResolution(__int64 a1, NTSTATUS a2, int a3, _DWORD *a4)
{
  int v4; // r14d
  unsigned int v8; // r12d
  CHAR *v9; // r15
  __int64 v10; // rcx
  struct InteractiveControlManager *v11; // rax
  __int64 v12; // rcx
  _QWORD *v14; // rsi
  _QWORD *v15; // r13
  NTSTATUS v16; // eax
  _QWORD *v17; // rbx
  NTSTATUS SpecificValueCaps; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  ULONG LogicalMin; // esi
  __int64 v24; // rax
  SimpleHapticsController *v25; // rcx
  SimpleHapticsController *v26; // rcx
  int ScaledComponentValue; // eax
  _DWORD *v28; // rsi
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  ULONG UsageValue; // [rsp+40h] [rbp-C0h]
  NTSTATUS v34; // [rsp+44h] [rbp-BCh] BYREF
  USHORT ValueCapsLength; // [rsp+48h] [rbp-B8h] BYREF
  USHORT v36; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS v42; // [rsp+C0h] [rbp-40h] BYREF

  LODWORD(v37) = a3;
  v4 = a3;
  v34 = a2;
  v38 = a4;
  ValueCapsLength = 1;
  v8 = 0;
  v9 = 0LL;
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  UsageValue = 2;
  if ( !a4 || (UsageValue = 2, *a4) )
  {
LABEL_8:
    if ( !*(_DWORD *)(a1 + 64) && *((_DWORD *)InteractiveControlManager::Instance(v10) + 29) )
      v4 = *((_DWORD *)InteractiveControlManager::Instance(v12) + 27);
    goto LABEL_11;
  }
  UsageValue = 2;
  if ( !*(_DWORD *)(a1 + 64) )
  {
    UsageValue = 2;
    if ( !*((_DWORD *)InteractiveControlManager::Instance(v10) + 21) )
    {
      v11 = InteractiveControlManager::Instance(v10);
      v10 = 2LL;
      if ( *((_DWORD *)v11 + 25) )
        v10 = 3LL;
      UsageValue = v10;
    }
    goto LABEL_8;
  }
LABEL_11:
  if ( a2 == 1 )
    return 3221225659LL;
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v4 = (v4 << 8) / *((_DWORD *)InteractiveControlManager::Instance(0LL) + 35);
    }
    else if ( a2 != 4 )
    {
      return 3221225659LL;
    }
  }
  v14 = (_QWORD *)(a1 + 184);
  v15 = *(_QWORD **)(a1 + 184);
  if ( v15 == (_QWORD *)(a1 + 184) )
    return v8;
  v16 = a2;
  while ( 1 )
  {
    v17 = v15;
    v15 = (_QWORD *)*v15;
    if ( *((_DWORD *)v17 + 4) == v16 )
      break;
LABEL_61:
    if ( v15 == v14 )
      goto LABEL_66;
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        1u,
                        *((_WORD *)v17 + 15),
                        0x48u,
                        &ValueCaps,
                        &ValueCapsLength,
                        *(PHIDP_PREPARSED_DATA *)(a1 + 256));
  v8 = SpecificValueCaps;
  if ( SpecificValueCaps >= 0 )
  {
    if ( !*((_DWORD *)InteractiveControlManager::Instance(v19) + 21)
      && (v22 = v4 * (__int64)*((int *)v17 + 30)) != 0
      && v4 )
    {
      LogicalMin = ValueCaps.LogicalMin;
      v24 = *((int *)v17 + 29) / v22;
      if ( (int)v24 >= ValueCaps.LogicalMin )
      {
        LogicalMin = *((int *)v17 + 29) / v22;
        if ( (int)v24 > ValueCaps.LogicalMax )
          LogicalMin = ValueCaps.LogicalMax;
      }
    }
    else
    {
      LogicalMin = ValueCaps.LogicalMax;
    }
    if ( *((_DWORD *)v17 + 31) != LogicalMin || v38 && *v38 != *(_DWORD *)(a1 + 60) )
    {
      if ( !v9 )
      {
        v9 = (CHAR *)Win32AllocPoolZInit(*(unsigned __int16 *)(a1 + 84), 1819440195LL);
        if ( !v9 )
          return (unsigned int)-1073741670;
      }
      *v9 = ValueCaps.ReportID;
      v25 = *(SimpleHapticsController **)(a1 + 384);
      if ( v25
        && SimpleHapticsController::SendDeviceIOControl(v25, 0xB0192u, 0LL, 0, v9, *(unsigned __int16 *)(a1 + 84), 0LL) >= 0 )
      {
        if ( v38 )
        {
          memset_0(&v42, 0, sizeof(v42));
          v36 = 1;
          HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &v42, &v36, *(PHIDP_PREPARSED_DATA *)(a1 + 256));
          HidP_SetUsageValue(
            HidP_Feature,
            0xEu,
            v42.LinkCollection,
            0x20u,
            UsageValue,
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
          v26 = *(SimpleHapticsController **)(a1 + 384);
          if ( v26 )
          {
            if ( SimpleHapticsController::SendDeviceIOControl(
                   v26,
                   0xB0191u,
                   v9,
                   *(unsigned __int16 *)(a1 + 84),
                   0LL,
                   0,
                   0LL) >= 0 )
              *((_DWORD *)v17 + 31) = LogicalMin;
          }
        }
      }
    }
    ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                             (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v17,
                             1);
    v28 = v38;
    *((_DWORD *)v17 + 28) = ScaledComponentValue;
    if ( v28 )
      *(_DWORD *)(a1 + 60) = *v28;
    v14 = (_QWORD *)(a1 + 184);
LABEL_49:
    if ( *((_DWORD *)InteractiveControlManager::Instance(v19) + 21) )
    {
      if ( v4 )
        v30 = v4;
      else
        v30 = *((_DWORD *)v17 + 28);
      *((_DWORD *)v17 + 28) = v30;
    }
    if ( *((_DWORD *)InteractiveControlManager::Instance(v29) + 31) )
    {
      if ( *((_DWORD *)InteractiveControlManager::Instance(v31) + 31) != 1 )
      {
        v32 = 1;
        goto LABEL_60;
      }
    }
    else
    {
      v32 = v37;
      if ( (_DWORD)v37 )
      {
LABEL_60:
        *((_DWORD *)v17 + 27) = v32;
        *((_DWORD *)v17 + 26) = 0;
        v16 = v34;
        goto LABEL_61;
      }
    }
    v32 = *((_DWORD *)v17 + 28);
    goto LABEL_60;
  }
  if ( SpecificValueCaps == -1072627708 )
  {
    if ( (unsigned int)dword_1C0357150 > 4 )
    {
      v40 = (__int64)"Device does not support resolution multiplier. Falling back to OS based scaling.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1C0357150,
        byte_1C031F180,
        0LL,
        0LL,
        (void **)&v40);
    }
    v8 = 0;
    goto LABEL_49;
  }
  if ( (unsigned int)dword_1C0357150 > 2 )
  {
    LODWORD(v37) = *((_DWORD *)v17 + 28);
    v34 = SpecificValueCaps;
    v39 = (__int64)"Failed to updated device resolution multiplier. Keeping existing actual resolution.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031FA0F,
      v20,
      v21,
      (void **)&v39,
      (__int64)&v34,
      (__int64)&v37);
  }
LABEL_66:
  if ( v9 )
    Win32FreePool(v9);
  return v8;
}

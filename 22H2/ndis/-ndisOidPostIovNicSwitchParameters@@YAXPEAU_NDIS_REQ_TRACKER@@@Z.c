/*
 * XREFs of ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     NdisWriteConfiguration @ 0x1C0027500 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C0027B00 (NdisOpenConfigurationKeyByName.c)
 *     NdisOpenConfigurationEx @ 0x1C0028550 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028790 (NdisCloseConfiguration.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0078654 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostIovNicSwitchParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r13
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  _LIST_ENTRY *SwitchBySwitchId; // r15
  NDIS_STATUS v8; // eax
  PVOID v9; // rsi
  PVOID v10; // r14
  __int64 v11; // r8
  unsigned __int16 *v12; // rdx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp-18h] BYREF
  int Status; // [rsp+B0h] [rbp+40h] BYREF
  PVOID ConfigurationHandle; // [rsp+B8h] [rbp+48h] BYREF
  PVOID SubKeyHandle; // [rsp+C0h] [rbp+50h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  memset(&ConfigObject.Header.Revision, 0, 23);
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  v4 = v1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Bu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v1);
    v4 = *((_QWORD *)a1 + 4);
  }
  if ( *(_DWORD *)(v4 + 4) == 1 )
  {
    if ( v3 )
    {
      v5 = *((_DWORD *)a1 + 10);
      if ( !v5 || v5 == -1071448016 )
      {
        v6 = *(_QWORD *)(v1 + 40);
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v6 + 12));
        if ( SwitchBySwitchId )
        {
          ConfigObject.Flags = 0;
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = v3;
          v8 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v9 = ConfigurationHandle;
          Status = v8;
          if ( !v8 )
          {
            NdisOpenConfigurationKeyByName(&Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            v10 = SubKeyHandle;
            if ( !Status && (*(_DWORD *)(v6 + 4) & 0x10000) != 0 )
            {
              v11 = 4LL;
              v12 = (unsigned __int16 *)(v6 + 16);
              v13 = (_OWORD *)((char *)&SwitchBySwitchId[7].Flink + 4);
              v14 = (_OWORD *)(v6 + 16);
              do
              {
                *v13 = *v14;
                v13[1] = v14[1];
                v13[2] = v14[2];
                v13[3] = v14[3];
                v13[4] = v14[4];
                v13[5] = v14[5];
                v13[6] = v14[6];
                v13 += 8;
                v15 = v14[7];
                v14 += 8;
                *(v13 - 1) = v15;
                --v11;
              }
              while ( v11 );
              *(_DWORD *)v13 = *(_DWORD *)v14;
              ParameterValue.ParameterType = NdisParameterString;
              ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)(v6 + 18);
              ParameterValue.ParameterData.StringData.Length = *v12;
              ParameterValue.ParameterData.StringData.MaximumLength = *v12 + 2;
              NdisWriteConfiguration(&Status, v10, &NicSwitchNameStr, &ParameterValue);
            }
            if ( v10 )
              NdisCloseConfiguration(v10);
          }
          if ( v9 )
            NdisCloseConfiguration(v9);
        }
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Cu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v1);
}

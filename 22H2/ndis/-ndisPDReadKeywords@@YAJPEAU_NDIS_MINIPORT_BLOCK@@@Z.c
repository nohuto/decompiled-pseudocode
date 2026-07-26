/*
 * XREFs of ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010C10C
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012D504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0019180 (NdisConvertNdisStatusToNtStatus.c)
 *     WPP_RECORDER_SF_qcL @ 0x1C001E26C (WPP_RECORDER_SF_qcL.c)
 *     NdisOpenConfigurationEx @ 0x1C0028550 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028790 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C0028870 (NdisReadConfiguration.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisPDReadKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  NDIS_STATUS v2; // eax
  unsigned int v3; // ebx
  struct _NDIS_PD_BLOCK *PoolWithTag; // rax
  struct _NDIS_PD_BLOCK *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // r8
  int ParameterType; // [rsp+20h] [rbp-60h]
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+60h] [rbp-20h] BYREF
  int Status; // [rsp+A0h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+A8h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B0h] [rbp+30h] BYREF

  ConfigObject.NdisHandle = a1;
  ConfigurationHandle = 0LL;
  Keyword.Buffer = L"*PacketDirect";
  *(_QWORD *)&ConfigObject.Header.Type = 1311145LL;
  v13.Buffer = L"*PacketDirectDomain";
  *(_QWORD *)&ConfigObject.Flags = 0LL;
  ParameterValue = 0LL;
  *(_QWORD *)&Keyword.Length = 1835034LL;
  *(_QWORD *)&v13.Length = 2621478LL;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  Status = v2;
  if ( v2 )
  {
    v3 = NdisConvertNdisStatusToNtStatus(v2);
  }
  else
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    if ( Status )
    {
LABEL_3:
      v3 = 0;
      goto LABEL_4;
    }
    PoolWithTag = (struct _NDIS_PD_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6241444Eu);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x58uLL);
      a1->PDBlock = v6;
      *((_QWORD *)v6 + 6) = (char *)v6 + 40;
      *((_QWORD *)v6 + 5) = (char *)v6 + 40;
      *((_DWORD *)v6 + 4) = 0;
      *((_QWORD *)v6 + 8) = 0LL;
      *((_QWORD *)v6 + 7) = 0LL;
      *(_QWORD *)v6 = a1;
      if ( ParameterValue->ParameterData.IntegerData )
      {
        v10 = ConfigurationHandle;
        *((_BYTE *)v6 + 12) = 1;
        NdisReadConfiguration(&Status, &ParameterValue, v10, &v13, NdisParameterInteger);
        if ( !Status )
          *((_DWORD *)v6 + 4) = ParameterValue->ParameterData.IntegerData;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qcL(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, v8, v9, ParameterType);
      goto LABEL_3;
    }
    v3 = -1073741670;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Du,
        0xBu,
        (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids);
  }
LABEL_4:
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  return v3;
}

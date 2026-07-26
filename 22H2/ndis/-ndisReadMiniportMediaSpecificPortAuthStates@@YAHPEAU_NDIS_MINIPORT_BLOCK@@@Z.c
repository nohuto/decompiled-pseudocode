/*
 * XREFs of ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00354E8
 * Callers:
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0035378 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisCloseConfiguration @ 0x1C0028790 (NdisCloseConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00291E0 (NdisOpenProtocolConfiguration.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C003574C (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisReadMiniportMediaSpecificPortAuthStates(struct _NDIS_MINIPORT_BLOCK *a1)
{
  wchar_t *PoolWithTag; // rax
  unsigned int MiniportSpecificPortAuthStates; // ebx
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-79h] BYREF
  NTSTATUS v6; // [rsp+58h] [rbp-69h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+60h] [rbp-61h] BYREF
  _UNICODE_STRING String; // [rsp+68h] [rbp-59h] BYREF
  _UNICODE_STRING v9; // [rsp+78h] [rbp-49h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-39h] BYREF
  _UNICODE_STRING Source; // [rsp+98h] [rbp-29h] BYREF
  char v12; // [rsp+A8h] [rbp-19h] BYREF
  char v13; // [rsp+D0h] [rbp+Fh] BYREF

  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  *(_DWORD *)(&v9.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  Source = 0LL;
  ConfigurationHandle = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Eu,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      a1);
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)&v12;
  *(_DWORD *)&v9.Length = 2621440;
  v9.Buffer = (wchar_t *)&v13;
  if ( RtlIntegerToUnicodeString(a1->IfBlock->ifType, 0xAu, &String)
    || RtlIntegerToUnicodeString(a1->PhysicalMediumType, 0xAu, &v9) )
  {
    MiniportSpecificPortAuthStates = -1073741670;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes\\");
    RtlInitUnicodeString(&Source, L"\\");
    Destination.Length = 0;
    Destination.MaximumLength = String.Length + v9.Length + DestinationString.Length + Source.Length + 4;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      MiniportSpecificPortAuthStates = -1073741670;
      goto LABEL_9;
    }
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &String);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeStringToString(&Destination, &v9);
    v6 = RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer);
    MiniportSpecificPortAuthStates = v6;
    if ( !v6 )
    {
      NdisOpenProtocolConfiguration(&v6, &ConfigurationHandle, &Destination);
      MiniportSpecificPortAuthStates = v6;
      if ( !v6 )
      {
        MiniportSpecificPortAuthStates = ndisReadMiniportSpecificPortAuthStates(a1, ConfigurationHandle);
        NdisCloseConfiguration(ConfigurationHandle);
        if ( !MiniportSpecificPortAuthStates )
          a1->FilterPnPFlags |= 0x10u;
      }
    }
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_9:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Fu,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)a1,
      MiniportSpecificPortAuthStates);
  return MiniportSpecificPortAuthStates;
}

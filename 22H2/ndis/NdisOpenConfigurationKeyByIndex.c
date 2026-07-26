/*
 * XREFs of NdisOpenConfigurationKeyByIndex @ 0x1C0032E00
 * Callers:
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0146184 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C0027B00 (NdisOpenConfigurationKeyByName.c)
 *     ndisOpenProtocolSubkey @ 0x1C002941C (ndisOpenProtocolSubkey.c)
 */

void __stdcall NdisOpenConfigurationKeyByIndex(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        ULONG Index,
        PNDIS_STRING KeyName,
        PNDIS_HANDLE KeyHandle)
{
  PVOID *v9; // r15
  void *v10; // rbp
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v12; // rsi
  NTSTATUS v13; // eax
  unsigned __int16 v14; // ax
  int v15; // eax
  UNICODE_STRING SubKeyName; // [rsp+30h] [rbp-38h] BYREF
  ULONG Length; // [rsp+78h] [rbp+10h] BYREF

  Length = 0;
  SubKeyName = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x1Au,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      ConfigurationHandle,
      *(_QWORD *)&SubKeyName.Length,
      SubKeyName.Buffer);
  v9 = KeyHandle;
  *KeyHandle = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0
    || *((_QWORD *)ConfigurationHandle + 4)
    || (v15 = ndisOpenProtocolSubkey((__int64)ConfigurationHandle), *Status = v15, v15 >= 0) )
  {
    v10 = (void *)*((_QWORD *)ConfigurationHandle + 4);
    Length = 280;
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x118uLL, 0x2020444Eu);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      v13 = ZwEnumerateKey(v10, Index, KeyBasicInformation, PoolWithTag, Length, &Length);
      *Status = v13;
      if ( v13 >= 0 )
      {
        SubKeyName.MaximumLength = v12[6];
        SubKeyName.Length = SubKeyName.MaximumLength;
        SubKeyName.Buffer = v12 + 8;
        NdisOpenConfigurationKeyByName(Status, ConfigurationHandle, &SubKeyName, v9);
        if ( !*Status )
        {
          v14 = SubKeyName.Length;
          KeyName->MaximumLength = SubKeyName.Length;
          KeyName->Length = v14;
          KeyName->Buffer = (wchar_t *)((char *)*v9 + 176);
        }
      }
      ExFreePoolWithTag(v12, 0);
    }
    else
    {
      *Status = -1073741670;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x1Bu,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      ConfigurationHandle);
}

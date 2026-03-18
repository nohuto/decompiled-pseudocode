/*
 * XREFs of ExpWnfLookupPermanentName @ 0x140710A1C
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14071234C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140712974 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140712D00 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x1407C98C0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1407CD8F0 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1407E3D34 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpNtDeleteWnfStateData @ 0x14085C35C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140293330 (PdcCreateWatchdogAroundClientCall.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CAB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CAD0 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14070DBD0 (RtlValidRelativeSecurityDescriptor.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x140710BFC (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x140710D70 (ExpWnfComposeValueName.c)
 *     RtlLengthSecurityDescriptor @ 0x140710FF0 (RtlLengthSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14071170C (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfLookupPermanentName(unsigned __int64 a1, PSECURITY_DESCRIPTOR **a2)
{
  PSECURITY_DESCRIPTOR *v4; // rdi
  __int64 v5; // rbx
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // r14
  char v8; // r15
  int NameStoreRegistryRoot; // ebx
  _DWORD *v10; // rsi
  NTSTATUS i; // eax
  char *v12; // rbx
  ULONG v13; // esi
  ULONG v14; // eax
  unsigned int v15; // esi
  char *v16; // rbx
  _DWORD *v17; // rcx
  __int64 Pool2; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  char v23; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&ValueName.Length = 2228224LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v4 = 0LL;
  ValueName.Buffer = (wchar_t *)&v23;
  ExpWnfComposeValueName(a1, &ValueName);
  v5 = (a1 >> 4) & 3;
  if ( (_DWORD)v5 )
  {
    v7 = 0LL;
    v8 = 0;
  }
  else
  {
    v6 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
    v7 = PsAttachSiloToCurrentThread(v6);
    v8 = 1;
  }
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot((unsigned int)v5, &KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_13;
  v10 = 0LL;
  for ( i = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
        ;
        i = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              (PVOID)(Pool2 + 24),
              ResultLength,
              &ResultLength) )
  {
    NameStoreRegistryRoot = i;
    if ( i != -1073741789 )
      break;
    if ( v4 )
      ExFreePoolWithTag(v4, 0x20666E57u);
    Pool2 = ExAllocatePool2(256LL, ResultLength + 24, 543583831LL);
    v4 = (PSECURITY_DESCRIPTOR *)Pool2;
    if ( !Pool2 )
    {
      NameStoreRegistryRoot = -1073741670;
      goto LABEL_13;
    }
    v10 = (_DWORD *)(Pool2 + 24);
  }
  if ( i >= 0 )
  {
    if ( v10[1] == 3 )
    {
      v12 = (char *)(v10 + 3);
      *(_OWORD *)v4 = 0LL;
      v4[2] = 0LL;
      v13 = v10[2];
      v4[2] = v12;
      if ( RtlValidRelativeSecurityDescriptor(v12, v13, 0) )
      {
        ExpWnfSpecializeSecurityDescriptor(v4[2]);
        v14 = RtlLengthSecurityDescriptor(v4[2]);
        v15 = v13 - v14;
        v16 = &v12[v14];
        if ( v15 >= 4 )
        {
          v17 = v16 + 4;
          *(_DWORD *)v4 = *(_DWORD *)v16;
          NameStoreRegistryRoot = 0;
          if ( v15 - 4 < 0x10 )
            v17 = 0LL;
          v4[1] = v17;
          *a2 = v4;
          goto LABEL_13;
        }
      }
    }
    NameStoreRegistryRoot = -1073741823;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x20666E57u);
LABEL_13:
  if ( v8 )
    PsDetachSiloFromCurrentThread(v7);
  return (unsigned int)NameStoreRegistryRoot;
}

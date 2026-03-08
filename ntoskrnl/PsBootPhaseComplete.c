/*
 * XREFs of PsBootPhaseComplete @ 0x140812760
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1408174BC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140812A34 (RtlQueryImageFileExecutionOptions.c)
 *     PspQueryForwardersEnabled @ 0x140812AAC (PspQueryForwardersEnabled.c)
 *     PspIsDfssEnabled @ 0x140812B34 (PspIsDfssEnabled.c)
 */

__int64 __fastcall PsBootPhaseComplete(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r8
  bool v7; // bl
  NTSTATUS v8; // eax
  HANDLE v9; // rcx
  unsigned int *v10; // rdi
  int v11; // edx
  unsigned int v12; // ebx
  NTSTATUS v13; // eax
  __int64 v14; // rax
  _BYTE *ServerSiloGlobals; // rbx
  __int64 result; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v21[2]; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  __int128 KeyValueInformation; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v24[2]; // [rsp+C8h] [rbp-40h] BYREF
  const wchar_t *v25; // [rsp+D0h] [rbp-38h]
  _DWORD v26[4]; // [rsp+D8h] [rbp-30h] BYREF
  const wchar_t *v27; // [rsp+E8h] [rbp-20h]
  int v28; // [rsp+F0h] [rbp-18h]
  int v29; // [rsp+F8h] [rbp-10h]
  const wchar_t *v30; // [rsp+100h] [rbp-8h]
  int v31; // [rsp+108h] [rbp+0h]

  v19[0] = 8650882LL;
  ResultLength[0] = 0;
  v19[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\LsaInformation";
  KeyHandle = 0LL;
  ValueName.Buffer = L"UACInstalled";
  *(_QWORD *)&ValueName.Length = 1703960LL;
  v21[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
  *(&ObjectAttributes.Length + 1) = 0;
  v25 = L"EnableLUA";
  *(&ObjectAttributes.Attributes + 1) = 0;
  v27 = L"EnableVirtualization";
  v21[0] = 9961622LL;
  v30 = L"EnableInstallerDetection";
  KeyValueInformation = 0LL;
  v24[0] = 1310738;
  v26[0] = 1;
  v26[2] = 2752552;
  v28 = 2;
  v29 = 3276848;
  v31 = 3;
  ResultLength[1] = 0;
  if ( (int)RtlQueryImageFileExecutionOptions(a1, L"DevOverrideEnable", a3, ResultLength) >= 0 )
  {
    v3 = ResultLength[0] != 0;
    PspGlobalFlags = v3 | PspGlobalFlags & 0xFFFFFFFE;
  }
  RtlQueryImageFileExecutionOptions(v3, L"MaxLoaderThreads", v4, &PsDefaultLoaderThreads);
  RtlQueryImageFileExecutionOptions(v5, L"NoRemoteThreadBeforeProcessInit", v6, &PsNoRemoteThreadBeforeProcessInit);
  v7 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           &ValueName,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x10u,
           &ResultLength[1]) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      v7 = HIDWORD(KeyValueInformation) != 0;
    }
    ObCloseHandle(KeyHandle, 0);
    KeyHandle = 0LL;
    if ( v7 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v21;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v9 = KeyHandle;
      v10 = v26;
      v11 = v8;
      v12 = 0;
      if ( v8 < 0 )
        v9 = 0LL;
      KeyHandle = v9;
      do
      {
        if ( v9 )
        {
          v13 = ZwQueryValueKey(
                  v9,
                  (PUNICODE_STRING)&v24[6 * v12],
                  KeyValuePartialInformation,
                  &KeyValueInformation,
                  0x10u,
                  &ResultLength[1]);
          v9 = KeyHandle;
          v11 = v13;
        }
        if ( v11 < 0 || HIDWORD(KeyValueInformation) || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
        {
          _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), *v10);
          v9 = KeyHandle;
        }
        ++v12;
        v10 += 6;
      }
      while ( v12 < 3 );
      if ( v9 )
        ObCloseHandle(v9, 0);
    }
  }
  PsCpuFairShareEnabled = PspIsDfssEnabled();
  v14 = PdcCreateWatchdogAroundClientCall();
  ServerSiloGlobals = PsGetServerSiloGlobals(v14);
  ServerSiloGlobals[1048] = PspQueryForwardersEnabled();
  result = PspGlobalFlags & 0xFFFFFFF3 | 4;
  PspGlobalFlags = PspGlobalFlags & 0xFFFFFFF3 | 4;
  return result;
}

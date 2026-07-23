/*
 * XREFs of RtlpCreateUserThreadEx @ 0x1800487F0
 * Callers:
 *     RtlCreateUserThread @ 0x180048780 (RtlCreateUserThread.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CC9C0 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1800D5A40 (RtlCreateProcessReflection.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7740 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D83A0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendProcess @ 0x1800DC200 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC370 (RtlWow64SuspendThread.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4004 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtCreateThreadEx @ 0x18009ED10 (NtCreateThreadEx.c)
 */

NTSTATUS __fastcall RtlpCreateUserThreadEx(
        HANDLE ProcessHandle,
        void *a2,
        int a3,
        unsigned int a4,
        SIZE_T MaximumStackSize,
        SIZE_T StackSize,
        int a7,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        HANDLE *a10,
        _OWORD *a11)
{
  SIZE_T ZeroBits; // rsi
  char v13; // r9
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  char v17; // al
  int v18; // r8d
  ULONG CreateFlags; // ecx
  NTSTATUS result; // eax
  HANDLE ThreadHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+B0h] [rbp-50h] BYREF

  ZeroBits = a4;
  v13 = a3;
  v22 = 0LL;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return -1073741811;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityDescriptor = a2;
  AttributeList.Attributes[0].Attribute = 65539LL;
  v14 = a3 & 1 | 2;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.TotalLength = 40LL;
  if ( (a3 & 2) == 0 )
    v14 = a3 & 1;
  v15 = v14 | 4;
  if ( (a3 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x10;
  v17 = a3;
  if ( (a3 & 0x10) == 0 )
    v16 = v15;
  v18 = v16 | 0x20;
  if ( (v17 & 0x20) == 0 )
    v18 = v16;
  AttributeList.Attributes[0].Value = (ULONG_PTR)&v22;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  CreateFlags = v18 | 0x40;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  if ( (v13 & 0x40) == 0 )
    CreateFlags = v18;
  result = NtCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             ProcessHandle,
             StartRoutine,
             Argument,
             CreateFlags,
             ZeroBits,
             StackSize,
             MaximumStackSize,
             &AttributeList);
  if ( result >= 0 )
  {
    if ( a10 )
      *a10 = ThreadHandle;
    else
      NtClose(ThreadHandle);
    if ( a11 )
      *a11 = v22;
    return 0;
  }
  return result;
}

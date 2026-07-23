/*
 * XREFs of RtlpCreateUserThreadEx @ 0x1405D9C80
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140203BC8 (ExpWorkerFactoryCreateThread.c)
 *     RtlCreateUserThread @ 0x140910120 (RtlCreateUserThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x1403FBDC0 (ZwCreateThreadEx.c)
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
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-28h]
  __int128 v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-10h]

  v25 = 0LL;
  v27 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ThreadHandle = 0LL;
  ZeroBits = a4;
  v13 = a3;
  v26 = 0LL;
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
  result = ZwCreateThreadEx(
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
      ZwClose(ThreadHandle);
    if ( a11 )
      *a11 = v22;
    return 0;
  }
  return result;
}

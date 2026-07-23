/*
 * XREFs of _RegRtlCreateKeyTransacted @ 0x14063336C
 * Callers:
 *     _PnpCtxRegCreateKey @ 0x140630370 (_PnpCtxRegCreateKey.c)
 *     _RegRtlCreateTreeTransacted @ 0x140633154 (_RegRtlCreateTreeTransacted.c)
 *     _SysCtxOpenControlSet @ 0x1407A4D24 (_SysCtxOpenControlSet.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C640 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x1407CDC04 (_RegRtlOpenPredefinedKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x14097CD50 (NtCreateKeyTransacted_Stub.c)
 */

__int64 __fastcall RegRtlCreateKeyTransacted(
        char *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        void *a5,
        char a6,
        PHANDLE KeyHandle,
        PULONG Disposition,
        __int64 a9)
{
  void *v9; // rbx
  void *v13; // rsi
  int inited; // edi
  int v15; // r9d
  int v16; // ecx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *v20; // [rsp+B0h] [rbp+30h] BYREF

  v9 = 0LL;
  v20 = 0LL;
  v13 = a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = RegRtlOpenPredefinedKey(a1, &v20);
    if ( inited < 0 )
      goto LABEL_9;
    v9 = v20;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_10;
  ObjectAttributes.Length = 48;
  v16 = (32 * (a3 & 8 | 6)) | 2;
  if ( !a6 )
    v16 = 32 * (a3 & 8 | 6);
  if ( v9 )
    v13 = v9;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Attributes = v16 | 0x200;
  ObjectAttributes.SecurityDescriptor = a5;
  ObjectAttributes.RootDirectory = v13;
  if ( a9 )
  {
    inited = NtCreateKeyTransacted_Stub((_DWORD)KeyHandle, a4, (unsigned int)&ObjectAttributes, v15);
    if ( inited == -1073741702 )
      inited = -1072103420;
  }
  else
  {
    inited = ZwCreateKey(KeyHandle, a4, &ObjectAttributes, 0, 0LL, a3, Disposition);
  }
LABEL_9:
  v9 = v20;
LABEL_10:
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)inited;
}

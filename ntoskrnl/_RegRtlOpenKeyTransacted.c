/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x1406D43A0
 * Callers:
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     _SysCtxOpenMachine @ 0x1408520D0 (_SysCtxOpenMachine.c)
 *     _SysCtxOpenControlSet @ 0x140852308 (_SysCtxOpenControlSet.c)
 *     _RegRtlOpenPredefinedKey @ 0x140858A9C (_RegRtlOpenPredefinedKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14085F0A8 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x140868B00 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140A67F0C (_RegRtlDeletePathInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x140414830 (ZwOpenKeyEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _RegRtlIsPredefinedKey @ 0x1406D44BC (_RegRtlIsPredefinedKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140858A9C (_RegRtlOpenPredefinedKey.c)
 *     NtOpenKeyTransactedEx_Stub @ 0x140A68158 (NtOpenKeyTransactedEx_Stub.c)
 */

__int64 __fastcall RegRtlOpenKeyTransacted(
        void *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        HANDLE *KeyHandle,
        __int64 a6)
{
  void *v6; // rdi
  __int64 v11; // rcx
  NTSTATUS inited; // ebx
  NTSTATUS (__stdcall *v14)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
  void *v15; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF

  v6 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v15 = 0LL;
  DestinationString = 0LL;
  if ( (unsigned __int8)RegRtlIsPredefinedKey() )
  {
    inited = RegRtlOpenPredefinedKey(v11, &v15);
    if ( inited < 0 )
      goto LABEL_7;
    v6 = v15;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_8;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v6 )
    a1 = v6;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = (a3 & 8) != 0 ? 832 : 576;
  ObjectAttributes.ObjectName = &DestinationString;
  if ( a6 )
  {
    inited = NtOpenKeyTransactedEx_Stub((_DWORD)KeyHandle, a4, (unsigned int)&ObjectAttributes, a3, a6);
    if ( inited == -1073741702 )
    {
      if ( byte_140D1BFC8 )
      {
        v14 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_140D1BFC0;
      }
      else
      {
        v14 = ZwOpenKeyTransacted;
        byte_140D1BFC8 = 1;
        qword_140D1BFC0 = (__int64)ZwOpenKeyTransacted;
      }
      if ( !v14
        || (inited = ((__int64 (__fastcall *)(HANDLE *, _QWORD, OBJECT_ATTRIBUTES *, __int64))v14)(
                       KeyHandle,
                       a4,
                       &ObjectAttributes,
                       a6),
            inited == -1073741702) )
      {
        inited = -1072103420;
      }
    }
  }
  else
  {
    inited = ZwOpenKeyEx(KeyHandle, a4, &ObjectAttributes, a3);
  }
LABEL_7:
  v6 = v15;
LABEL_8:
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)inited;
}

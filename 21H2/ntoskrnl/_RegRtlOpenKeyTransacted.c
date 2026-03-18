/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x14078003C
 * Callers:
 *     _RegRtlDeleteTreeInternal @ 0x1406CB238 (_RegRtlDeleteTreeInternal.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _SysCtxOpenMachine @ 0x140827BDC (_SysCtxOpenMachine.c)
 *     _SysCtxOpenControlSet @ 0x140827DE0 (_SysCtxOpenControlSet.c)
 *     _RegRtlOpenPredefinedKey @ 0x14085D278 (_RegRtlOpenPredefinedKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140862B44 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlCopyTreeInternal @ 0x140A2D248 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140A2D760 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x14041DC40 (ZwOpenKeyEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _RegRtlOpenPredefinedKey @ 0x14085D278 (_RegRtlOpenPredefinedKey.c)
 *     NtOpenKeyTransactedEx_Stub @ 0x140A2D9B4 (NtOpenKeyTransactedEx_Stub.c)
 */

__int64 __fastcall RegRtlOpenKeyTransacted(
        char *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        PHANDLE KeyHandle,
        __int64 a6)
{
  void *v6; // rbx
  void *v10; // rsi
  NTSTATUS inited; // edi
  __int64 v12; // rbx
  NTSTATUS (__stdcall *v14)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *v17; // [rsp+A0h] [rbp+30h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  v10 = a1;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = RegRtlOpenPredefinedKey(a1, &v17);
    if ( inited < 0 )
      goto LABEL_7;
    v6 = v17;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_8;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v6 )
    v10 = v6;
  v12 = a6;
  ObjectAttributes.RootDirectory = v10;
  ObjectAttributes.Attributes = (a3 & 8) != 0 ? 832 : 576;
  ObjectAttributes.ObjectName = &DestinationString;
  if ( a6 )
  {
    inited = NtOpenKeyTransactedEx_Stub((_DWORD)KeyHandle, a4, (unsigned int)&ObjectAttributes, a3, a6);
    if ( inited == -1073741702 )
    {
      if ( byte_140D04CE0 )
      {
        v14 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_140D04CD0;
      }
      else
      {
        v14 = ZwOpenKeyTransacted;
        byte_140D04CE0 = 1;
        qword_140D04CD0 = (__int64)ZwOpenKeyTransacted;
      }
      if ( !v14
        || (inited = ((__int64 (__fastcall *)(PHANDLE, _QWORD, OBJECT_ATTRIBUTES *, __int64))v14)(
                       KeyHandle,
                       a4,
                       &ObjectAttributes,
                       v12),
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
  v6 = v17;
LABEL_8:
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)inited;
}

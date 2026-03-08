/*
 * XREFs of PipFindDeviceOverrideEntry @ 0x14068092C
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x140680570 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlHashUnicodeString @ 0x140680AE0 (RtlHashUnicodeString.c)
 *     IopReplaceSeperatorWithPound @ 0x140680B88 (IopReplaceSeperatorWithPound.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     PipCallbackHasDeviceOverrides @ 0x14094EB88 (PipCallbackHasDeviceOverrides.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipFindDeviceOverrideEntry(_WORD *Src, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  WCHAR *Pool2; // rax
  WCHAR *v10; // rdi
  const WCHAR *v11; // r15
  NTSTATUS i; // ebx
  NTSTATUS v13; // eax
  ULONG v14; // ecx
  const UNICODE_STRING **v15; // r12
  const UNICODE_STRING *j; // r14
  __int64 v17; // rax
  HANDLE v19; // rax
  __int128 v20; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+48h] BYREF
  ULONG HashValue; // [rsp+C8h] [rbp+58h] BYREF
  int v26; // [rsp+CCh] [rbp+5Ch]

  v26 = HIDWORD(a4);
  v5 = Src;
  HashValue = 0;
  v20 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  if ( *Src )
  {
    LODWORD(v6) = 0;
    do
    {
      v7 = -1LL;
      do
        ++v7;
      while ( Src[v7] );
      v6 = (unsigned int)(v7 + v6 + 1);
      Src = &v5[v6];
    }
    while ( *Src );
    v8 = v6 + 1;
    Pool2 = (WCHAR *)ExAllocatePool2(256LL, 2LL * v8, 1852403792LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v5, 2LL * v8);
      *((_QWORD *)&v20 + 1) = v10;
      LOWORD(v20) = 2 * v8;
      WORD1(v20) = 2 * v8;
      IopReplaceSeperatorWithPound(&v20, &v20);
      v11 = v10;
      for ( i = -1073741772; *v11; v11 += v17 + 1 )
      {
        RtlInitUnicodeString(&DestinationString, v11);
        v13 = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
        v14 = HashValue;
        i = -1073741772;
        if ( v13 < 0 )
          v14 = 0;
        HashValue = v14;
        v15 = (const UNICODE_STRING **)(PnpDeviceOverrideHashList + 16LL * (v14 % PnpDeviceOverrideHashListSize));
        for ( j = *v15; j != (const UNICODE_STRING *)v15; j = *(const UNICODE_STRING **)&j->Length )
        {
          if ( RtlEqualUnicodeString(&DestinationString, j + 1, 1u) )
          {
            v19 = Handle;
            if ( !Handle )
            {
              LODWORD(v20) = 8781956;
              *((_QWORD *)&v20 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceOverrides";
              *(_QWORD *)&ObjectAttributes.Length = 48LL;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
              *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
              Handle = 0LL;
              ObjectAttributes.RootDirectory = 0LL;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              i = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
              if ( i < 0 )
                goto LABEL_15;
              v19 = Handle;
            }
            ObjectAttributes.RootDirectory = v19;
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            ObjectAttributes.ObjectName = &DestinationString;
            *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
            KeyHandle = 0LL;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            i = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
            if ( i >= 0 )
            {
              if ( (unsigned __int8)PipCallbackHasDeviceOverrides(KeyHandle, a3) )
              {
                ZwClose(KeyHandle);
                goto LABEL_15;
              }
              ZwClose(KeyHandle);
              i = -1073741772;
            }
            break;
          }
        }
        v17 = -1LL;
        do
          ++v17;
        while ( v11[v17] );
      }
    }
    else
    {
      i = -1073741670;
    }
LABEL_15:
    if ( Handle )
      ZwClose(Handle);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)i;
}

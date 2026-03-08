/*
 * XREFs of InitTimerCoalescing @ 0x1C00F3720
 * Callers:
 *     <none>
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x1C0079290 (SetTimerCoalescingTolerance.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

int InitTimerCoalescing()
{
  int v0; // ebx
  int result; // eax
  int v2; // ecx
  char *i; // rax
  int v4; // ecx
  char *j; // rax
  int v6; // ecx
  char *k; // rax
  int v8; // ecx
  __int128 *m; // rax
  __int128 *n; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-49h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-19h] BYREF
  int v16; // [rsp+84h] [rbp-15h]
  int v17; // [rsp+88h] [rbp-11h]
  int v18; // [rsp+8Ch] [rbp-Dh]
  char v19; // [rsp+90h] [rbp-9h] BYREF
  __int128 v20; // [rsp+9Ch] [rbp+3h] BYREF
  char v21; // [rsp+ACh] [rbp+13h] BYREF
  __int128 v22; // [rsp+BCh] [rbp+23h] BYREF
  char v23; // [rsp+CCh] [rbp+33h] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\software\\microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"TimerCoalescing");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x60u,
           &ResultLength) >= 0
      && v16 == 3
      && v17 == 80
      && !v18 )
    {
      v2 = 0;
      for ( i = &v19; !*(_DWORD *)i; i += 4 )
      {
        if ( (unsigned int)++v2 >= 3 )
        {
          v4 = 0;
          for ( j = &v21; !*(_DWORD *)j; j += 4 )
          {
            if ( (unsigned int)++v4 >= 4 )
            {
              v6 = 0;
              for ( k = &v23; !*(_DWORD *)k; k += 4 )
              {
                if ( (unsigned int)++v6 >= 4 )
                {
                  v8 = 0;
                  for ( m = &v20; *(_DWORD *)m <= 0x7FFFFFF5u; m = (__int128 *)((char *)m + 4) )
                  {
                    if ( (unsigned int)++v8 >= 4 )
                    {
                      for ( n = &v22; *(_DWORD *)n <= 0x7FFFFFF5u; n = (__int128 *)((char *)n + 4) )
                      {
                        if ( (unsigned int)++v0 >= 4 )
                        {
                          xmmword_1C035D168 = v20;
                          *(_OWORD *)&gTimerCoalescingSpec = v22;
                          SetTimerCoalescingTolerance(0LL);
                          return ZwClose(KeyHandle);
                        }
                      }
                      return ZwClose(KeyHandle);
                    }
                  }
                  return ZwClose(KeyHandle);
                }
              }
              return ZwClose(KeyHandle);
            }
          }
          return ZwClose(KeyHandle);
        }
      }
    }
    return ZwClose(KeyHandle);
  }
  return result;
}

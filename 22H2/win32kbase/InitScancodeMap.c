/*
 * XREFs of InitScancodeMap @ 0x1C000E700
 * Callers:
 *     <none>
 * Callees:
 *     FastGetProfileValue @ 0x1C000FE10 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C0010F50 (RtlLoadStringOrError.c)
 *     OpenCacheKeyEx @ 0x1C00278B0 (OpenCacheKeyEx.c)
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

int InitScancodeMap()
{
  const WCHAR *v0; // rdi
  void *v1; // rbx
  NTSTATUS v2; // eax
  ULONG v3; // ebx
  const WCHAR *v4; // rdi
  __int64 v5; // rax
  void *v6; // rbx
  ULONG v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi
  struct tagSCANCODEFLEXIBLEMAP *v10; // rdi
  ULONG Length; // [rsp+48h] [rbp-49h] BYREF
  int v13; // [rsp+4Ch] [rbp-45h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  __int128 KeyValueInformation; // [rsp+60h] [rbp-31h] BYREF
  _WORD v16[40]; // [rsp+78h] [rbp-19h] BYREF

  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  Length = 0;
  v13 = gdwPolicyFlags;
  v0 = L"Scancode Map";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v16[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map", v16);
    v0 = v16;
  }
  while ( 1 )
  {
    v1 = (void *)OpenCacheKeyEx(0LL, 8LL, 131097LL, &v13);
    if ( !v1 )
      goto LABEL_10;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v0);
    v2 = ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v2 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      ZwClose(v1);
      v3 = Length;
      goto LABEL_11;
    }
    if ( v2 == -2147483643 )
      break;
    if ( !v13 )
    {
      ZwClose(v1);
LABEL_10:
      v3 = 0;
      goto LABEL_11;
    }
    ZwClose(v1);
  }
  ZwClose(v1);
  v3 = DWORD2(KeyValueInformation);
LABEL_11:
  if ( v3 - 13 <= 0xFFF1 )
  {
    v8 = Win32AllocPoolZInit(v3 + 8LL);
    v9 = v8;
    if ( v8 )
    {
      FastGetProfileValue(0LL, 8LL, L"Scancode Map", 0LL, v8, v3, 0);
      gpScancodeMap = v9;
    }
  }
  if ( gpFlexMap )
  {
    Win32FreePool(gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  v13 = gdwPolicyFlags;
  v4 = L"Scancode Map Ex";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v16[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map Ex", v16);
    v4 = v16;
  }
  while ( 1 )
  {
    v5 = OpenCacheKeyEx(0LL, 8LL, 131097LL, &v13);
    v6 = (void *)v5;
    if ( !v5 )
      goto LABEL_22;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v4);
    LODWORD(v5) = ZwQueryValueKey(
                    v6,
                    &DestinationString,
                    KeyValuePartialInformation,
                    &KeyValueInformation,
                    Length,
                    &Length);
    if ( (int)v5 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      LODWORD(v5) = ZwClose(v6);
      v7 = Length;
      goto LABEL_23;
    }
    if ( (_DWORD)v5 == -2147483643 )
      break;
    if ( !v13 )
    {
      if ( v6 )
        LODWORD(v5) = ZwClose(v6);
LABEL_22:
      v7 = 0;
      goto LABEL_23;
    }
    ZwClose(v6);
  }
  LODWORD(v5) = ZwClose(v6);
  v7 = DWORD2(KeyValueInformation);
LABEL_23:
  if ( v7 >= 0x10 && (v7 & 0xF) == 0 )
  {
    v5 = Win32AllocPoolZInit(v7);
    v10 = (struct tagSCANCODEFLEXIBLEMAP *)v5;
    if ( v5 )
    {
      LODWORD(v5) = FastGetProfileValue(0LL, 8LL, L"Scancode Map Ex", 0LL, v5, v7, 0);
      gdwFlexMapSize = v7 >> 4;
      gpFlexMap = v10;
    }
  }
  return v5;
}

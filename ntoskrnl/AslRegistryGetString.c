__int64 __fastcall AslRegistryGetString(wchar_t **a1, void *a2, const WCHAR *a3)
{
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  wchar_t *v8; // rax
  wchar_t *v9; // rdi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a3);
  v5 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v7 = v5;
  if ( v5 == -2147483643 || v5 == -1073741789 )
  {
    ResultLength += 2;
    v8 = (wchar_t *)AslAlloc(v6, ResultLength);
    v9 = v8;
    if ( !v8 )
    {
      v7 = -1073741801;
      AslLogCallPrintf(1LL);
      return (unsigned int)v7;
    }
    v7 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, v8, ResultLength, &ResultLength);
    if ( v7 >= 0 )
    {
      if ( (unsigned int)(*((_DWORD *)v9 + 1) - 1) > 1 )
      {
        AslLogCallPrintf(1LL);
        v7 = -1073741788;
LABEL_12:
        ExFreePoolWithTag(v9, 0x74705041u);
        return (unsigned int)v7;
      }
      v9[((unsigned __int64)*((unsigned int *)v9 + 2) >> 1) + 6] = 0;
      v7 = AslStringDuplicate(a1, v9 + 6);
      if ( v7 >= 0 )
        goto LABEL_12;
    }
    AslLogCallPrintf(1LL);
    goto LABEL_12;
  }
  if ( v5 != -1073741772 )
    AslLogCallPrintf(1LL);
  return (unsigned int)v7;
}

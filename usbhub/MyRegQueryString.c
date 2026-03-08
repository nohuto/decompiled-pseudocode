/*
 * XREFs of MyRegQueryString @ 0x1C005D154
 * Callers:
 *     CheckUSBFnConfiguration @ 0x1C005C27C (CheckUSBFnConfiguration.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005CACC (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     memmove @ 0x1C0023580 (memmove.c)
 */

__int64 __fastcall MyRegQueryString(HANDLE KeyHandle, const WCHAR *a2, PVOID *a3)
{
  _DWORD *Pool2; // rdi
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  _DWORD *v8; // rax
  PVOID v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+18h] BYREF

  ResultLength = 0;
  *a3 = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1430540870LL);
  if ( !Pool2 )
  {
LABEL_2:
    v6 = -1073741670;
LABEL_13:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
    return (unsigned int)v6;
  }
  v7 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, 0x10u, &ResultLength);
  v6 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    while ( 1 )
    {
      v10 = Pool2[2];
      v11 = ExAllocatePool2(64LL, v10, 1430540870LL);
      *a3 = (PVOID)v11;
      if ( !v11 )
      {
        v6 = -1073741670;
        goto LABEL_12;
      }
      ExFreePoolWithTag(Pool2, 0);
      v8 = (_DWORD *)ExAllocatePool2(64LL, ResultLength, 1430540870LL);
      Pool2 = v8;
      if ( !v8 )
        goto LABEL_2;
      v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v8, ResultLength, &ResultLength);
      if ( v6 < 0 )
        goto LABEL_12;
      v9 = *a3;
      if ( v10 == Pool2[2] )
        break;
      ExFreePoolWithTag(v9, 0);
      *a3 = 0LL;
    }
    memmove(v9, Pool2 + 3, v10);
  }
LABEL_12:
  ExFreePoolWithTag(Pool2, 0);
  if ( v6 < 0 )
    goto LABEL_13;
  return (unsigned int)v6;
}

/*
 * XREFs of PipCheckDependencies @ 0x140B59300
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B57B44 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     PipLookupGroupName @ 0x140B5935C (PipLookupGroupName.c)
 */

__int64 __fastcall PipCheckDependencies(void *a1)
{
  PVOID v2; // rsi
  unsigned int v3; // ebx
  int v4; // ebp
  const WCHAR *v5; // rdi
  __int64 MaximumLength; // r14
  __int64 v7; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  P = 0LL;
  DestinationString = 0LL;
  if ( IopGetRegistryValue(a1, L"DependOnGroup", 0, &P) < 0 )
    return 1LL;
  v2 = P;
  v3 = 1;
  v4 = *((_DWORD *)P + 3);
  v5 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
  if ( v4 )
  {
    while ( 1 )
    {
      RtlInitUnicodeString(&DestinationString, v5);
      MaximumLength = DestinationString.MaximumLength;
      DestinationString.Length = DestinationString.MaximumLength;
      v7 = PipLookupGroupName(&DestinationString);
      if ( v7 )
      {
        if ( !*(_DWORD *)(v7 + 28) )
          break;
      }
      v5 = (const WCHAR *)((char *)v5 + MaximumLength);
      v4 -= MaximumLength;
      if ( !v4 )
        goto LABEL_8;
    }
    v3 = 0;
  }
LABEL_8:
  ExFreePoolWithTag(v2, 0);
  return v3;
}

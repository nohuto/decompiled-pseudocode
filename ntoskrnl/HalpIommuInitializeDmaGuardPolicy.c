/*
 * XREFs of HalpIommuInitializeDmaGuardPolicy @ 0x1403B00F4
 * Callers:
 *     HalpIommuInitSystem @ 0x140A86E10 (HalpIommuInitSystem.c)
 * Callees:
 *     strstr @ 0x1403D3650 (strstr.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuInitializeDmaGuardPolicy(__int64 a1)
{
  bool v2; // si
  const char *v3; // rcx
  __int64 result; // rax
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( HalpHvIommu )
  {
    v5 = 0;
    result = ((__int64 (__fastcall *)(char *))qword_140C622E8)(&v5);
    if ( (int)result >= 0 )
    {
      HalpDmaGuardEnabled = v5;
      if ( v5 )
      {
        HalpIommuPolicy = 3;
        HalpIommuSecurityPolicy = 1;
      }
    }
  }
  else
  {
    v2 = 0;
    if ( a1 )
    {
      v3 = *(const char **)(a1 + 216);
      if ( v3 )
        v2 = strstr(v3, "DMAGUARDPOLICY=ENABLE") != 0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 8) != 0 || v2 )
        goto LABEL_13;
    }
    if ( HalpIommuDmaGuardTableOptIn )
    {
LABEL_13:
      HalpIommuPolicy = 3;
      HalpIommuSecurityPolicy = 1;
    }
    return 0LL;
  }
  return result;
}

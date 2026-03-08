/*
 * XREFs of HalpIommuUpdateRemappingDestination @ 0x140A92F78
 * Callers:
 *     HalpUpdateIrtDestinationId @ 0x140518148 (HalpUpdateIrtDestinationId.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuUpdateRemappingDestination(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  ULONG_PTR *v5; // rbx
  __int64 v8; // rbp
  ULONG_PTR *v9; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = (ULONG_PTR *)HalpIommuList;
  v8 = a2;
  while ( v5 != &HalpIommuList )
  {
    v9 = v5;
    v5 = (ULONG_PTR *)*v5;
    result = *((unsigned int *)v9 + 122);
    if ( (result & 0x40) != 0 )
    {
      LOBYTE(a2) = 1;
      result = ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, __int64, int))v9[24])(v9[2], a2, v8, a3, a4);
    }
  }
  return result;
}

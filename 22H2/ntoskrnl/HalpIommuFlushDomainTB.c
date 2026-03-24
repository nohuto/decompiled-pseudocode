/*
 * XREFs of HalpIommuFlushDomainTB @ 0x1404CBD9C
 * Callers:
 *     HalpIommuFlushDmaDomain @ 0x1404C93C8 (HalpIommuFlushDmaDomain.c)
 *     HalpIommuFreeDomain @ 0x1404CBDDC (HalpIommuFreeDomain.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuFlushDomainTB(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( HalpHvIommu )
    return 3221225659LL;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(a1 + 128))(*(_QWORD *)(a1 + 16), a2, 0LL, a3, a4);
  return 0LL;
}

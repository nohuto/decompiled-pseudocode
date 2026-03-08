/*
 * XREFs of HalpIommuAcquireNewDomain @ 0x1403A4294
 * Callers:
 *     HalpIommuGetHardwareDomain @ 0x1403A414C (HalpIommuGetHardwareDomain.c)
 * Callees:
 *     HalpIommuGetDomainId @ 0x1403A4310 (HalpIommuGetDomainId.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuAcquireNewDomain(__int64 a1, __int64 a2, _DWORD *a3)
{
  int DomainId; // edx
  unsigned int (__fastcall *v6)(_QWORD, __int64, _QWORD, _QWORD); // rax
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  if ( !HalpHvIommu )
  {
    DomainId = 0;
    if ( a3 )
    {
      *(_DWORD *)(a2 + 48) = *a3;
    }
    else
    {
      DomainId = HalpIommuGetDomainId(a1, &v8);
      if ( DomainId < 0 )
        return (unsigned int)DomainId;
      *(_DWORD *)(a2 + 48) = v8;
    }
    v6 = *(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(a1 + 72);
    if ( v6 )
      return v6(*(_QWORD *)(a1 + 16), a2, 0LL, 0LL);
    return (unsigned int)DomainId;
  }
  return 3221225659LL;
}

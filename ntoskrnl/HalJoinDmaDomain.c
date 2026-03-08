/*
 * XREFs of HalJoinDmaDomain @ 0x14038C5D0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140822570 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     HalpDmaAllocateDomain @ 0x14038C660 (HalpDmaAllocateDomain.c)
 *     HalpDmaReferenceDomainObject @ 0x14038D02C (HalpDmaReferenceDomainObject.c)
 *     HalpDmaGetAdapterVersion @ 0x1403B4514 (HalpDmaGetAdapterVersion.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpDmaDereferenceDomainObject @ 0x140510338 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaIsDomainCompatible @ 0x14051086C (HalpDmaIsDomainCompatible.c)
 */

__int64 __fastcall HalJoinDmaDomain(__int64 a1, ULONG_PTR *a2)
{
  char v4; // bp
  ULONG_PTR Domain; // rsi
  int v6; // ebx

  v4 = 0;
  if ( (unsigned int)HalpDmaGetAdapterVersion() == 3 && !*(_QWORD *)(a1 + 512) )
  {
    if ( (unsigned __int64)a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      Domain = *a2;
      if ( Domain && (unsigned __int8)HalpDmaIsDomainCompatible(a1, Domain) )
      {
        v6 = HalpDmaReferenceDomainObject(Domain);
        if ( v6 < 0 )
          goto LABEL_12;
        goto LABEL_6;
      }
      v6 = -1073741811;
    }
    else
    {
      Domain = HalpDmaAllocateDomain(a1);
      if ( Domain )
      {
        v6 = 0;
LABEL_6:
        *(_QWORD *)(a1 + 512) = Domain;
        v4 = 1;
        if ( !*(_DWORD *)(Domain + 48) )
          return (unsigned int)v6;
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(HalpDmaIommuInterfaceFcnTable + 16))(
               *(_QWORD *)(Domain + 40),
               *(_QWORD *)(a1 + 544));
        if ( v6 >= 0 )
        {
          if ( *(_DWORD *)(Domain + 48) != 3 )
            return (unsigned int)v6;
          v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(HalpDmaIommuInterfaceFcnTable
                                                                                          + 128))(
                 *(_QWORD *)(Domain + 40),
                 *(unsigned int *)(a1 + 252),
                 0LL,
                 0LL,
                 0LL,
                 a1 + 560);
          if ( v6 >= 0 )
            return (unsigned int)v6;
          (*(void (__fastcall **)(_QWORD))(HalpDmaIommuInterfaceFcnTable + 24))(*(_QWORD *)(a1 + 544));
          *(_QWORD *)(a1 + 512) = 0LL;
          goto LABEL_13;
        }
LABEL_12:
        *(_QWORD *)(a1 + 512) = 0LL;
        if ( !v4 )
          return (unsigned int)v6;
LABEL_13:
        HalpDmaDereferenceDomainObject(Domain);
        return (unsigned int)v6;
      }
      v6 = -1073741670;
    }
    *(_QWORD *)(a1 + 512) = 0LL;
    return (unsigned int)v6;
  }
  return 3221225485LL;
}

/*
 * XREFs of HalpIommuLeaveDmaDomain @ 0x140516044
 * Callers:
 *     HalpIommuBlockDevice @ 0x1405153C0 (HalpIommuBlockDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x1405234A0 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDevice @ 0x140523720 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x1405238E0 (IommuDomainDetachDeviceEx.c)
 * Callees:
 *     HalpIommuGetHardwareDomain @ 0x1403A414C (HalpIommuGetHardwareDomain.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpIommuAttachDeviceDomain @ 0x140512E8C (HalpIommuAttachDeviceDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14051567C (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuIsInPermanentPassthrough @ 0x140515EB0 (HalpIommuIsInPermanentPassthrough.c)
 */

__int64 __fastcall HalpIommuLeaveDmaDomain(__int64 a1, ULONG_PTR a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  if ( HalpHvIommu )
  {
    v4 = ((__int64 (__fastcall *)(_QWORD))qword_140C622B8)(*(_QWORD *)(a1 + 32));
    v5 = v4;
    if ( (_WORD)v4 != 118 )
    {
      if ( v4 < 0 )
        KeBugCheckEx(0x1D9u, 2uLL, v4, a2, 0LL);
      goto LABEL_18;
    }
LABEL_6:
    v5 = 0;
LABEL_18:
    *(_QWORD *)(a1 + 24) = 0LL;
    return (unsigned int)v5;
  }
  if ( HalpIommuIsInPermanentPassthrough(a1, a2) )
    goto LABEL_6;
  result = HalpIommuGetHardwareDomain(a2, *(_QWORD *)(v6 + 32), 0, 0, 0, (__int64 *)&v10);
  v5 = result;
  if ( (int)result < 0 )
    return result;
  if ( HalpIommuSecurityPolicy != 1 || !*(_BYTE *)(a1 + 80) )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( !HalpHvIommu )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(a1 + 32) + 128LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL),
        v8,
        0LL);
      *(_QWORD *)(v8 + 16) = 0LL;
    }
LABEL_15:
    if ( v10 )
      HalpIommuDereferenceHardwareDomain(a2, v10);
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_18;
  }
  result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, *(_QWORD *)(a1 + 32), 0, 0, 0, &v9);
  if ( (int)result >= 0 )
  {
    result = HalpIommuAttachDeviceDomain(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v9 + 32);
    v5 = result;
    if ( (int)result >= 0 )
      goto LABEL_15;
  }
  return result;
}

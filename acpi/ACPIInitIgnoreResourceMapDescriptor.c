/*
 * XREFs of ACPIInitIgnoreResourceMapDescriptor @ 0x1C003AFD0
 * Callers:
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00904A0 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0090830 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0090EAC (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00912CC (PnpiBiosAddressToIoDescriptor.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ACPIInitIgnoreResourceMapDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  _QWORD *v7; // rcx

  result = (_QWORD *)ExAllocatePool2(256LL, 40LL, 1383097153LL);
  result[4] = a3;
  result[2] = a1;
  result[3] = a2;
  v7 = (_QWORD *)qword_1C006F018;
  if ( *(__int64 **)qword_1C006F018 != &AcpiIgnoreResourceMapValidationList )
    __fastfail(3u);
  *result = &AcpiIgnoreResourceMapValidationList;
  result[1] = v7;
  *v7 = result;
  qword_1C006F018 = (__int64)result;
  return result;
}

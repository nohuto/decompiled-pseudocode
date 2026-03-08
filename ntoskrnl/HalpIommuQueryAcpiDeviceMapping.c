/*
 * XREFs of HalpIommuQueryAcpiDeviceMapping @ 0x1403AF2F4
 * Callers:
 *     HalpIommuDmaRemappingCapable @ 0x1403AF2A0 (HalpIommuDmaRemappingCapable.c)
 *     HalpIommuBlockDevice @ 0x1405153C0 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x140516330 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuQueryAcpiDeviceMapping(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rbx
  __int64 result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = HalpIommuList;
  result = 3221226021LL;
  while ( (ULONG_PTR *)v4 != &HalpIommuList )
  {
    if ( *(_QWORD *)(v4 + 360) )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v4 + 360))(*(_QWORD *)(v4 + 16), a1, a2);
      if ( (_DWORD)result != -1073741275 )
        break;
    }
    v4 = *(_QWORD *)v4;
  }
  return result;
}

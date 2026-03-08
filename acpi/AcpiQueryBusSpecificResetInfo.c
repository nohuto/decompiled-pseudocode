/*
 * XREFs of AcpiQueryBusSpecificResetInfo @ 0x1C0082F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiQueryBusSpecificResetInfo(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 (__fastcall *v7)(_QWORD, _DWORD *, __int64); // r10
  unsigned int v8; // ecx

  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
  {
    v7 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64))(v5 + 56);
    if ( v7 )
    {
      v8 = v7(*(_QWORD *)(v5 + 8), a2, (a3 + 24) & -(__int64)(a3 != 0));
      if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741789 )
        return v8;
    }
  }
  ++*a2;
  if ( !a3 )
    return 3221225507LL;
  *(GUID *)a3 = GUID_BUS_TYPE_ACPI;
  if ( *(_QWORD *)(a1 + 72) )
    *(_QWORD *)(a3 + 16) |= 2uLL;
  return 0LL;
}

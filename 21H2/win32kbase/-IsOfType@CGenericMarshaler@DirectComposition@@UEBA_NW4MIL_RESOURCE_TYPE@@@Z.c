/*
 * XREFs of ?IsOfType@CGenericMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0214B10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CResourceMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C008B860 (-IsOfType@CResourceMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CGenericMarshaler::IsOfType(__int64 a1, int a2)
{
  char v4; // al
  char v5; // cl

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) == a2 )
    return 1;
  v4 = DirectComposition::CResourceMarshaler::IsOfType(a1, a2);
  v5 = 0;
  if ( v4 )
    return 1;
  return v5;
}

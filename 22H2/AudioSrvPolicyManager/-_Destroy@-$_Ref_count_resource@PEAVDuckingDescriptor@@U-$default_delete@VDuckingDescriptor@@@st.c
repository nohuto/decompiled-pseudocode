/*
 * XREFs of ?_Destroy@?$_Ref_count_resource@PEAVDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@EEAAXXZ @ 0x18000E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Ref_count_resource<DuckingDescriptor *,std::default_delete<DuckingDescriptor>>::_Destroy(
        __int64 a1)
{
  _QWORD *v1; // rcx

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    *v1 = &IDuckingDescriptor::`vftable';
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
}

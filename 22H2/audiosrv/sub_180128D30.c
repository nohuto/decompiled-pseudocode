/*
 * XREFs of sub_180128D30 @ 0x180128D30
 * Callers:
 *     sub_180128DA0 @ 0x180128DA0 (sub_180128DA0.c)
 *     sub_180128E30 @ 0x180128E30 (sub_180128E30.c)
 *     sub_180128E70 @ 0x180128E70 (sub_180128E70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_180128D30(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  result = &off_180147160;
  *a1 = &off_180147160;
  v3 = a1[67];
  if ( v3 )
  {
    a1[67] = 0LL;
    result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = a1[66];
  if ( v4 )
  {
    a1[66] = 0LL;
    return (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}

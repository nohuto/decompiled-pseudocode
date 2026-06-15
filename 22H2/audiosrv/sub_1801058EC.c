/*
 * XREFs of sub_1801058EC @ 0x1801058EC
 * Callers:
 *     sub_18010584B @ 0x18010584B (sub_18010584B.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801058EC(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 52) = -1073741823;
  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}

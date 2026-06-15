/*
 * XREFs of sub_1800D2DC8 @ 0x1800D2DC8
 * Callers:
 *     sub_1800028A0 @ 0x1800028A0 (sub_1800028A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D2DC8(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 88) = a2;
  v2 = *(_QWORD *)(a1 + 208);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return result;
}

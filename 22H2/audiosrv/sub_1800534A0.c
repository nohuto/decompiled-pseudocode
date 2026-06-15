/*
 * XREFs of sub_1800534A0 @ 0x1800534A0
 * Callers:
 *     sub_180074B20 @ 0x180074B20 (sub_180074B20.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800534A0(__int64 a1, int *a2, _QWORD *a3)
{
  int v3; // r9d

  *a3 = 0LL;
  v3 = *a2;
  if ( (*(_QWORD *)a2 || a2[2] != 192 || a2[3] != 1174405120)
    && (v3 != 42154548 || a2[1] != 1248663783 || a2[2] != -408899961 || a2[3] != -522130937) )
  {
    if ( v3 != 64 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
      return 2147500034LL;
    a1 += 8LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}

/*
 * XREFs of sub_1800CD9A8 @ 0x1800CD9A8
 * Callers:
 *     sub_18006F0C0 @ 0x18006F0C0 (sub_18006F0C0.c)
 *     sub_18006F568 @ 0x18006F568 (sub_18006F568.c)
 *     sub_18006F708 @ 0x18006F708 (sub_18006F708.c)
 *     sub_18006FB2C @ 0x18006FB2C (sub_18006FB2C.c)
 *     sub_18007001C @ 0x18007001C (sub_18007001C.c)
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 *     sub_180073D04 @ 0x180073D04 (sub_180073D04.c)
 *     sub_1800740C0 @ 0x1800740C0 (sub_1800740C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800CD9A8(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}

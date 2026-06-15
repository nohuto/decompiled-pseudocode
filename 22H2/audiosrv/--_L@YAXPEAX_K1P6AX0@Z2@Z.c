/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006A1BC
 * Callers:
 *     sub_18002A1C8 @ 0x18002A1C8 (sub_18002A1C8.c)
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_180057B1C @ 0x180057B1C (sub_180057B1C.c)
 *     sub_18005AD24 @ 0x18005AD24 (sub_18005AD24.c)
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 *     sub_180064D2C @ 0x180064D2C (sub_180064D2C.c)
 *     sub_1800C4DB0 @ 0x1800C4DB0 (sub_1800C4DB0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180069CC4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}

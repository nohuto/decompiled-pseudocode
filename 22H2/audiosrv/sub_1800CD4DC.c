/*
 * XREFs of sub_1800CD4DC @ 0x1800CD4DC
 * Callers:
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_180032A30 @ 0x180032A30 (sub_180032A30.c)
 *     sub_18004DDF0 @ 0x18004DDF0 (sub_18004DDF0.c)
 *     sub_18006F0C0 @ 0x18006F0C0 (sub_18006F0C0.c)
 *     sub_18006FD50 @ 0x18006FD50 (sub_18006FD50.c)
 *     sub_180073640 @ 0x180073640 (sub_180073640.c)
 *     sub_180073AF0 @ 0x180073AF0 (sub_180073AF0.c)
 *     sub_1800CD7AC @ 0x1800CD7AC (sub_1800CD7AC.c)
 *     sub_1800CDFEC @ 0x1800CDFEC (sub_1800CDFEC.c)
 *     sub_1800E24D0 @ 0x1800E24D0 (sub_1800E24D0.c)
 *     sub_1800E5760 @ 0x1800E5760 (sub_1800E5760.c)
 *     sub_1800E75B4 @ 0x1800E75B4 (sub_1800E75B4.c)
 *     sub_1800E7930 @ 0x1800E7930 (sub_1800E7930.c)
 *     sub_1800E7A9C @ 0x1800E7A9C (sub_1800E7A9C.c)
 *     sub_1800E7E80 @ 0x1800E7E80 (sub_1800E7E80.c)
 *     sub_1800E8240 @ 0x1800E8240 (sub_1800E8240.c)
 *     sub_1800EDDB4 @ 0x1800EDDB4 (sub_1800EDDB4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CD4DC(_QWORD *a1, __int64 *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx

  v3 = 0;
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a2 = 0LL;
  if ( *a1 )
    return (*(unsigned int (__fastcall **)(_QWORD, _DWORD *, __int64 *))(*(_QWORD *)*a1 + 24LL))(
             *a1,
             &dword_18015B850,
             a2);
  return v3;
}

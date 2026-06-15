/*
 * XREFs of sub_1800CD548 @ 0x1800CD548
 * Callers:
 *     sub_1800289B0 @ 0x1800289B0 (sub_1800289B0.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_18006F0C0 @ 0x18006F0C0 (sub_18006F0C0.c)
 *     sub_18006FD50 @ 0x18006FD50 (sub_18006FD50.c)
 *     sub_1800CD7AC @ 0x1800CD7AC (sub_1800CD7AC.c)
 *     sub_1800E7930 @ 0x1800E7930 (sub_1800E7930.c)
 *     sub_1800E7E80 @ 0x1800E7E80 (sub_1800E7E80.c)
 *     sub_1800E8240 @ 0x1800E8240 (sub_1800E8240.c)
 *     sub_1800EDDB4 @ 0x1800EDDB4 (sub_1800EDDB4.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 */

__int64 __fastcall sub_1800CD548(_QWORD *a1, __int64 *a2)
{
  sub_1800461B8(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, __int128 *, __int64 *))*a1)(*a1, &xmmword_18015B860, a2);
}

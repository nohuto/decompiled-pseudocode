/*
 * XREFs of sub_180036AC8 @ 0x180036AC8
 * Callers:
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 *     sub_18005EF08 @ 0x18005EF08 (sub_18005EF08.c)
 *     sub_180073104 @ 0x180073104 (sub_180073104.c)
 *     sub_180073300 @ 0x180073300 (sub_180073300.c)
 * Callees:
 *     sub_180009DE0 @ 0x180009DE0 (sub_180009DE0.c)
 *     sub_180036864 @ 0x180036864 (sub_180036864.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     sub_180134C8C @ 0x180134C8C (sub_180134C8C.c)
 *     sub_180135EAC @ 0x180135EAC (sub_180135EAC.c)
 */

char __fastcall sub_180036AC8(__int64 a1)
{
  unsigned __int64 v2; // r8
  char v4; // bl
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]

  if ( *(_DWORD *)(a1 + 192) != 3 && !sub_180009DE0(a1) )
  {
    *(_DWORD *)(a1 + 188) = 1;
    v2 = 0LL;
LABEL_4:
    sub_180036864(a1, 0, v2);
    return 0;
  }
  if ( (unsigned __int8)sub_18006C4AC() && (unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform() )
  {
    v6 = 0;
    v7 = 0;
    *(_DWORD *)(a1 + 188) = 2;
    v5 = 0LL;
    v4 = sub_180135EAC(a1, &v5);
    sub_180134C8C(a1);
    LOBYTE(v2) = v4;
    goto LABEL_4;
  }
  return 1;
}

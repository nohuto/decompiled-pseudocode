/*
 * XREFs of sub_180136264 @ 0x180136264
 * Callers:
 *     sub_180073640 @ 0x180073640 (sub_180073640.c)
 *     sub_180073AF0 @ 0x180073AF0 (sub_180073AF0.c)
 * Callees:
 *     sub_180009DE0 @ 0x180009DE0 (sub_180009DE0.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_18006FC20 @ 0x18006FC20 (sub_18006FC20.c)
 *     sub_1800729C4 @ 0x1800729C4 (sub_1800729C4.c)
 *     sub_180072BB4 @ 0x180072BB4 (sub_180072BB4.c)
 */

char __fastcall sub_180136264(__int64 a1)
{
  char result; // al
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  result = sub_180009DE0(a1);
  if ( !result || *(_BYTE *)(a1 + 264) && *(_BYTE *)(a1 + 265) && *(_BYTE *)(a1 + 208) )
  {
    *(_DWORD *)(a1 + 184) = 8;
    sub_180048790(&v8, a1);
    v3 = sub_180072BB4(&v9, &v8);
    v6 = sub_1800729C4(v5, v4, *(_DWORD *)(a1 + 212), v3);
    if ( v6 < 0 )
      sub_18006D26C((int)retaddr, 2982, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v6);
    sub_18006FC20(&v9);
    return sub_18000F708(&v8);
  }
  return result;
}

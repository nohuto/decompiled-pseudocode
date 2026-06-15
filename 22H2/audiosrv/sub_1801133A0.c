/*
 * XREFs of sub_1801133A0 @ 0x1801133A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180113800 @ 0x180113800 (sub_180113800.c)
 */

__int64 __fastcall sub_1801133A0(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_180113800();
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(_BYTE *)(a1 + 344) = *(_DWORD *)(a1 + 76) == *(_DWORD *)(a1 + 64);
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 700, (int)"avcore\\audiocore\\server\\AudioSrv\\inc\\defaultdevice.h", v2);
    return v3;
  }
}

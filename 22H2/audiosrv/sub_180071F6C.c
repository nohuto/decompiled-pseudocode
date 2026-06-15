/*
 * XREFs of sub_180071F6C @ 0x180071F6C
 * Callers:
 *     sub_180071ABC @ 0x180071ABC (sub_180071ABC.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800BB7C4 @ 0x1800BB7C4 (sub_1800BB7C4.c)
 *     sub_1800C64A4 @ 0x1800C64A4 (sub_1800C64A4.c)
 */

__int64 __fastcall sub_180071F6C(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  sub_1800C64A4(a1 + 16);
  *(_BYTE *)(a1 + 33) = a5;
  *(_DWORD *)(a1 + 36) = a6;
  *(_BYTE *)(a1 + 32) = a4;
  sub_18002A504((void **)(a1 + 24), 0LL);
  v11 = sub_1800BB7C4(v10, v9, a3, a1 + 24);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 19, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\VirtualAudioStream.h", v11);
  return v12;
}

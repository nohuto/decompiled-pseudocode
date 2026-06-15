/*
 * XREFs of sub_1800674C0 @ 0x1800674C0
 * Callers:
 *     sub_1800673C4 @ 0x1800673C4 (sub_1800673C4.c)
 *     sub_18006740C @ 0x18006740C (sub_18006740C.c)
 *     sub_180068C90 @ 0x180068C90 (sub_180068C90.c)
 * Callees:
 *     sub_180034380 @ 0x180034380 (sub_180034380.c)
 *     sub_180063F00 @ 0x180063F00 (sub_180063F00.c)
 *     sub_18006759C @ 0x18006759C (sub_18006759C.c)
 */

__int64 __fastcall sub_1800674C0(volatile signed __int64 *a1, __int64 a2)
{
  volatile signed __int64 v2; // rax
  int v6; // esi
  signed __int64 v7; // rax
  int v8; // ecx
  int v9; // r10d
  unsigned int v10; // r8d
  signed __int64 v11; // rtt
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+3Ch] [rbp+14h]

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v12 = 0;
    v6 = dword_18019E57C;
    if ( !dword_18019E57C )
      v6 = sub_180063F00((__int64)&byte_18019E560);
    sub_18006759C(a1, &v13, &v12);
    v7 = *(_QWORD *)a2;
    do
    {
      v8 = v13;
      v9 = v7;
      *(_QWORD *)a2 = v7;
      if ( (v7 & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v14;
        v9 = ((v12 != 0 ? 8 : 0) | (v7 ^ (v8 ^ v7) & 0x3F000) & 0xFFFFFFF7) ^ ((unsigned __int16)v8 ^ ((v12 != 0 ? 8 : 0) | (unsigned __int16)(v7 ^ (v8 ^ v7) & 0xF000))) & 0x800;
        *(_DWORD *)a2 = v9;
      }
      v10 = ((unsigned int)v7 >> 2) & 1;
      if ( !v10 )
        *(_DWORD *)a2 = v9 ^ ((unsigned __int16)v8 ^ (unsigned __int16)v9) & 0x400 | 4;
      v11 = v7;
      v7 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v7);
    }
    while ( v11 != v7 );
    if ( !v10 )
      sub_180034380((__int64)&byte_18019E560, (volatile signed __int32 *)a1, 1, v6);
  }
  return a2;
}

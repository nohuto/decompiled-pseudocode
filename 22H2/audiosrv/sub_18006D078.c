/*
 * XREFs of sub_18006D078 @ 0x18006D078
 * Callers:
 *     sub_18006CFE4 @ 0x18006CFE4 (sub_18006CFE4.c)
 *     sub_18006D134 @ 0x18006D134 (sub_18006D134.c)
 * Callees:
 *     sub_180033E20 @ 0x180033E20 (sub_180033E20.c)
 *     sub_180034618 @ 0x180034618 (sub_180034618.c)
 *     sub_18006D568 @ 0x18006D568 (sub_18006D568.c)
 */

__int64 __fastcall sub_18006D078(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v9; // rax
  __int64 v10; // xmm0_8
  __int64 v11; // r8
  unsigned int v12; // ebx
  struct _FILETIME pftDueTime[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h] BYREF

  v9 = sub_18006D568(&v16, a1, a5, a6);
  v10 = *(_QWORD *)(v9 + 16);
  *(_OWORD *)&pftDueTime[0].dwLowDateTime = *(_OWORD *)v9;
  v15 = v10;
  sub_180033E20(a2, a5, v11, a1, (struct _FILETIME)pftDueTime);
  v12 = 0;
  if ( a3 )
    sub_180034618();
  LOBYTE(v12) = (_DWORD)v15 == 0;
  return v12;
}

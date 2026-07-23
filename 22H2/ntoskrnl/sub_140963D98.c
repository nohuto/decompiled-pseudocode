/*
 * XREFs of sub_140963D98 @ 0x140963D98
 * Callers:
 *     sub_1405D7628 @ 0x1405D7628 (sub_1405D7628.c)
 * Callees:
 *     ApplyRelocations @ 0x14020050C (ApplyRelocations.c)
 *     ZwFlushInstructionCache @ 0x1403FB740 (ZwFlushInstructionCache.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     sub_1405D7AAC @ 0x1405D7AAC (sub_1405D7AAC.c)
 *     sub_1406670B0 @ 0x1406670B0 (sub_1406670B0.c)
 *     sub_1406671C0 @ 0x1406671C0 (sub_1406671C0.c)
 *     sub_140667CC8 @ 0x140667CC8 (sub_140667CC8.c)
 */

__int64 __fastcall sub_140963D98(__int64 *a1, int a2, _DWORD *a3)
{
  int v6; // edi
  void *v7; // rsi
  _DWORD *v8; // r14
  __int64 v10; // [rsp+38h] [rbp-50h]
  PMDL Mdl[2]; // [rsp+50h] [rbp-38h] BYREF
  char v12; // [rsp+98h] [rbp+10h] BYREF
  void *v13; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0LL;
  Mdl[0] = 0LL;
  v12 = 0;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v7 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v6 = sub_1406670B0(v7, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0);
    if ( v6 >= 0 )
    {
      v6 = sub_1405D7AAC(v7, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, (__int64)Mdl, (__int64)&v13);
      if ( v6 >= 0 )
      {
        v8 = v13;
        if ( !a2
          || (v6 = ApplyRelocations(
                     a1[5],
                     *(_DWORD *)(a1[7] + 48),
                     a1[4],
                     *(_QWORD *)(a1[7] + 56) - a1[4],
                     (__int64)v7,
                     (__int64)v13,
                     a3[2] & 0xFFFFFFF),
              v6 >= 0) )
        {
          memmove(v8, v7, a3[2] & 0xFFFFFFF);
          if ( (*a3 & 2) != 0 || (a3[2] & 0xFFFFFFFu) >= 4 )
          {
            if ( (*a3 & 2) == 0 )
              *v8 = a3[3];
            v6 = sub_1406671C0(
                   0,
                   v8,
                   (char *)v8,
                   a3[2] & 0xFFFFFFF,
                   (__int64 *)(a1[7] + 72),
                   a3[1] & 0xFFFFFFF,
                   (__int128 *)(a1[7] + 80),
                   v10,
                   &v12);
            if ( v6 >= 0 )
            {
              if ( !a2
                || (v6 = ApplyRelocations(
                           a1[5],
                           *(_DWORD *)(a1[7] + 48),
                           a1[4],
                           a1[4] - *(_QWORD *)(a1[7] + 56),
                           (__int64)v7,
                           (__int64)v8,
                           a3[2] & 0xFFFFFFF),
                    v6 >= 0) )
              {
                v6 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7, a3[2] & 0xFFFFFFF);
              }
            }
          }
          else
          {
            v6 = -1073741811;
          }
        }
      }
    }
  }
  sub_140667CC8(Mdl[0]);
  return (unsigned int)v6;
}

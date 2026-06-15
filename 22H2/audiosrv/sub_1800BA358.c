/*
 * XREFs of sub_1800BA358 @ 0x1800BA358
 * Callers:
 *     sub_1800B8EE4 @ 0x1800B8EE4 (sub_1800B8EE4.c)
 *     sub_1800C430C @ 0x1800C430C (sub_1800C430C.c)
 * Callees:
 *     sub_18004BE0C @ 0x18004BE0C (sub_18004BE0C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BA358(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  __int64 v10; // rsi
  __int64 v11; // r9
  char v15; // bl
  int v16; // edi
  char v17; // cl
  int v18; // eax
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v20 = a4;
  v10 = a8;
  LOBYTE(v20) = 0;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(a8 + 2 * v11) );
  v15 = 1;
  if ( qword_18019E3C8 && (v16 = qword_18019E3C8(a8 + 2 * v11, 2048 - v11, &v20), v16 < 0) )
  {
    v17 = 1;
  }
  else
  {
    v17 = 0;
    v16 = -2147024322;
  }
  v18 = a7;
  if ( !a10 && !v17 )
    v18 = 3;
  if ( (_BYTE)v20 )
    v15 = 5;
  sub_18004BE0C(a1, a2, a3, 0, 0LL, a6, v18, v16, v10, v15);
  return (unsigned int)v16;
}

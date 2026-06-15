/*
 * XREFs of sub_18011A840 @ 0x18011A840
 * Callers:
 *     sub_18004AA1C @ 0x18004AA1C (sub_18004AA1C.c)
 * Callees:
 *     sub_18004B400 @ 0x18004B400 (sub_18004B400.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

char __fastcall sub_18011A840(__int64 a1, int a2, _QWORD *a3, unsigned __int16 *a4)
{
  __int64 v6; // r14
  __int64 *v7; // r14
  int i; // ebp
  int **v9; // rax
  int *v10; // rbx
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rsi

  v6 = 232LL;
  if ( a2 != 3 )
    v6 = 224LL;
  v7 = (__int64 *)(a1 + v6);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(*v7 + 8) )
      return 0;
    v9 = (int **)sub_18004B9B4(*v7, i);
    v10 = *v9;
    v11 = *(_QWORD *)*v9 - *a3;
    if ( !v11 )
      v11 = *((_QWORD *)v10 + 1) - a3[1];
    if ( !v11 )
    {
      v12 = 0;
      if ( v10[10] > 0 )
        break;
    }
LABEL_14:
    ;
  }
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 < 0 || v12 >= v10[10] )
    {
      sub_1800BB2C8(0xC000008C);
      __debugbreak();
    }
    if ( (unsigned int)sub_18004B400(a4, *(unsigned __int16 **)(v13 + *((_QWORD *)v10 + 4))) )
      return 1;
    ++v12;
    v13 += 8LL;
    if ( v12 >= v10[10] )
      goto LABEL_14;
  }
}

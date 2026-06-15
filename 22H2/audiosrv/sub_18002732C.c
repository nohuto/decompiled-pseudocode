/*
 * XREFs of sub_18002732C @ 0x18002732C
 * Callers:
 *     sub_180020B94 @ 0x180020B94 (sub_180020B94.c)
 *     sub_1800272C0 @ 0x1800272C0 (sub_1800272C0.c)
 *     sub_18011D640 @ 0x18011D640 (sub_18011D640.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180067BDC @ 0x180067BDC (sub_180067BDC.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

__int64 __fastcall sub_18002732C(__int64 a1, __int64 a2, int a3)
{
  int i; // edi
  __int64 *v6; // rax
  int v7; // edi
  __int64 v8; // r10
  int v9; // ecx
  __int64 v10; // r9
  __int64 v12; // rdx
  int j; // ebp
  __int64 *v14; // rax
  _QWORD *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    sub_1800230F0(a1);
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    {
      for ( j = 0; j < *(_DWORD *)(*(_QWORD *)sub_180023320(a1 + 32, i) + 8LL); ++j )
      {
        v14 = (__int64 *)sub_180023320(a1 + 32, i);
        v15 = (_QWORD *)sub_180023320(*v14, j);
        if ( (unsigned int)sub_180022EE0((__int64 *)a2, v15) == -1 )
        {
          v16 = (__int64 *)sub_180023320(a1 + 32, i);
          v17 = sub_180023320(*v16, j);
          if ( !(unsigned int)sub_1800273F8(a2, v17) )
          {
            v12 = 584LL;
            goto LABEL_18;
          }
        }
      }
    }
    v6 = *(__int64 **)(a1 + 16);
    if ( v6 )
    {
      v7 = 0;
      if ( *((int *)v6 + 2) > 0 )
      {
        while ( 1 )
        {
          if ( v7 < 0 || v7 >= *((_DWORD *)v6 + 2) )
          {
            sub_1800BB2C8(3221225612LL);
            __debugbreak();
          }
          v8 = *v6;
          v9 = 0;
          v10 = 16LL * v7;
          if ( *(int *)(a2 + 8) > 0 )
          {
            while ( 1 )
            {
              v18 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v9);
              v19 = *v18 - *(_QWORD *)(v10 + v8);
              if ( *v18 == *(_QWORD *)(v10 + v8) )
                v19 = v18[1] - *(_QWORD *)(v10 + v8 + 8);
              if ( !v19 )
                break;
              if ( ++v9 >= *(_DWORD *)(a2 + 8) )
                goto LABEL_9;
            }
          }
          else
          {
LABEL_9:
            v9 = -1;
          }
          if ( v9 == -1 )
          {
            if ( v7 >= *((_DWORD *)v6 + 2) )
            {
              sub_1800BB2C8(3221225612LL);
              __debugbreak();
            }
            if ( !(unsigned int)sub_1800273F8(a2, v10 + *v6) )
              break;
          }
          v6 = *(__int64 **)(a1 + 16);
          if ( ++v7 >= *((_DWORD *)v6 + 2) )
            return 0LL;
        }
        v12 = 596LL;
        goto LABEL_18;
      }
    }
    return 0LL;
  }
  sub_180067BDC(a2, a1);
  if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)(a1 + 8) )
    return 0LL;
  v12 = 570LL;
LABEL_18:
  sub_18004BD84(retaddr, v12, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
  return 2147942414LL;
}

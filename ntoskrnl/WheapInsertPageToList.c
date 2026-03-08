/*
 * XREFs of WheapInsertPageToList @ 0x140610044
 * Callers:
 *     WheaPersistBadPageToRegistry @ 0x14060FBA0 (WheaPersistBadPageToRegistry.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     WheapFormatBadPageList @ 0x14060FF08 (WheapFormatBadPageList.c)
 */

char __fastcall WheapInsertPageToList(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  __int64 v3; // r9
  unsigned int v6; // ecx
  __int64 v7; // rax
  char v8; // r11
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned __int64 *v13; // rbx

  v3 = *a3;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != 1 )
    {
      v6 = 0;
      v7 = 0LL;
      v8 = 1;
      while ( 1 )
      {
        v9 = *(_QWORD *)(a1 + 8 * v7);
        v10 = (unsigned int)(v7 + 1);
        if ( v9 >= *(_QWORD *)(a1 + 8 * v10) )
          break;
        if ( v9 == a2 )
          return 0;
        v11 = v7 + 1;
        if ( v9 >= a2 )
          v11 = v6;
        v6 = v11;
        v7 = (unsigned int)v10;
        if ( (unsigned int)v10 >= (int)v3 - 1 )
          goto LABEL_18;
      }
      v8 = 0;
LABEL_18:
      *a3 = v3 + 1;
      if ( v8 )
      {
        v13 = (unsigned __int64 *)(a1 + 8LL * v6);
        memmove((void *)(a1 + 8LL * (v6 + 1)), v13, 8LL * ((unsigned int)v3 - v6));
        *v13 = a2;
      }
      else
      {
        *(_QWORD *)(a1 + 8 * v3) = a2;
        WheapFormatBadPageList((char *)a1, v3 + 1, a3);
      }
      return 1;
    }
    if ( a2 > *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = a2;
      goto LABEL_3;
    }
    if ( a2 >= *(_QWORD *)a1 )
      return 0;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  }
  *(_QWORD *)a1 = a2;
LABEL_3:
  *a3 = v3 + 1;
  return 1;
}

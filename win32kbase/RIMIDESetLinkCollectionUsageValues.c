/*
 * XREFs of RIMIDESetLinkCollectionUsageValues @ 0x1C01C5080
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C01C39C8 (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     rimHidP_SetUsageValue @ 0x1C01B2248 (rimHidP_SetUsageValue.c)
 *     rimHidP_SetUsages @ 0x1C01B22FC (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMIDESetLinkCollectionUsageValues(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // ebx
  int *v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r12
  int v14; // r13d
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  unsigned __int16 *v18; // rbx
  unsigned int v20[4]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v21[16]; // [rsp+50h] [rbp-C8h] BYREF

  memset(v21, 0, 0x78uLL);
  v8 = *(_QWORD *)(a1 + 456);
  v9 = 0LL;
  v20[0] = 1;
  v10 = 0;
  v11 = (int *)(a3 + 4);
  v12 = *(_QWORD *)(v8 + 24);
  v13 = *(_QWORD *)(v8 + 16);
  v14 = *(unsigned __int16 *)(v8 + 44);
  do
  {
    if ( (int)rimHidP_SetUsageValue(
                0LL,
                *((unsigned __int16 *)v11 - 2),
                a4,
                *((unsigned __int16 *)v11 - 1),
                *v11,
                v13,
                v12,
                v14) < 0 )
    {
      if ( *v11 == 1 )
      {
        if ( (unsigned int)v9 >= 0xA )
          return 0LL;
        v15 = 3 * v9;
        v16 = v11[1];
        v9 = (unsigned int)(v9 + 1);
        *(_QWORD *)((char *)v21 + 4 * v15) = *(_QWORD *)(v11 - 1);
        *((_DWORD *)&v21[1] + v15) = v16;
      }
      else if ( *v11 )
      {
        return 0LL;
      }
    }
    ++v10;
    v11 += 3;
  }
  while ( !v10 );
  if ( (unsigned int)v9 <= 0xA )
  {
    v17 = 0LL;
    if ( (_DWORD)v9 )
    {
      v18 = (unsigned __int16 *)v21;
      do
      {
        if ( v20[0] <= 1 )
        {
          if ( (int)rimHidP_SetUsages(0LL, *v18, a4, (__int64)v21 + 12 * v17 + 2, (__int64)v20, v13, v12, v14) < 0 )
            return 0LL;
          if ( a5 && *v18 == 13 && v18[1] == 66 )
            ++*a5;
        }
        v17 = (unsigned int)(v17 + 1);
        v18 += 6;
      }
      while ( (unsigned int)v17 < (unsigned int)v9 );
    }
  }
  return 1LL;
}

/*
 * XREFs of WmipIsEqualInstanceSets @ 0x1407FB788
 * Callers:
 *     WmipUpdateModifyGuid @ 0x1407FB638 (WmipUpdateModifyGuid.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipIsEqualInstanceSets(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned __int16 *v3; // rax
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int16 *v10; // rcx
  __int64 v11; // r11
  int v12; // r10d
  int v13; // edx

  v2 = *(_DWORD *)(a1 + 16);
  if ( ((*(_DWORD *)(a2 + 16) ^ v2) & 0xFFFF9FFF) != 0 )
    return 0;
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 2) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 72);
      if ( v6 != *(_DWORD *)(a2 + 72) )
        return 0;
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *(_QWORD *)(a2 + 88);
        v9 = *(_QWORD *)(a1 + 88);
        while ( 1 )
        {
          v10 = *(unsigned __int16 **)(v9 + 8 * v7);
          v11 = *(_QWORD *)(v8 + 8 * v7) - (_QWORD)v10;
          do
          {
            v12 = *(unsigned __int16 *)((char *)v10 + v11);
            v13 = *v10 - v12;
            if ( v13 )
              break;
            ++v10;
          }
          while ( v12 );
          if ( v13 )
            break;
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= v6 )
            return 1;
        }
        return 0;
      }
    }
    return 1;
  }
  if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)(a2 + 72) )
  {
    v3 = (unsigned __int16 *)(*(_QWORD *)(a1 + 88) + 4LL);
    while ( *v3++ )
      ;
    return 1;
  }
  return 0;
}

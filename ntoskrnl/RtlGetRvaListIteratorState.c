/*
 * XREFs of RtlGetRvaListIteratorState @ 0x14076FCD8
 * Callers:
 *     RtlEnumRvaListFirst @ 0x14076FC8C (RtlEnumRvaListFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetRvaListIteratorState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  int v4; // ebx
  unsigned int v5; // edx
  __int64 v6; // r11
  __int64 v7; // rax
  int v8; // eax
  unsigned int *v10; // rax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 <= 1 )
  {
    if ( v2 == 1 )
    {
      v10 = *(unsigned int **)(a1 + 48);
      if ( v10 )
        return *v10;
      else
        return 1;
    }
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 4) * v2;
    v5 = 0;
    v6 = 0LL;
    do
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 40), v4 + v5) )
      {
        v7 = *(_QWORD *)(a1 + 48);
        if ( v7 )
          v8 = *(_DWORD *)(v6 + v7);
        else
          v8 = 1 << v5;
        v3 |= v8;
      }
      ++v5;
      v6 += 4LL;
    }
    while ( v5 < v2 );
  }
  return v3;
}

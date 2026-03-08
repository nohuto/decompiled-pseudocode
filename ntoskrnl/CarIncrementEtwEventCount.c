/*
 * XREFs of CarIncrementEtwEventCount @ 0x1405D0D5C
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x1405D078C (CarEtwWriteBugCheckEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CarIncrementEtwEventCount(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v3; // ebx
  unsigned __int16 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned int v6; // r11d
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  __int16 v11; // r9
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // ax

  v1 = a1 + 88;
  v3 = 0;
  v4 = 1;
  if ( a1 != -88 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(v1 + 2 * v5) );
    v6 = 0;
    if ( v5 )
    {
      v7 = 0LL;
      do
      {
        v8 = *(unsigned __int16 *)(v1 + 2 * v7);
        v7 = ++v6;
        v3 = v8 + 65599 * v3;
      }
      while ( v6 < v5 );
    }
  }
  v9 = v3 % 0xFB;
  v10 = CarEtwEventBook;
  v11 = *((_WORD *)CarEtwEventBook + 4 * v9 + 2);
  if ( v11 )
  {
    if ( *((_DWORD *)CarEtwEventBook + 2 * v9) != *(_DWORD *)(a1 + 1120) || v11 == -1 )
    {
      v13 = *((_WORD *)CarEtwEventBook + 4 * v9 + 3);
      if ( v13 != 0xFFFF )
        *((_WORD *)CarEtwEventBook + 4 * v9 + 3) = ++v13;
      return v13;
    }
    else
    {
      v12 = v11 + 1;
      *((_WORD *)CarEtwEventBook + 4 * v9 + 2) = v12;
      return v12;
    }
  }
  else
  {
    *((_WORD *)CarEtwEventBook + 4 * v9 + 2) = 1;
    v10[2 * v9] = *(_DWORD *)(a1 + 1120);
  }
  return v4;
}

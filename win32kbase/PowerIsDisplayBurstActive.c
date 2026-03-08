/*
 * XREFs of PowerIsDisplayBurstActive @ 0x1C015B940
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1C00ABE40 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PowerIsDisplayBurstActive(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r8
  __int64 v6; // rcx
  unsigned __int128 v7; // rax
  __int64 result; // rax
  int v9; // ecx
  __int64 v10; // rcx

  v5 = (_QWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
  v6 = v5[383];
  v7 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  if ( v6 && (unsigned __int64)(*((_QWORD *)&v7 + 1) - v6) <= 0x7D0 )
  {
    result = 1LL;
    v9 = 25;
  }
  else
  {
    v10 = v5[382];
    if ( v10 && (unsigned __int64)(*((_QWORD *)&v7 + 1) - v10) <= 0x1388 )
    {
      result = 1LL;
      v9 = 5;
    }
    else
    {
      *(_QWORD *)&v7 = v5[381];
      if ( (_QWORD)v7 && *((_QWORD *)&v7 + 1) - (_QWORD)v7 <= 0x61A8uLL )
      {
        result = 1LL;
        v9 = 6;
      }
      else
      {
        result = 0LL;
        v9 = 0;
      }
    }
  }
  if ( a1 )
    *a1 = v9;
  return result;
}

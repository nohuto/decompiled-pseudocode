/*
 * XREFs of HmgMarkUnXferable @ 0x1C0186000
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

__int64 __fastcall HmgMarkUnXferable(unsigned int a1, char a2)
{
  unsigned int v3; // esi
  __int16 v4; // ebx^2
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v8 = 0LL;
  v9 = 0;
  v4 = HIWORD(a1);
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v8, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 1, 0);
  if ( v9 )
  {
    v5 = v8;
    if ( *(_BYTE *)(v8 + 14) == a2 && *(_WORD *)(v8 + 12) == v4 )
    {
      v6 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE;
      if ( v6 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        *(_BYTE *)(v5 + 15) &= ~0x20u;
        v3 = 1;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
    if ( v9 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
  }
  return v3;
}

/*
 * XREFs of HandleAsyncResizeComplete @ 0x1C01F3408
 * Callers:
 *     NtUserLayoutCompleted @ 0x1C0098EE0 (NtUserLayoutCompleted.c)
 * Callees:
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 */

__int64 __fastcall HandleAsyncResizeComplete(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = a1[2];
  v2 = *(_QWORD *)(result + 672);
  if ( v2 && *(_QWORD **)(v2 + 16) == a1 )
  {
    FindTimer(a1, (void *)0xFFF2, 2u, 1, 0LL);
    result = *(_DWORD *)(v2 + 200) & 0x40080000;
    if ( (_DWORD)result == 1074266112 )
    {
      *(_DWORD *)(v2 + 200) &= ~0x40000000u;
      return GenerateMouseMove(0LL);
    }
  }
  return result;
}

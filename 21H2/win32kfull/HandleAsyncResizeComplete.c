/*
 * XREFs of HandleAsyncResizeComplete @ 0x1C0211088
 * Callers:
 *     NtUserLayoutCompleted @ 0x1C011C5D0 (NtUserLayoutCompleted.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 */

__int64 __fastcall HandleAsyncResizeComplete(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(result + 672);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 16) == a1 )
    {
      result = FindTimer(a1, 65522LL, 2u, 1, 0LL);
      if ( (*(_DWORD *)(v2 + 196) & 0x100000) != 0 )
      {
        result = *(unsigned int *)(v2 + 200);
        if ( (result & 1) != 0 )
        {
          *(_DWORD *)(v2 + 200) = result & 0xFFFFFFFE;
          return GenerateMouseMove(0LL);
        }
      }
    }
  }
  return result;
}

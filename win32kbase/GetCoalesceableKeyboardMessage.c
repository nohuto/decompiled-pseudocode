__int64 __fastcall GetCoalesceableKeyboardMessage(int a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  __int64 result; // rax

  if ( ((a1 - 256) & 0xFFFFFFFB) != 0 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  if ( *(_DWORD *)(a4 + 24) != a1 )
    return 0LL;
  if ( *(_QWORD *)(a4 + 32) != a2 )
    return 0LL;
  v4 = *a3 >> 16;
  if ( *(_WORD *)(a4 + 42) != (_WORD)v4 )
    return 0LL;
  result = a4;
  *a3 = ((unsigned __int64)(unsigned __int16)v4 << 16) | (unsigned __int16)(*(_WORD *)(a4 + 40) + 1);
  return result;
}

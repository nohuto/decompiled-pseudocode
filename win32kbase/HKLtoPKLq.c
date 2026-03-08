/*
 * XREFs of HKLtoPKLq @ 0x1C0085E24
 * Callers:
 *     NtUserGetInputLocaleInfo @ 0x1C0085CC0 (NtUserGetInputLocaleInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HKLtoPKLq(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 440);
  result = 0LL;
  if ( !v2 )
    return result;
  v4 = *(_QWORD *)(a1 + 440);
  if ( !a2 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v4 + 24);
      if ( (*(_DWORD *)(v4 + 32) & 0x20000000) == 0 )
        break;
      if ( v4 == v2 )
        return result;
    }
    return v4;
  }
  if ( a2 == 1 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v4 + 16);
      if ( (*(_DWORD *)(v4 + 32) & 0x20000000) == 0 )
        break;
      if ( v4 == v2 )
        return result;
    }
    return v4;
  }
  if ( (a2 & 0xFFFF0000) != 0 )
  {
    do
    {
      if ( *(_DWORD *)(v4 + 40) == (_DWORD)a2 )
      {
        result = v4;
        if ( *(int *)(v4 + 32) >= 0 )
          break;
      }
      v4 = *(_QWORD *)(v4 + 16);
    }
    while ( v4 != v2 );
  }
  else
  {
    do
    {
      if ( *(_WORD *)(v4 + 40) == (_WORD)a2 )
      {
        result = v4;
        if ( *(int *)(v4 + 32) >= 0 )
          break;
      }
      v4 = *(_QWORD *)(v4 + 16);
    }
    while ( v4 != v2 );
  }
  return result;
}

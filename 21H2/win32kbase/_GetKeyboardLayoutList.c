/*
 * XREFs of _GetKeyboardLayoutList @ 0x1C004FD7C
 * Callers:
 *     NtUserGetKeyboardLayoutList @ 0x1C004FCF0 (NtUserGetKeyboardLayoutList.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C004FF1C (ApiSetEditionGetProcessWindowStation.c)
 */

__int64 __fastcall GetKeyboardLayoutList(int a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 ProcessWindowStation; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // ecx

  v4 = 0;
  ProcessWindowStation = ApiSetEditionGetProcessWindowStation();
  if ( ProcessWindowStation )
    v6 = *(_QWORD *)(ProcessWindowStation + 72);
  else
    v6 = gspklWinstaLessSessionLayouts;
  if ( !v6 )
    return 0LL;
  v7 = v6;
  if ( a1 )
  {
    do
    {
      if ( (*(_DWORD *)(v6 + 32) & 0x20000000) == 0 )
      {
        if ( !a1-- )
          return v4;
        ++v4;
        *a2++ = *(_QWORD *)(v6 + 40);
      }
      v6 = *(_QWORD *)(v6 + 16);
    }
    while ( v6 != v7 );
  }
  else
  {
    do
    {
      v8 = v4 + 1;
      if ( (*(_DWORD *)(v6 + 32) & 0x20000000) != 0 )
        v8 = v4;
      v4 = v8;
      v6 = *(_QWORD *)(v6 + 16);
    }
    while ( v6 != v7 );
  }
  return v4;
}

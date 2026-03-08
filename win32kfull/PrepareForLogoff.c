/*
 * XREFs of PrepareForLogoff @ 0x1C00EEDCC
 * Callers:
 *     NtUserPrepareForLogoff @ 0x1C00EED90 (NtUserPrepareForLogoff.c)
 * Callees:
 *     RegisterPerUserKeyboardIndicators @ 0x1C00EEE88 (RegisterPerUserKeyboardIndicators.c)
 */

__int64 PrepareForLogoff()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 760LL) + 24LL) & 0x80u) != 0 )
  {
    return 0LL;
  }
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == (HANDLE)gpidLogon && !gProtocolType )
  {
    v0 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 656LL);
    if ( v0 )
    {
      if ( *(_DWORD *)(v0 + 184) || *(_DWORD *)(v0 + 188) )
      {
        v3 = 0LL;
        v4 = 0LL;
        v1 = CreateProfileUserName(&v3);
        RegisterPerUserKeyboardIndicators(v1);
        FreeProfileUserName(v1, &v3);
      }
    }
  }
  return 1LL;
}

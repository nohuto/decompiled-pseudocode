/*
 * XREFs of PrepareForLogoff @ 0x1C011D19C
 * Callers:
 *     NtUserPrepareForLogoff @ 0x1C011D160 (NtUserPrepareForLogoff.c)
 * Callees:
 *     RegisterPerUserKeyboardIndicators @ 0x1C011D258 (RegisterPerUserKeyboardIndicators.c)
 */

__int64 PrepareForLogoff()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 0x80u) != 0 )
  {
    return 0LL;
  }
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == (HANDLE)gpidLogon && !gProtocolType )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 664LL);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 184) || *(_DWORD *)(v2 + 188) )
      {
        v5 = 0LL;
        v6 = 0LL;
        v3 = CreateProfileUserName(&v5, 0LL, v0, v1);
        RegisterPerUserKeyboardIndicators(v3);
        FreeProfileUserName(v3, &v5);
      }
    }
  }
  return 1LL;
}

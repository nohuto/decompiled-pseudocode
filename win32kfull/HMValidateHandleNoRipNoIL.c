/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x1C024E6D8
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01FD7B8 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 *v4; // r14
  __int16 v5; // ax

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v3 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1;
    v4 = (__int64 *)HMPkheFromPhe(v3);
    v5 = WORD1(a1) & 0x7FFF;
    if ( ((WORD1(a1) & 0x7FFF) == *(_WORD *)(v3 + 26) || v5 == 0x7FFF
                                                      || !v5 && PsGetCurrentProcessWow64Process(0x7FFFLL))
      && (*(_BYTE *)(v3 + 25) & 1) == 0
      && *(_BYTE *)(v3 + 24) == 11 )
    {
      v2 = *v4;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v2;
  return v2;
}

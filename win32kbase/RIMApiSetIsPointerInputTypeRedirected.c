/*
 * XREFs of RIMApiSetIsPointerInputTypeRedirected @ 0x1C01D1624
 * Callers:
 *     RIMUpdatePrimaryDevice @ 0x1C01BA144 (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01D5A04 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMApiSetIsPointerInputTypeRedirected(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = 1;
  if ( (_DWORD)a1 == 2 )
  {
    v4 = 0;
    if ( *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 528) )
    {
      v9 = *(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 532);
LABEL_7:
      LOBYTE(v4) = v9 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
    }
  }
  else if ( (_DWORD)a1 == 3 )
  {
    v4 = 0;
    if ( *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 536) )
    {
      v9 = *(_DWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 540);
      goto LABEL_7;
    }
  }
  return v4;
}

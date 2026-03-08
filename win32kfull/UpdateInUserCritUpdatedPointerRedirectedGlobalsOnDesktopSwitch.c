/*
 * XREFs of UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch @ 0x1C001FFC4
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1C0020078 (UpdatePointerRedirIsAlive.c)
 */

__int64 UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch()
{
  unsigned int v0; // edi
  __int64 v1; // rcx
  __int64 *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // ebx

  UpdatePointerRedirIsAlive(*(_QWORD *)(grpdeskRitInput + 8LL));
  v0 = 0;
  v1 = grpdeskRitInput;
  v2 = (__int64 *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 216LL);
  do
  {
    v3 = *v2;
    v4 = SGDGetUserSessionState(v1);
    if ( v0 )
    {
      if ( v3 )
      {
        *(_DWORD *)(v4 + 536) = 1;
        v9 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL);
        v10 = *(_DWORD *)(v9 + 56);
        result = SGDGetUserSessionState(v9);
        *(_DWORD *)(result + 540) = v10;
      }
      else
      {
        *(_DWORD *)(v4 + 536) = 0;
        result = SGDGetUserSessionState(v5);
        *(_DWORD *)(result + 540) = 0;
      }
    }
    else if ( v3 )
    {
      *(_DWORD *)(v4 + 528) = 1;
      v7 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL);
      v8 = *(_DWORD *)(v7 + 56);
      result = SGDGetUserSessionState(v7);
      *(_DWORD *)(result + 532) = v8;
    }
    else
    {
      *(_DWORD *)(v4 + 528) = 0;
      result = SGDGetUserSessionState(v5);
      *(_DWORD *)(result + 532) = 0;
    }
    ++v0;
    ++v2;
  }
  while ( v0 < 2 );
  return result;
}

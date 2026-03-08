/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C020E594
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C007EE00 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C00F33A0 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C00F3574 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  char v5; // bp
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // rax

  v4 = a2;
  v5 = a1;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4) + 3464;
  _InterlockedExchange64((volatile __int64 *)(v6 + 112), KeQueryPerformanceCounter(0LL).QuadPart);
  if ( (*(_BYTE *)(SGDGetUserSessionState(v8, v7, v9, v10) + 13996) & 4) != 0
    || (*(_BYTE *)(SGDGetUserSessionState(v12, v11, v13, v14) + 13996) & 0x10) != 0
    || (*(_BYTE *)(SGDGetUserSessionState(v12, v11, v13, v14) + 14014) & 0x40) != 0
    || (*(_BYTE *)(SGDGetUserSessionState(v12, v11, v13, v14) + 14015) & 1) != 0 )
  {
    if ( !*(_DWORD *)(v6 + 124) )
    {
      _InterlockedExchange64((volatile __int64 *)(v6 + 96), 0LL);
      _InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL);
      v16 = SGDGetUserSessionState(v12, v11, v13, v14);
      _InterlockedExchange64((volatile __int64 *)(v16 + 16472), 0LL);
      _InterlockedExchange64((volatile __int64 *)(v16 + 16480), 0LL);
    }
    v15 = 1;
  }
  else
  {
    LOBYTE(v11) = v4;
    LOBYTE(v12) = v5;
    v15 = 0;
    if ( CPTPProcessor::IsOurKey(v12, v11, v13, v14) )
      CPTPProcessor::OnKeyPress(v4);
  }
  *(_DWORD *)(v6 + 124) = v15;
}

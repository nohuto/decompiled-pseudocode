/*
 * XREFs of ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00D0F44
 * Callers:
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C009EC08 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WantImeWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // r8
  __int16 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8

  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x2000000) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 18LL) & 4) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL);
  v4 = *(_WORD *)(gpsi + 898LL);
  if ( *(_WORD *)v3 == v4 )
    return 0LL;
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
    return 0LL;
  v5 = *((_QWORD *)a2 + 3);
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 40);
  if ( !v6 || (*(_DWORD *)(v6 + 64) & 4) != 0 )
    return 0LL;
  while ( a1 && v5 == *((_QWORD *)a1 + 3) )
  {
    if ( a1 == *(struct tagWND **)(v5 + 104) )
      return 0LL;
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
    if ( *(_WORD *)v7 == v4 || (*(_BYTE *)(v7 + 10) & 1) != 0 )
      return 0LL;
    a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
  }
  return 1LL;
}

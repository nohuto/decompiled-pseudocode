/*
 * XREFs of ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EBEC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C006A7C8 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C01EBE44 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1C01EC010 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 */

__int64 __fastcall NlsCodeInputToggleProc(struct tagKE *a1, __int64 a2)
{
  unsigned __int8 CurrentInputMode; // al
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( *((__int16 *)a1 + 1) < 0 )
    return 0LL;
  CurrentInputMode = NlsGetCurrentInputMode(&byte_1C0266898);
  v5 = CurrentInputMode;
  *((_WORD *)a1 + 1) &= 0x8F00u;
  LOBYTE(v6) = CurrentInputMode;
  NlsClearKeyStateToggle(v6, v7, v8, v9);
  if ( v5 == 250 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80FAu,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xFBu;
  }
  else if ( v5 == 251 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80FBu,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xFAu;
  }
  return 1LL;
}

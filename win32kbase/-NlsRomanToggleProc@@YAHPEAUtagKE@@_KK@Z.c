/*
 * XREFs of ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C760
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C021C084 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1C021C250 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 */

__int64 __fastcall NlsRomanToggleProc(struct tagKE *a1, __int64 a2)
{
  unsigned __int8 CurrentInputMode; // al
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( *((__int16 *)a1 + 1) < 0 )
    return 0LL;
  CurrentInputMode = NlsGetCurrentInputMode((unsigned __int8 *)&byte_1C02A5830);
  v5 = CurrentInputMode;
  *((_WORD *)a1 + 1) &= 0x8F00u;
  LOBYTE(v6) = CurrentInputMode;
  NlsClearKeyStateToggle(v6, v7, v8, v9);
  if ( v5 == 245 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80F5u,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF6u;
  }
  else if ( v5 == 246 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80F6u,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF5u;
  }
  return 1LL;
}

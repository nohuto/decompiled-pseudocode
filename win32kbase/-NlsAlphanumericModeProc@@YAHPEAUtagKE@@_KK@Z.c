/*
 * XREFs of ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021BF70
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C021C084 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1C021C250 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C021C97C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C021C9E0 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsAlphanumericModeProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentInputMode; // al
  __int16 v10; // bx

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  if ( !(unsigned int)NlsTestKeyStateToggle(0xF0u) )
  {
    CurrentInputMode = NlsGetCurrentInputMode(&byte_1C02A582C);
    v10 = CurrentInputMode;
    NlsClearKeyStateToggle(CurrentInputMode);
    xxxKeyEventEx(
      (unsigned __int16)(*((_WORD *)a1 + 1) | v10) | 0x8000u,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      (unsigned __int16)(*((_WORD *)a1 + 8) + 3) <= 1u,
      0,
      0LL,
      0LL);
  }
  *((_WORD *)a1 + 1) |= 0xF0u;
  if ( !*(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 13940) )
  {
    if ( (unsigned int)NlsTestKeyStateToggle(0x15u) )
      NlsKbdSendIMEProc(1LL, 2LL);
  }
  return 1LL;
}

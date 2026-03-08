/*
 * XREFs of ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C360
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C021C084 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1C021C250 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C021C97C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C021C9E0 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsHiraganaModeProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentInputMode; // al
  __int16 v10; // bx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  if ( !(unsigned int)NlsTestKeyStateToggle(0xF2u) )
  {
    CurrentInputMode = NlsGetCurrentInputMode((unsigned __int8 *)&byte_1C02A582C);
    v10 = CurrentInputMode;
    LOBYTE(v11) = CurrentInputMode;
    NlsClearKeyStateToggle(v11, v12, v13, v14);
    xxxKeyEventEx(
      (unsigned __int16)(*((_WORD *)a1 + 1) | v10) | 0x8000u,
      *(unsigned __int8 *)a1,
      *((unsigned int *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
  }
  *((_WORD *)a1 + 1) |= 0xF2u;
  if ( !*(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 13940) && !(unsigned int)NlsTestKeyStateToggle(0x15u) )
    NlsKbdSendIMEProc(0LL, 0LL);
  return 1LL;
}

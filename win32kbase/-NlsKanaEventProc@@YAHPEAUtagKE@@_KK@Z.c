/*
 * XREFs of ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C021C97C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C021C9E0 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsKanaEventProc(struct tagKE *a1, __int64 a2, unsigned __int8 a3)
{
  __int16 v3; // dx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = a3 | *((_WORD *)a1 + 1) & 0x8F00;
  *((_WORD *)a1 + 1) = v3;
  if ( v3 >= 0 )
  {
    if ( (unsigned int)NlsTestKeyStateToggle(0x15u) )
    {
      v4 = 0LL;
      v5 = 0LL;
    }
    else
    {
      v4 = 2LL;
      v5 = 1LL;
    }
    NlsKbdSendIMEProc(v5, v4);
  }
  return 1LL;
}

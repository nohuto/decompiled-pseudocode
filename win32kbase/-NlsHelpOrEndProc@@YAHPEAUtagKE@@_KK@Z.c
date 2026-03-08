/*
 * XREFs of ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C021C97C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsHelpOrEndProc(struct tagKE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // ax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int16 v11; // cx
  __int16 v12; // cx
  int v13; // eax

  v4 = *((_WORD *)a1 + 1);
  if ( (v4 & 0x800) == 0 )
  {
    *((_WORD *)a1 + 1) = v4 & 0x8F00;
    if ( (*(_BYTE *)(SGDGetUserSessionState(36608LL, a2, a3, a4) + 13989) & 1) == 0 )
    {
      *((_WORD *)a1 + 1) |= (*(_BYTE *)(SGDGetUserSessionState(v7, v6, v8, v9) + 13989) & 2) != 0 ? 35 : 47;
      return 1LL;
    }
    if ( (*(_BYTE *)(SGDGetUserSessionState(v7, v6, v8, v9) + 13989) & 2) != 0 )
    {
      v10 = NlsTestKeyStateToggle(0x15u);
      v11 = *((_WORD *)a1 + 1);
      if ( !v10 )
      {
LABEL_6:
        v12 = v11 | 0x23;
LABEL_9:
        *((_WORD *)a1 + 1) = v12;
        return 1LL;
      }
    }
    else
    {
      v13 = NlsTestKeyStateToggle(0x15u);
      v11 = *((_WORD *)a1 + 1);
      if ( v13 )
        goto LABEL_6;
    }
    v12 = v11 | 0x2F;
    goto LABEL_9;
  }
  return 1LL;
}

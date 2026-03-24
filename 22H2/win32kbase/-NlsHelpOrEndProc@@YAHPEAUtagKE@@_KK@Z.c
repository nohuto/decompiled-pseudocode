/*
 * XREFs of ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01AB6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C01ABE2C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsHelpOrEndProc(struct tagKE *a1)
{
  __int16 v1; // r8
  __int16 v2; // r8
  unsigned __int8 v3; // al
  int v4; // eax
  __int16 v5; // r8
  __int64 v6; // r9
  __int16 v7; // r8
  __int64 v8; // r9
  __int16 v9; // r8

  v1 = *((_WORD *)a1 + 1);
  if ( (v1 & 0x800) == 0 )
  {
    v2 = v1 & 0x8F00;
    v3 = fNlsKbdConfiguration;
    *((_WORD *)a1 + 1) = v2;
    if ( (v3 & 1) != 0 )
    {
      if ( (v3 & 2) != 0 )
      {
        v4 = NlsTestKeyStateToggle(0x15u);
        *(_WORD *)(v6 + 2) = v5 | (v4 != 0 ? 47 : 35);
      }
      else
      {
        if ( (unsigned int)NlsTestKeyStateToggle(0x15u) )
          v9 = v7 | 0x23;
        else
          v9 = v7 | 0x2F;
        *(_WORD *)(v8 + 2) = v9;
      }
    }
    else
    {
      *((_WORD *)a1 + 1) = v2 | ((v3 & 2) != 0 ? 35 : 47);
    }
  }
  return 1LL;
}

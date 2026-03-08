/*
 * XREFs of TtmiUpdateActiveTerminalCount @ 0x1409A1DF0
 * Callers:
 *     TtmInitCurrentSession @ 0x1409A0FC0 (TtmInitCurrentSession.c)
 *     TtmiCreateTerminal @ 0x1409A7DD8 (TtmiCreateTerminal.c)
 *     TtmiSessionTerminalListWorker @ 0x1409A82BC (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall TtmiUpdateActiveTerminalCount(_DWORD *a1, char a2, int a3)
{
  int v3; // eax
  char v4; // r9
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax

  v3 = a1[19];
  v4 = 0;
  if ( a2 )
  {
    v8 = v3 + 1;
    a1[19] = v8;
    if ( v8 == 1 )
    {
      v9 = a1[1] & 0xFFFFFFDF;
      a1[3] = a3;
      v7 = v9 | 0x10;
      goto LABEL_6;
    }
  }
  else
  {
    v5 = v3 - 1;
    a1[19] = v5;
    if ( !v5 )
    {
      v6 = a1[1] & 0xFFFFFFEF;
      a1[4] = a3;
      v7 = v6 | 0x20;
LABEL_6:
      v4 = 1;
      a1[1] = v7;
    }
  }
  return v4;
}

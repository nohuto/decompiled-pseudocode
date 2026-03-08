/*
 * XREFs of FreeMessageList @ 0x1C00D33C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x1C0011A90 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0011C00 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D34C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

void __fastcall FreeMessageList(struct tagQMSG **a1)
{
  struct tagQMSG *i; // rbx
  struct tagQMSG *v3; // rsi
  struct tagQMSG *v4; // rbx

  for ( i = *a1; i; i = *a1 )
  {
    CleanEventMessage(i);
    DelQEntry((__int64)a1, (__int64)i, 1);
  }
  v3 = a1[3];
  if ( v3 )
  {
    do
    {
      v4 = (struct tagQMSG *)*((_QWORD *)v3 + 1);
      RemoveQMsgFromDeferList((struct tagMLIST *)a1, v3);
      CleanEventMessage(v3);
      FreeQEntry(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}

/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C010C53C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0002004 (xxxSetModernAppWindow.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C010C5A4 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

void __fastcall xxxDeliverRestoreFocusMessage(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  struct tagQ **v2; // rdi

  v1 = a1;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) < 0 )
    v1 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1400LL);
  if ( v1 )
  {
    v2 = (struct tagQ **)*((_QWORD *)v1 + 2);
    if ( v2[54] == (struct tagQ *)gpqForeground )
    {
      if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(v1) )
      {
        if ( v2 == (struct tagQ **)gptiCurrent )
          xxxSendMessage((ULONG_PTR)v1);
        else
          PostEventMessageEx((struct tagTHREADINFO *)v2, v2[54], 0x1Du, v1, 0, 0LL, 0LL, 0LL);
      }
    }
  }
}

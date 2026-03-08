/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0099940
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000E204 (xxxSetModernAppWindow.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00999A8 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

void __fastcall xxxDeliverRestoreFocusMessage(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  struct tagQ **v2; // rdi

  v1 = a1;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) < 0 )
    v1 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1440LL);
  if ( v1 )
  {
    v2 = (struct tagQ **)*((_QWORD *)v1 + 2);
    if ( v2[54] == (struct tagQ *)gpqForeground )
    {
      if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(v1) )
      {
        if ( v2 == (struct tagQ **)gptiCurrent )
          xxxSendMessage(v1, 0x2FBu);
        else
          PostEventMessageEx((struct tagTHREADINFO *)v2, v2[54], 0x1Du, v1, 0, 0LL, 0LL, 0LL);
      }
    }
  }
}

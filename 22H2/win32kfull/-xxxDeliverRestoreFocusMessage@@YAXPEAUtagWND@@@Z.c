/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0041E8C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000EF44 (xxxSetModernAppWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0041EF4 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
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
          xxxSendMessage(v1, 763LL, 0LL, 0LL);
        else
          PostEventMessageEx((struct tagTHREADINFO *)v2, v2[54], 0x1Du, v1, 0, 0LL, 0LL, 0LL);
      }
    }
  }
}

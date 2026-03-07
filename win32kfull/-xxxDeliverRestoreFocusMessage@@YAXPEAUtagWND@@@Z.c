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

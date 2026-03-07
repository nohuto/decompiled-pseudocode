void __fastcall TooltipDismiss::DismissTooltips(TooltipDismiss *this)
{
  struct tagTOOLTIPENTRY *i; // rbx
  unsigned __int64 v2; // rax
  struct tagTOOLTIPENTRY *v3; // rbx
  struct tagTOOLTIPENTRY *v4; // rcx

  for ( i = gTooltipRegisteredList; i; i = (struct tagTOOLTIPENTRY *)*((_QWORD *)i + 1) )
  {
    v2 = HMValidateHandleNoSecure(*(_QWORD *)i, 1);
    if ( v2 )
      PostMessage(v2, 0x345u, 0LL, 0LL);
  }
  v3 = gTooltipRegisteredList;
  while ( v3 )
  {
    v4 = v3;
    v3 = (struct tagTOOLTIPENTRY *)*((_QWORD *)v3 + 1);
    Win32FreePool(v4);
  }
  gTooltipRegisteredList = 0LL;
}

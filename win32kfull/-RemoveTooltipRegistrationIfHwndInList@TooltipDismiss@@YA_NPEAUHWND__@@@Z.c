char __fastcall TooltipDismiss::RemoveTooltipRegistrationIfHwndInList(TooltipDismiss *this, HWND a2)
{
  struct tagTOOLTIPENTRY *v3; // rdx
  struct tagTOOLTIPENTRY *i; // rcx

  v3 = 0LL;
  for ( i = gTooltipRegisteredList; ; i = (struct tagTOOLTIPENTRY *)*((_QWORD *)i + 1) )
  {
    if ( !i )
      return 0;
    if ( this == *(TooltipDismiss **)i )
      break;
    v3 = i;
  }
  if ( v3 )
    *((_QWORD *)v3 + 1) = *((_QWORD *)i + 1);
  else
    gTooltipRegisteredList = (struct tagTOOLTIPENTRY *)*((_QWORD *)i + 1);
  Win32FreePool(i);
  return 1;
}

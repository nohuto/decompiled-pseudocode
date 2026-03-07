char __fastcall TooltipDismiss::InsertTooltipRegistration(TooltipDismiss *this, HWND a2)
{
  struct tagTOOLTIPENTRY *i; // rax
  __int64 v4; // rax
  struct tagTOOLTIPENTRY *v5; // rcx

  for ( i = gTooltipRegisteredList; ; i = (struct tagTOOLTIPENTRY *)*((_QWORD *)i + 1) )
  {
    if ( !i )
    {
      v4 = Win32AllocPoolZInit(16LL, 1685353557LL);
      v5 = gTooltipRegisteredList;
      gTooltipRegisteredList = (struct tagTOOLTIPENTRY *)v4;
      *(_QWORD *)v4 = this;
      *(_QWORD *)(v4 + 8) = v5;
      return 1;
    }
    if ( this == *(TooltipDismiss **)i )
      break;
  }
  return 0;
}

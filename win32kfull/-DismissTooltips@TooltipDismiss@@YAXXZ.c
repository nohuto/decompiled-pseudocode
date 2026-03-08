/*
 * XREFs of ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x1C0230240
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 */

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

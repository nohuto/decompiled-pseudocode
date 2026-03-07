void __fastcall HideInkCursorProvider::TerminateActiveCommand(
        HideInkCursorProvider *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2,
        __int64 a3,
        __int64 a4)
{
  if ( *((_DWORD *)a2 + 4) == 3 )
    HideInkCursorProvider::DoHideInkCursorStop(this, a2, a3, a4);
}

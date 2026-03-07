void __fastcall InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand **a2,
        __int64 a3,
        __int64 a4)
{
  InkFeedbackProviderBase::RemoveActiveCommand(this, (struct InkFeedbackProviderBase::ActiveCommand ***)*a2, a3, a4);
  if ( *a2 )
    Win32FreePool(*a2);
  *a2 = 0LL;
}

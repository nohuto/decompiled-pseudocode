__int64 __fastcall CTouchProcessor::GetMsgPointerId(CTouchProcessor *this, unsigned __int64 a2)
{
  struct CPointerMsgData *NonConstMsgData; // rax

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, a2);
  if ( NonConstMsgData )
    return *((unsigned __int16 *)NonConstMsgData + 8);
  else
    return 0LL;
}

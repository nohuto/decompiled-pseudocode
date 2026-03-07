void __fastcall CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage(CEtwTraceTranslateMessage *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  v1 = *(_DWORD *)this;
  LOBYTE(v2) = *((_BYTE *)PtiCurrentShared((__int64)this) + 1296);
  EtwTraceEndTranslateMessage(v2, v1);
}

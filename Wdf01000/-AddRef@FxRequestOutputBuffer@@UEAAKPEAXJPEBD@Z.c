__int64 __fastcall FxRequestOutputBuffer::AddRef(FxRequestOutputBuffer *this, void *Tag, int Line, const char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-17]);
  return 2LL;
}

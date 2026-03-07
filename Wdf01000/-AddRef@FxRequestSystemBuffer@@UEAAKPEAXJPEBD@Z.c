__int64 __fastcall FxRequestSystemBuffer::AddRef(
        FxRequestSystemBuffer *this,
        __int64 Tag,
        unsigned __int8 Line,
        const char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-16], Tag, Line);
  return 2LL;
}

__int64 __fastcall FxMemoryObject::AddRef(FxMemoryObject *this, void *Tag, int Line, const char *File)
{
  return FxObject::AddRef((FxMemoryObject *)((char *)this - 104), Tag, Line, File);
}

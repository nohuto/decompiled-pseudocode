WDFMEMORY__ *__fastcall FxMemoryObject::GetHandle(FxMemoryObject *this)
{
  return (WDFMEMORY__ *)FxObject::GetObjectHandleUnchecked((FxMemoryObject *)((char *)this - 104));
}

__int64 __fastcall FxWmiInstanceExternal::SetItem(
        FxWmiInstanceExternal *this,
        unsigned int DataItemId,
        unsigned int InBufferSize,
        void *InBuffer)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v5; // r10
  __int64 (__fastcall *v6)(unsigned __int64); // rax

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  v6 = *(__int64 (__fastcall **)(unsigned __int64))(v5 + 160);
  if ( v6 )
    return v6(ObjectHandleUnchecked);
  else
    return 3221226182LL;
}

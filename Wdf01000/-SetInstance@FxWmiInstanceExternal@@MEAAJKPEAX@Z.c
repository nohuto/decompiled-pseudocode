__int64 __fastcall FxWmiInstanceExternal::SetInstance(
        FxWmiInstanceExternal *this,
        unsigned int InBufferSize,
        void *InBuffer)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v4; // r9
  __int64 (__fastcall *v5)(unsigned __int64); // rax

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  v5 = *(__int64 (__fastcall **)(unsigned __int64))(v4 + 152);
  if ( v5 )
    return v5(ObjectHandleUnchecked);
  else
    return 3221226182LL;
}

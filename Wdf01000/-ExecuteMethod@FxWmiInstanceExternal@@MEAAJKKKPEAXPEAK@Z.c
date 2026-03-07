__int64 __fastcall FxWmiInstanceExternal::ExecuteMethod(
        FxWmiInstanceExternal *this,
        unsigned int MethodId,
        unsigned int InBufferSize,
        unsigned int OutBufferSize)
{
  unsigned __int64 ObjectHandleUnchecked; // r11
  __int64 v5; // r10
  __int64 (__fastcall *v6)(unsigned __int64); // rax

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  v6 = *(__int64 (__fastcall **)(unsigned __int64))(v5 + 168);
  if ( v6 )
    return v6(ObjectHandleUnchecked);
  else
    return 3221226133LL;
}

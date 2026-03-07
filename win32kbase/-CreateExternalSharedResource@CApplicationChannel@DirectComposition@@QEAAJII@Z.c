__int64 __fastcall DirectComposition::CApplicationChannel::CreateExternalSharedResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 result; // rax
  struct DirectComposition::CResourceMarshaler *v7; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v7 = 0LL;
  if ( a3 != 196 && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(a3, 196LL) )
    return 3221225485LL;
  result = CreateSharedResourceObject(a3, &Object);
  if ( (int)result >= 0 )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)Object + 15, 1, 0);
    result = DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
               this,
               (DirectComposition *)a3,
               Object,
               &v7);
    if ( (int)result >= 0 )
      return DirectComposition::CApplicationChannel::RegisterExternalResource(this, v7, a2, a3, 1);
  }
  return result;
}

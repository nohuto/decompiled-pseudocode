unsigned __int64 __fastcall FxGetContextSize(_WDF_OBJECT_ATTRIBUTES *Attributes)
{
  unsigned __int64 result; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // r8

  result = 0LL;
  if ( Attributes )
  {
    ContextTypeInfo = Attributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      result = Attributes->ContextSizeOverride;
      if ( !result )
        return ContextTypeInfo->ContextSize;
    }
  }
  return result;
}

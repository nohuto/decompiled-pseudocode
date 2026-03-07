NTSTATUS __fastcall FxRegKey::_IsStateSeparationRegistryViolation(void *Key, bool *IsViolation)
{
  NTSTATUS result; // eax
  unsigned int size; // [rsp+40h] [rbp+8h] BYREF
  _KEY_HANDLE_TAGS_INFORMATION keyTags; // [rsp+50h] [rbp+18h] BYREF

  keyTags.HandleTags = 0;
  size = 0;
  if ( !Key || !IsViolation )
    return -1073741811;
  result = ZwQueryKey(Key, KeyHandleTagsInformation, &keyTags, 4u, &size);
  if ( result >= 0 )
  {
    if ( size == 4 )
    {
      *IsViolation = (keyTags.HandleTags & 0x1000) == 0;
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}

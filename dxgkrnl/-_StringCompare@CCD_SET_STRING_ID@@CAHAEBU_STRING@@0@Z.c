int __fastcall CCD_SET_STRING_ID::_StringCompare(const struct _STRING *a1, const struct _STRING *a2)
{
  if ( a1->Length < a2->Length )
    return -1;
  if ( a1->Length > a2->Length )
    return 1;
  return memcmp(a1->Buffer, a2->Buffer, a2->Length);
}

__int64 __fastcall Simulator_RemoveNode(__int64 a1)
{
  const UNICODE_STRING *v1; // rdx
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(const UNICODE_STRING **)(a1 + 16);
  DestinationString = 0LL;
  if ( !RtlUnicodeStringToAnsiString(&DestinationString, v1, 1u) )
  {
    GetNameSpaceObject(DestinationString.Buffer);
    RtlFreeAnsiString(&DestinationString);
  }
  return 3221225473LL;
}

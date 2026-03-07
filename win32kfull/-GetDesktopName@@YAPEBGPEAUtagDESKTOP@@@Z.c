const unsigned __int16 *__fastcall GetDesktopName(struct tagDESKTOP *a1)
{
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  ReturnLength = 198;
  if ( !a1 || ObQueryNameString(a1, &s_strName, 0xC6u, &ReturnLength) < 0 )
    return L"null";
  s_strName.Name.Buffer[(unsigned __int64)s_strName.Name.Length >> 1] = 0;
  return s_strName.Name.Buffer;
}

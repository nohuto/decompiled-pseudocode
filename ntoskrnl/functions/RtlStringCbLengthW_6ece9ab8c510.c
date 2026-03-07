NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v4; // r9
  size_t v5; // rax
  NTSTATUS result; // eax

  v3 = cbMax >> 1;
  v4 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF && (v5 = v3) != 0 )
  {
    while ( *psz )
    {
      ++psz;
      if ( !--v5 )
        goto LABEL_6;
    }
    v4 = v3 - v5;
    result = 0;
  }
  else
  {
LABEL_6:
    result = -1073741811;
  }
  if ( pcbLength )
  {
    if ( result < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v4;
  }
  return result;
}

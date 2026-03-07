NTSTATUS __stdcall RtlFindClosestEncodableLength(ULONGLONG SourceLength, PULONGLONG TargetLength)
{
  ULONGLONG v2; // rax
  ULONGLONG v3; // rax

  if ( SourceLength <= 0xFFFFFFFF )
    goto LABEL_12;
  if ( SourceLength > 0xFFFFFFFF00LL )
    goto LABEL_16;
  v2 = SourceLength & 0xFFFFFFFF00LL;
  if ( SourceLength == (SourceLength & 0xFFFFFFFFFFFFFF00uLL) )
    goto LABEL_12;
  SourceLength = v2 + 256;
  *TargetLength = v2 + 256;
  if ( v2 + 256 > 0xFFFFFFFF00LL )
  {
LABEL_16:
    if ( SourceLength > 0xFFFFFFFF0000LL )
      goto LABEL_8;
    v3 = SourceLength & 0xFFFFFFFF0000LL;
    if ( SourceLength == (SourceLength & 0xFFFFFFFFFFFF0000uLL) )
      goto LABEL_12;
    SourceLength = v3 + 0x10000;
    *TargetLength = v3 + 0x10000;
    if ( v3 + 0x10000 > 0xFFFFFFFF0000LL )
    {
LABEL_8:
      if ( SourceLength > 0xFFFFFFFF00000000uLL )
      {
        *TargetLength = 0LL;
        return -1073741823;
      }
      if ( SourceLength != (SourceLength & 0xFFFFFFFF00000000uLL) )
      {
        *TargetLength = (SourceLength & 0xFFFFFFFF00000000uLL) + 0x100000000LL;
        return 0;
      }
LABEL_12:
      *TargetLength = SourceLength;
    }
  }
  return 0;
}

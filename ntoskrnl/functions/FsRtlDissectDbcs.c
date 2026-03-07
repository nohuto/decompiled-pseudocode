void __stdcall FsRtlDissectDbcs(ANSI_STRING *Path, PANSI_STRING FirstName, PANSI_STRING RemainingName)
{
  __int64 v3; // r9
  unsigned int Length; // r8d
  char *Buffer; // r11
  char v8; // di
  __int64 i; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // r8

  v3 = 0LL;
  *(_DWORD *)&FirstName->Length = 0;
  FirstName->Buffer = 0LL;
  *(_DWORD *)&RemainingName->Length = 0;
  RemainingName->Buffer = 0LL;
  Length = Path->Length;
  if ( Path->Length )
  {
    Buffer = Path->Buffer;
    v8 = *Buffer;
    for ( i = *Buffer == 92; (unsigned int)i < Length; LODWORD(i) = i + 1 )
    {
      v10 = (unsigned __int8)Buffer[(unsigned int)i];
      if ( (_BYTE)v10 == 92 )
        break;
      if ( (unsigned __int8)v10 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + v10) )
        LODWORD(i) = i + 1;
    }
    v11 = i - (*Buffer == 92);
    FirstName->Length = v11;
    FirstName->MaximumLength = v11;
    LOBYTE(v3) = v8 == 92;
    FirstName->Buffer = &Buffer[v3];
    if ( (unsigned int)i < Length )
    {
      v12 = Length - i - 1;
      RemainingName->Length = v12;
      RemainingName->Buffer = &Buffer[(unsigned int)(i + 1)];
      RemainingName->MaximumLength = v12;
    }
  }
}

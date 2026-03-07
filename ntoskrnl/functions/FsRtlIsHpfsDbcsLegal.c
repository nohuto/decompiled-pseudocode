BOOLEAN __stdcall FsRtlIsHpfsDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // r10
  char v6; // dl
  bool v7; // zf
  char *Buffer; // rax
  char *v9; // rbx
  STRING v10; // xmm1
  __int16 v11; // ax
  unsigned int v13; // r9d
  __int64 v14; // r8
  STRING RemainingName; // [rsp+20h] [rbp-48h] BYREF
  STRING FirstName; // [rsp+30h] [rbp-38h] BYREF
  ANSI_STRING Path; // [rsp+40h] [rbp-28h] BYREF

  Length = DbcsName->Length;
  if ( !DbcsName->Length )
    return 0;
  if ( WildCardsPermissible )
  {
    if ( Length == 1 )
    {
      v6 = *DbcsName->Buffer;
      if ( v6 == 46 )
        return 1;
      v7 = v6 == 34;
    }
    else
    {
      if ( Length != 2 )
        goto LABEL_12;
      Buffer = DbcsName->Buffer;
      if ( *Buffer == 46 )
      {
        v7 = Buffer[1] == 46;
      }
      else
      {
        if ( *Buffer != 34 )
          goto LABEL_12;
        v7 = Buffer[1] == 34;
      }
    }
    if ( v7 )
      return 1;
  }
LABEL_12:
  v9 = DbcsName->Buffer;
  if ( *v9 == 92 )
  {
    if ( !LeadingBackslashPermissible )
      return 0;
    if ( Length <= 1u )
      return 1;
    ++v9;
    --Length;
    DbcsName->Buffer = v9;
    --DbcsName->MaximumLength;
    DbcsName->Length = Length;
  }
  if ( PathNamePermissible )
  {
    v10 = *DbcsName;
    v11 = _mm_cvtsi128_si32(*(__m128i *)DbcsName);
    FirstName = 0LL;
    RemainingName = v10;
    if ( v11 )
    {
      while ( *(_BYTE *)_mm_srli_si128((__m128i)v10, 8).m128i_i8[0] != 92 )
      {
        Path = v10;
        FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
        Path = FirstName;
        if ( !FsRtlIsHpfsDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
          break;
        if ( !RemainingName.Length )
          return 1;
        v10 = RemainingName;
      }
      return 0;
    }
    return 1;
  }
  if ( Length <= 0xFFu )
  {
    v13 = 0;
    if ( !Length )
      return 1;
    do
    {
      v14 = (unsigned __int8)v9[v13];
      if ( (unsigned __int8)v14 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + v14) )
      {
        if ( v13 == Length - 1 )
          return 0;
        ++v13;
      }
      else if ( (v14 & 0x80u) == 0LL
             && ((WildCardsPermissible != 0 ? 10 : 2) & *((unsigned __int8 *)qword_140017560 + v14)) == 0 )
      {
        return 0;
      }
      ++v13;
    }
    while ( v13 < Length );
    if ( (_BYTE)v14 != 32 && (_BYTE)v14 != 46 )
      return (_BYTE)v14 != 34;
  }
  return 0;
}

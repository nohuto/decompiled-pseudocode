__int64 __fastcall SmKmKeyGenStart(__int64 a1, const struct _UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  __int64 Length; // rbp
  char *NonPaged; // rax
  char *v7; // rsi
  __int64 v8; // r8
  char *i; // rdx
  __int16 v10; // ax

  v2 = 0;
  if ( a2 )
  {
    Length = a2->Length;
    NonPaged = (char *)SSHSupportAllocateNonPaged(Length + 2, 0x474B6D73u);
    v7 = NonPaged;
    if ( NonPaged )
    {
      RtlStringCbCopyUnicodeString(NonPaged, Length + 2, a2);
      v8 = 0x7FFFLL;
      *(_OWORD *)(a1 + 24) = 0LL;
      for ( i = v7; *(_WORD *)i; i += 2 )
      {
        if ( !--v8 )
          return v2;
      }
      if ( a1 != -24 )
      {
        v10 = 2 * (0x7FFF - v8);
        *(_QWORD *)(a1 + 32) = v7;
        *(_WORD *)(a1 + 24) = v10;
        *(_WORD *)(a1 + 26) = v10 + 2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}

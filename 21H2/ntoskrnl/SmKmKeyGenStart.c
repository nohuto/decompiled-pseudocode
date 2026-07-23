/*
 * XREFs of SmKmKeyGenStart @ 0x14092BDD0
 * Callers:
 *     SmcCacheManagerStart @ 0x14092D6A4 (SmcCacheManagerStart.c)
 * Callees:
 *     SSHSupportAllocateNonPaged @ 0x1402483BC (SSHSupportAllocateNonPaged.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14059D96C (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall SmKmKeyGenStart(__int64 a1, const struct _UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  __int64 Length; // rbp
  char *NonPaged; // rax
  char *v7; // rsi
  __int64 v8; // rdx
  char *v9; // rax
  __int16 v10; // cx

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
      v9 = v7;
      do
      {
        if ( !*(_WORD *)v9 )
          break;
        v9 += 2;
        --v8;
      }
      while ( v8 );
      if ( v8 && a1 != -24 )
      {
        v10 = 2 * (v8 != 0 ? 0x7FFF - v8 : 0);
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

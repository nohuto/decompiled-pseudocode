/*
 * XREFs of ??$_Traits_find@U?$char_traits@D@std@@@std@@YA_KQEBD_K101@Z @ 0x1800FD8E4
 * Callers:
 *     sub_1801001C4 @ 0x1801001C4 (sub_1801001C4.c)
 * Callees:
 *     memcmp @ 0x18011E0BE (memcmp.c)
 *     memchr @ 0x18011E0CA (memchr.c)
 */

__int64 __fastcall std::_Traits_find<std::char_traits<char>>(__int64 a1, size_t a2, size_t a3, char *a4, size_t Size)
{
  int v8; // r15d
  const void *v9; // rcx
  size_t v10; // r14
  size_t v11; // r8
  const void *v12; // rbx
  char *v13; // rax
  char *v14; // rbx

  if ( Size <= a2 && a3 <= a2 - Size )
  {
    if ( !Size )
      return a3;
    v8 = *a4;
    v9 = (const void *)(a3 + a1);
    v10 = a2 + a1 - Size;
    v11 = v10 + 1 - (_QWORD)v9;
    while ( 1 )
    {
      v13 = (char *)memchr(v9, v8, v11);
      v14 = v13;
      if ( !v13 )
        break;
      if ( !memcmp(v13, a4, Size) )
        return (__int64)&v14[-a1];
      v12 = v14 + 1;
      v11 = v10 + 1 - (_QWORD)v12;
      v9 = v12;
    }
  }
  return -1LL;
}

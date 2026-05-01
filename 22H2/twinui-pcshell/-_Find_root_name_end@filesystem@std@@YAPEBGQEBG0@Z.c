/*
 * XREFs of ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x1801263B4
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011BAA0 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x180126360 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 * Callees:
 *     ?_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z @ 0x180126848 (-_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z.c)
 */

const unsigned __int16 *__fastcall std::filesystem::_Find_root_name_end(
        std::filesystem *this,
        char *a2,
        const unsigned __int16 *const a3)
{
  signed __int64 v3; // r8
  __int64 v4; // r8
  const unsigned __int16 *v5; // r9
  const unsigned __int16 *result; // rax

  v3 = (a2 - (char *)this) >> 1;
  if ( v3 < 2 )
    return (const unsigned __int16 *)this;
  if ( std::filesystem::_Has_drive_letter_prefix(
         this,
         (const unsigned __int16 *const)a2,
         (const unsigned __int16 *const)v3) )
  {
    return (const unsigned __int16 *)((char *)this + 4);
  }
  if ( *(_WORD *)this != 92 && *(_WORD *)this != 47 )
    return (const unsigned __int16 *)this;
  if ( v4 < 4
    || (result = (const unsigned __int16 *)((char *)this + 6), *((_WORD *)this + 3) != 92) && *result != 47
    || v4 != 4 && (*((_WORD *)this + 4) == 92 || *((_WORD *)this + 4) == 47)
    || (*((_WORD *)this + 1) != 92 && *((_WORD *)this + 1) != 47
     || *((_WORD *)this + 2) != 63 && *((_WORD *)this + 2) != 46)
    && (*((_WORD *)this + 1) != 63 || *((_WORD *)this + 2) != 63) )
  {
    if ( v4 >= 3
      && (*((_WORD *)this + 1) == 92 || *((_WORD *)this + 1) == 47)
      && *((_WORD *)this + 2) != 92
      && *((_WORD *)this + 2) != 47 )
    {
      for ( result = (const unsigned __int16 *)((char *)this + 6); result != v5 && *result != 92 && *result != 47; ++result )
        ;
      return result;
    }
    return (const unsigned __int16 *)this;
  }
  return result;
}

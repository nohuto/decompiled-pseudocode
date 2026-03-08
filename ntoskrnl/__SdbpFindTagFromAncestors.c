/*
 * XREFs of __SdbpFindTagFromAncestors @ 0x140A4F0E8
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 */

__int64 _SdbpFindTagFromAncestors(__int64 a1, ...)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  va_list v4; // rdi
  unsigned __int16 v5; // bx
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  va_list va; // [rsp+58h] [rbp+10h]
  va_list va1; // [rsp+60h] [rbp+18h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v7 = va_arg(va1, _QWORD);
  v1 = v7;
  v3 = 0LL;
  if ( v7 )
  {
    va_copy(v4, va);
    do
    {
      v4 += 8;
      v5 = *(_WORD *)v4;
      v7 = v1 - 1;
      LODWORD(v3) = v5 != 0 ? SdbFindFirstTag(a1, v3, v5) : 0;
      v1 = v7;
    }
    while ( v7 && (_DWORD)v3 );
  }
  return (unsigned int)v3;
}

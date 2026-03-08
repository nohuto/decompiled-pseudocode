/*
 * XREFs of SepConcatenatePrivileges @ 0x140761868
 * Callers:
 *     SeAppendPrivileges @ 0x140761800 (SeAppendPrivileges.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall SepConcatenatePrivileges(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax

  v3 = 0;
  if ( a1 )
  {
    if ( *a1 )
      v3 = 12 * *a1 + 8;
    else
      v3 = 8;
  }
  memmove((char *)a1 + v3, a3 + 2, 12 * *a3);
  result = *a3;
  *a1 += result;
  return result;
}

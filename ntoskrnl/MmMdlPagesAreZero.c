/*
 * XREFs of MmMdlPagesAreZero @ 0x1403CED70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMdlPagesAreZero(__int64 a1)
{
  _QWORD *v1; // r8
  unsigned int v2; // edx
  unsigned __int64 v3; // r9
  __int64 result; // rax

  if ( (*(_WORD *)(a1 + 10) & 0x4002) != 0x4002 )
    return 0LL;
  v1 = (_QWORD *)(a1 + 48);
  v2 = 0;
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  result = 1LL;
  if ( v3 )
  {
    while ( *v1 == qword_140C69390 )
    {
      ++v2;
      ++v1;
      if ( v2 >= v3 )
        return result;
    }
    return 0LL;
  }
  return result;
}

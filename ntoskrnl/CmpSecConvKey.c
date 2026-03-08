/*
 * XREFs of CmpSecConvKey @ 0x1407A5440
 * Callers:
 *     CmpAddSecurityCellToCache @ 0x14071CF00 (CmpAddSecurityCellToCache.c)
 *     CmpFindMatchingDescriptorCell @ 0x1407A5244 (CmpFindMatchingDescriptorCell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSecConvKey(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned int i; // ecx

  result = 0LL;
  for ( i = a1 >> 2; i; --i )
    result = (unsigned int)(*a2++ + __ROL4__(result, 3));
  return result;
}

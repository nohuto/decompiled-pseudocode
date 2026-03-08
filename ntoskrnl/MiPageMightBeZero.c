/*
 * XREFs of MiPageMightBeZero @ 0x14032BE90
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14032D3F0 (MiGetPagePrivilege.c)
 */

__int64 __fastcall MiPageMightBeZero(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v6; // rdi
  __int64 v8; // rax

  v3 = *(_QWORD *)(a2 + 40);
  if ( v3 < 0 )
  {
    if ( (v3 & 0x10000000000LL) == 0 )
    {
      v8 = *(_QWORD *)(a2 + 8);
      if ( v8 >= 0 )
      {
        if ( v8 )
          return 0LL;
      }
    }
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
      return 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
      return 0LL;
    if ( (MiGetPagePrivilege(a2) & 0xFFFFFFFD) != 0 )
      return 0LL;
    v6 = a3 << 25 >> 16;
    if ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
  }
  if ( *(_WORD *)(a2 + 32) == 1 && (*(_BYTE *)(a2 + 34) & 0xC0) == 0x40 )
    return ((unsigned __int8)~*(_BYTE *)(a2 + 35) >> 6) & 1;
  return 0LL;
}

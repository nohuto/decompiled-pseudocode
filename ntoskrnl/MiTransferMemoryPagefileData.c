/*
 * XREFs of MiTransferMemoryPagefileData @ 0x14065E4C8
 * Callers:
 *     MiZeroPageFile @ 0x140617730 (MiZeroPageFile.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 *     MiReadFromMemoryPagefile @ 0x14065E368 (MiReadFromMemoryPagefile.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCopyMemoryPagefileData @ 0x14065D548 (MiCopyMemoryPagefileData.c)
 *     MiFindPageFileMemoryExtent @ 0x14065DAE0 (MiFindPageFileMemoryExtent.c)
 */

_UNKNOWN **__fastcall MiTransferMemoryPagefileData(__int64 a1, __int64 a2, int a3, int a4)
{
  _UNKNOWN **result; // rax
  __int64 v9; // rsi
  _QWORD *v10; // r14
  unsigned int v11; // edi
  __int64 PageFileMemoryExtent; // rax
  unsigned int v13; // ecx
  __int64 v14; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
  {
    v9 = *(_QWORD *)(a2 + 24);
  }
  else
  {
    result = (_UNKNOWN **)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000010u);
    v9 = (__int64)result;
  }
  v10 = (_QWORD *)(a2 + 48);
  v11 = *(_DWORD *)(a2 + 40) >> 12;
  while ( v11 )
  {
    PageFileMemoryExtent = MiFindPageFileMemoryExtent(a1, a3);
    v13 = v11;
    if ( *(_DWORD *)(PageFileMemoryExtent + 28) - a3 + 1 <= v11 )
      v13 = *(_DWORD *)(PageFileMemoryExtent + 28) - a3 + 1;
    v14 = v13;
    result = (_UNKNOWN **)MiCopyMemoryPagefileData(
                            v10,
                            v9,
                            *(_QWORD *)(PageFileMemoryExtent + 32)
                          + (unsigned int)(a3 - *(_DWORD *)(PageFileMemoryExtent + 24)),
                            v13,
                            a4);
    v11 -= v14;
    v10 += v14;
    a3 += v14;
    if ( v9 )
      v9 += v14 << 12;
  }
  return result;
}

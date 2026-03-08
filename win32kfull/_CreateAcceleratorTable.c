/*
 * XREFs of _CreateAcceleratorTable @ 0x1C00E3F94
 * Callers:
 *     NtUserCreateAcceleratorTable @ 0x1C00E3ED0 (NtUserCreateAcceleratorTable.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall CreateAcceleratorTable(void *Src, size_t Size, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax

  v3 = (unsigned int)Size;
  if ( (int)Size + 34 < (unsigned int)Size )
    return 0LL;
  LOBYTE(a3) = 8;
  v5 = HMAllocObject(gptiCurrent, 0LL, a3);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  memmove((void *)(v5 + 28), Src, (unsigned int)v3);
  *(_DWORD *)(v6 + 24) = v3 / 6;
  v7 = 3LL * ((unsigned int)(v3 / 6) - 1);
  *(_BYTE *)(v6 + 2 * v7 + 28) |= 0x80u;
  return v6;
}

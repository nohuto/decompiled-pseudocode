/*
 * XREFs of MiSecureVad @ 0x14061FAD0
 * Callers:
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     MmSecureVirtualMemoryEx @ 0x140620040 (MmSecureVirtualMemoryEx.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiComparePteProtections @ 0x14025B2B8 (MiComparePteProtections.c)
 *     MiAddSecureEntry @ 0x14061FBE0 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiSecureVad(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 *a6)
{
  int v7; // edi
  int v8; // ebx
  __int64 v9; // r9
  int v10; // ebp
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rax

  v7 = (a2 + a3 - 1) | 0xFFF;
  v8 = a2 & 0xFFFFF000;
  v9 = 1LL;
  v10 = a1;
  if ( (a4 & 1) != 0 )
    goto LABEL_5;
  v11 = (a2 + a3 - 1) | 0xFFF;
  v12 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 != 2 )
    v9 = 4LL;
  result = MiComparePteProtections(a1, v12, v11, (_DWORD *)v9, 0);
  if ( (int)result >= 0 )
  {
LABEL_5:
    v14 = MiAddSecureEntry(v10, v8, v7, a4, a5);
    *a6 = v14;
    return v14 == 0 ? 0xC000009A : 0;
  }
  return result;
}

/*
 * XREFs of MiSecureVad @ 0x14076918C
 * Callers:
 *     MmSecureVirtualMemoryEx @ 0x140769030 (MmSecureVirtualMemoryEx.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiComparePteProtections @ 0x1402DE51C (MiComparePteProtections.c)
 *     MiAddSecureEntry @ 0x1407D3424 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiSecureVad(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 *a6)
{
  int v7; // edi
  int v8; // ebx
  int v9; // r9d
  int v10; // ebp
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rax

  v7 = (a2 + a3 - 1) | 0xFFF;
  v8 = a2 & 0xFFFFF000;
  v9 = 1;
  v10 = a1;
  if ( (a4 & 1) != 0 )
    goto LABEL_5;
  v11 = (a2 + a3 - 1) | 0xFFF;
  v12 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 != 2 )
    v9 = 4;
  result = MiComparePteProtections(a1, v12, v11, v9, 0);
  if ( (int)result >= 0 )
  {
LABEL_5:
    v14 = MiAddSecureEntry(v10, v8, v7, a4, a5);
    *a6 = v14;
    return v14 == 0 ? 0xC000009A : 0;
  }
  return result;
}

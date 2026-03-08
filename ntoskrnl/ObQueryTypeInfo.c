/*
 * XREFs of ObQueryTypeInfo @ 0x14071E8D0
 * Callers:
 *     NtQueryObject @ 0x14071EA20 (NtQueryObject.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall ObQueryTypeInfo(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v6; // ebx

  v6 = -1073741820;
  *a4 += ((*(unsigned __int16 *)(a1 + 16) + 9) & 0xFFFFFFF8) + 104;
  if ( a3 >= *a4 )
  {
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 72);
    *(_OWORD *)(a2 + 68) = *(_OWORD *)(a1 + 76);
    *(_DWORD *)(a2 + 84) = *(_DWORD *)(a1 + 92);
    *(_BYTE *)(a2 + 88) = (*(_BYTE *)(a1 + 66) & 8) != 0;
    *(_BYTE *)(a2 + 89) = (*(_BYTE *)(a1 + 66) & 0x10) != 0;
    *(_DWORD *)(a2 + 92) = *(_DWORD *)(a1 + 100);
    *(_DWORD *)(a2 + 96) = *(_DWORD *)(a1 + 104);
    *(_DWORD *)(a2 + 100) = *(_DWORD *)(a1 + 108);
    *(_BYTE *)(a2 + 90) = *(_BYTE *)(a1 + 40);
    v6 = 0;
    *(_BYTE *)(a2 + 91) = 0;
    *(_QWORD *)(a2 + 8) = a2 + 104;
    *(_WORD *)a2 = *(_WORD *)(a1 + 16);
    *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 16) + 2;
    memmove((void *)(a2 + 104), *(const void **)(a1 + 24), *(unsigned __int16 *)(a1 + 16));
    *(_WORD *)(a2 + 2 * ((unsigned __int64)*(unsigned __int16 *)(a1 + 16) >> 1) + 104) = 0;
  }
  return v6;
}

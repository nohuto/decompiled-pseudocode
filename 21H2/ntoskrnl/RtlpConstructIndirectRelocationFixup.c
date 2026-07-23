/*
 * XREFs of RtlpConstructIndirectRelocationFixup @ 0x1405904DC
 * Callers:
 *     RtlApplyIndirectRelocationToPage @ 0x14058FF54 (RtlApplyIndirectRelocationToPage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1405900EC (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlSizeOfRetpolineIndirectFixup @ 0x1405904B8 (RtlSizeOfRetpolineIndirectFixup.c)
 */

__int16 __fastcall RtlpConstructIndirectRelocationFixup(
        int a1,
        _DWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        __int64 a6)
{
  unsigned __int64 v9; // rax
  unsigned __int16 v10; // r8
  int v11; // edx
  int v12; // edx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int16 v15; // ax
  int v16; // r8d
  __int16 result; // ax
  _WORD *v18; // r10

  *(_QWORD *)a6 = 0LL;
  *(_DWORD *)(a6 + 8) = 0;
  *(_WORD *)(a6 + 12) = 0;
  v9 = 0xCCCCCCCCCCCCCCCCuLL;
  if ( (*a4 & 0x1000) != 0 )
    v9 = 0x9090909090909090uLL;
  *(_QWORD *)(a6 + 2) = v9;
  *(_DWORD *)(a6 + 10) = v9;
  v10 = *a4;
  if ( a5 )
  {
    if ( (v10 & 0x4000) != 0 )
      v11 = *(_DWORD *)(a3 + 68);
    else
      v11 = *(_DWORD *)(a3 + 72);
    v12 = *a2 + v11 - (a1 + 5);
    *(_BYTE *)(a6 + 2) = ((v10 & 0x1000) == 0) | 0xE8;
    *(_DWORD *)(a6 + 3) = v12;
  }
  else
  {
    v13 = 0;
    if ( (v10 & 0x2000) != 0 )
    {
      *(_BYTE *)(a6 + 2) = 72;
      v13 = 1;
      v10 = *a4;
    }
    v14 = v13 + 1;
    *(_BYTE *)(v13 + a6 + 2) = -1;
    v15 = *a4 & 0x1000;
    if ( (v10 & 0x4000) != 0 )
    {
      *(_BYTE *)(v14 + a6 + 2) = v15 != 0 ? 21 : 37;
      v16 = a2[1] - (v13 + a1 + 6);
      *(_BYTE *)(v13 + 2 + a6 + 2) = v16;
      *(_BYTE *)(v13 + 3 + a6 + 2) = BYTE1(v16);
      *(_BYTE *)(v13 + 4 + a6 + 2) = BYTE2(v16);
      *(_BYTE *)(v13 + 5 + a6 + 2) = HIBYTE(v16);
    }
    else
    {
      *(_BYTE *)(v14 + a6 + 2) = v15 != 0 ? -48 : -32;
      if ( (*a4 & 0x1000) != 0 )
      {
        *(_BYTE *)(v13 + 2 + a6 + 2) = 15;
        *(_BYTE *)(v13 + 3 + a6 + 2) = 31;
        *(_BYTE *)(v13 + 4 + a6 + 2) = 0;
      }
    }
  }
  result = (1 << RtlSizeOfRetpolineIndirectFixup(a4)) - 1;
  *v18 = result;
  return result;
}

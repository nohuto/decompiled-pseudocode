/*
 * XREFs of RtlpConstructSwitchJumpRelocationFixup @ 0x1406785D4
 * Callers:
 *     RtlApplySwitchJumpRelocationToPage @ 0x140677F60 (RtlApplySwitchJumpRelocationToPage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14067804C (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpConstructSwitchJumpRelocationFixup(
        int a1,
        _DWORD *a2,
        __int64 a3,
        _WORD *a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  __int64 result; // rax
  __int64 v10; // rcx

  v6 = 0LL;
  *(_WORD *)a6 = 0;
  *(_QWORD *)(a6 + 2) = 0xCCCCCCCCCCCCCCCCuLL;
  *(_DWORD *)(a6 + 10) = -858993460;
  v7 = (unsigned __int16)*a4;
  if ( a5 )
  {
    v8 = *a2 + *(_DWORD *)(a3 + 4 * (v7 >> 12) + 4) - (a1 + 5);
    *(_WORD *)a6 = 63;
    *(_BYTE *)(a6 + 4) = BYTE1(v8);
    result = HIWORD(v8);
    *(_BYTE *)(a6 + 3) = v8;
    *(_BYTE *)(a6 + 6) = HIBYTE(v8);
    *(_BYTE *)(a6 + 2) = -24;
    *(_BYTE *)(a6 + 5) = BYTE2(v8);
    *(_BYTE *)(a6 + 7) = -52;
  }
  else
  {
    v10 = 0LL;
    if ( (v7 & 0xF000) >= 0x8000 )
    {
      v6 = 1LL;
      *(_BYTE *)(a6 + 2) = 65;
      v10 = 1LL;
    }
    *(_BYTE *)(v10 + a6 + 2) = -1;
    *(_BYTE *)(v6 + a6 + 3) = (*a4 >> 12) & 7 | 0xE0;
    result = 63LL;
    *(_WORD *)a6 = 63;
  }
  return result;
}

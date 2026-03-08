/*
 * XREFs of EditionGetKeyStateUpdateParamsForRawInput @ 0x1C0011600
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 */

void __fastcall EditionGetKeyStateUpdateParamsForRawInput(__int64 a1, __int64 a2, _BYTE *a3, _DWORD *a4, int *a5)
{
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( (*(_DWORD *)(a1 + 1272) & 0x200000) != 0 && !*(_QWORD *)(a2 + 32) )
  {
    v7 = *(_QWORD *)(a2 + 40);
    LOBYTE(a2) = 18;
    v8 = HMValidateHandleNoRip(v7, a2);
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 32) == 1 )
      {
        *a3 = *(_BYTE *)(v8 + 62);
        *a4 = (*(_WORD *)(v8 + 58) & 1) == 0;
        *a5 = *(_WORD *)(v8 + 58) & 6;
        if ( *a3 == 16 )
          *(_WORD *)(v8 + 58) &= 0xFFF9u;
      }
    }
  }
}

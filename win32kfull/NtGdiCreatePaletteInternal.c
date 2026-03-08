/*
 * XREFs of NtGdiCreatePaletteInternal @ 0x1C00E5480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiCreatePaletteInternal(ULONG64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  ULONG64 v3; // r9
  __int64 *v5; // [rsp+60h] [rbp-18h] BYREF
  int v6; // [rsp+68h] [rbp-10h]

  v2 = 1LL;
  if ( a2 > 0x10000 )
    return 0LL;
  if ( 4 * a2 != -4 )
  {
    v3 = a1 + (int)(4 * a2 + 4);
    if ( v3 > MmUserProbeAddress || v3 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( *(_WORD *)a1 != 768 || !a2 )
    v2 = 0LL;
  if ( v2 )
  {
    v6 = 0;
    v5 = 0LL;
    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v5, 1u, a2, (const unsigned int *)(a1 + 4), 0, 0, 0, 0x500u, 0) )
    {
      v6 = 1;
      v2 = *v5;
    }
    else
    {
      v2 = 0LL;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v5);
  }
  return v2;
}

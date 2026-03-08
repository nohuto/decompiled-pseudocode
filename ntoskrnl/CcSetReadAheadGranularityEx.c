/*
 * XREFs of CcSetReadAheadGranularityEx @ 0x140535520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CcSetReadAheadGranularityEx(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // rax
  int v4; // ecx
  int v5; // eax

  v2 = *(_DWORD **)(a1 + 48);
  if ( a2 )
  {
    v2[1] = a2[1] - 1;
    v3 = v2 + 22;
    v4 = a2[2];
    if ( v4 )
    {
      *v2 |= 0x200000u;
      *v3 = v4;
    }
    if ( *v3 > 0x800000u )
      *v3 = 0x800000;
    v5 = 50;
    if ( a2[3] )
      v5 = a2[3];
    v2[23] = v5;
  }
}

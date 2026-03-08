/*
 * XREFs of TileAV_CY @ 0x1C0260790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TileAV_CY(__int64 a1)
{
  unsigned __int64 v1; // r11
  _BYTE *v2; // r10
  _BYTE *v3; // rbx
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 248);
  v2 = *(_BYTE **)(a1 + 352);
  v3 = *(_BYTE **)(a1 + 360);
  v4 = *(int *)(a1 + 368);
  v5 = v1 + 4LL * *(int *)(a1 + 56);
  v6 = v1 + 4LL * *(int *)(*(_QWORD *)(a1 + 304) + 24LL);
  do
  {
    *v2 = *(_BYTE *)(v6 + 3);
    v7 = v6 + 4;
    v2 += v4;
    v6 = v1;
    if ( v7 < v5 )
      v6 = v7;
  }
  while ( v2 != v3 );
  result = (unsigned int)(*(_DWORD *)(a1 + 256) - 1);
  *(_DWORD *)(a1 + 256) = result;
  if ( (int)result <= 0 )
  {
    *(_QWORD *)(a1 + 248) = *(_QWORD *)(a1 + 32);
    result = *(unsigned int *)(a1 + 40);
    *(_DWORD *)(a1 + 256) = result;
  }
  return result;
}

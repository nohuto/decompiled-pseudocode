/*
 * XREFs of _lambda_adea4d0abd8eda5f6785acddb97df7f7_::operator() @ 0x1C005DF64
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f7___ @ 0x1C005DEE4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_adea4d0abd8eda5f6785acddb97df7f7_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  char result; // al

  v2 = *a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(*a1 + 112);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v2 + 116);
  if ( !*(_BYTE *)(v2 + 145) )
  {
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v2 + 120);
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(v2 + 124);
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(v2 + 128);
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(v2 + 132);
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(v2 + 136);
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(v2 + 140);
  }
  *(_BYTE *)(a2 + 40) = *(_BYTE *)(v2 + 144);
  *(_BYTE *)(a2 + 41) = *(_BYTE *)(v2 + 145);
  result = *(_BYTE *)(v2 + 146);
  *(_BYTE *)(a2 + 42) = result;
  return result;
}

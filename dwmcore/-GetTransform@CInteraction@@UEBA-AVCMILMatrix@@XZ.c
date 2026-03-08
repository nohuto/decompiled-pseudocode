/*
 * XREFs of ?GetTransform@CInteraction@@UEBA?AVCMILMatrix@@XZ @ 0x180106400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetTransform(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  v2 = *(_DWORD *)(a1 + 120);
  v3 = *(_OWORD *)(a1 + 72);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 56);
  v4 = *(_OWORD *)(a1 + 88);
  *(_OWORD *)(a2 + 16) = v3;
  v5 = *(_OWORD *)(a1 + 104);
  *(_OWORD *)(a2 + 32) = v4;
  *(_OWORD *)(a2 + 48) = v5;
  *(_DWORD *)(a2 + 64) = v2;
  return a2;
}

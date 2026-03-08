/*
 * XREFs of ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800E2A1C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowBackgroundTreatment::SetWorldTransform(__int64 a1, __int64 a2, int a3)
{
  _OWORD *v3; // r9
  int v4; // eax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 result; // rax

  v3 = (_OWORD *)(a1 + 160);
  if ( *(_DWORD *)(a1 + 228) == 1 )
  {
    v4 = *(_DWORD *)(a1 + 224);
    v5 = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a1 + 232) = *v3;
    v6 = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a1 + 248) = v5;
    v7 = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(a1 + 264) = v6;
    *(_OWORD *)(a1 + 280) = v7;
    *(_DWORD *)(a1 + 296) = v4;
  }
  *v3 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 64);
  *(_DWORD *)(a1 + 224) = result;
  *(_DWORD *)(a1 + 228) = a3;
  return result;
}

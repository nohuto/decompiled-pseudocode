/*
 * XREFs of DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55___ @ 0x1C006DC28
 * Callers:
 *     ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C03D0AD0 (-StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55_(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a1;
  v3 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}

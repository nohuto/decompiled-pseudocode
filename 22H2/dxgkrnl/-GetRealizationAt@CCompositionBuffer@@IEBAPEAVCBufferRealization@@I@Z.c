/*
 * XREFs of ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x1C00102F4
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0010080 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C007D674 (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C007E5A0 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CBufferRealization *__fastcall CCompositionBuffer::GetRealizationAt(CCompositionBuffer *this, int a2)
{
  __int64 v2; // r8
  _QWORD **v3; // rcx
  int v4; // r9d
  _QWORD *v5; // rax

  v2 = 0LL;
  v3 = (_QWORD **)((char *)this + 256);
  v4 = 0;
  v5 = *v3;
  while ( v5 != v3 )
  {
    if ( v4 == a2 )
      return (struct CBufferRealization *)(v5 - 1);
    v5 = (_QWORD *)*v5;
    ++v4;
  }
  return (struct CBufferRealization *)v2;
}

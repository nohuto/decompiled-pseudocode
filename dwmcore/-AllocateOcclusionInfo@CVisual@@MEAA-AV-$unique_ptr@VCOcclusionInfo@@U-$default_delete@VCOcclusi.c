/*
 * XREFs of ?AllocateOcclusionInfo@CVisual@@MEAA?AV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@AEBVCBackdropVisualImageKey@@@Z @ 0x1800DA5D0
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CVisual::AllocateOcclusionInfo(__int64 a1, _QWORD *a2, __int128 *a3)
{
  HANDLE ProcessHeap; // rax
  char *v6; // rax
  __int128 v7; // xmm0
  void *retaddr; // [rsp+28h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v6 = (char *)HeapAlloc(ProcessHeap, 0, 0x28uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v7 = *a3;
  *(_QWORD *)v6 = &CVisualOcclusionInfo::`vftable';
  *(_OWORD *)(v6 + 8) = v7;
  *a2 = v6;
  return a2;
}

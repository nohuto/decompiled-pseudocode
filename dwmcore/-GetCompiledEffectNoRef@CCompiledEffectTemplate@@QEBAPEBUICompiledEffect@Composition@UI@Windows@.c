/*
 * XREFs of ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18003F68C
 * Callers:
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x18003F4C4 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18003F6F4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     <none>
 */

const struct Windows::UI::Composition::ICompiledEffect *__fastcall CCompiledEffectTemplate::GetCompiledEffectNoRef(
        CCompiledEffectTemplate *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  struct _TP_WORK *v3; // rcx

  v1 = *((_QWORD *)this + 10);
  v2 = 0LL;
  if ( v1 && *(_DWORD *)(v1 + 64) == 3 )
  {
    v3 = *(struct _TP_WORK **)(v1 + 56);
    if ( v3 )
    {
      WaitForThreadpoolWorkCallbacks(v3, 0);
      CloseThreadpoolWork(*(PTP_WORK *)(v1 + 56));
      *(_QWORD *)(v1 + 56) = 0LL;
    }
    return *(const struct Windows::UI::Composition::ICompiledEffect **)(*(_QWORD *)(v1 + 72) + 32LL);
  }
  return (const struct Windows::UI::Composition::ICompiledEffect *)v2;
}

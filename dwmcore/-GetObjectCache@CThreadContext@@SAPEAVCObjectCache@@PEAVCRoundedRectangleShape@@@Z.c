/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRoundedRectangleShape@@@Z @ 0x18007F4B0
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800627D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080580 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800D28F0 (-GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??2CRoundedRectangleShape@@SAPEAX_K@Z @ 0x1800D2C2C (--2CRoundedRectangleShape@@SAPEAX_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800FE0E0 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CRoundedRectangleShape *a1)
{
  char *Value; // rbx
  CThreadContext *v3; // rax
  unsigned int v4; // ecx
  CThreadContext *v5; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Value = (char *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v3 = (CThreadContext *)operator new(0x190uLL);
    if ( !v3 || (v5 = CThreadContext::CThreadContext(v3), (Value = (char *)v5) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v5);
  }
  return (struct CObjectCache *)(Value + 48);
}

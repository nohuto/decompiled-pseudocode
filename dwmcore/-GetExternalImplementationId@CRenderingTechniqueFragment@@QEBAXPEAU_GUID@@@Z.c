/*
 * XREFs of ?GetExternalImplementationId@CRenderingTechniqueFragment@@QEBAXPEAU_GUID@@@Z @ 0x18002A020
 * Callers:
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x180029FE8 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderingTechniqueFragment::GetExternalImplementationId(
        CRenderingTechniqueFragment *this,
        struct _GUID *a2)
{
  __int64 v4; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(__int64, _QWORD, struct _GUID *))(*(_QWORD *)v4 + 64LL))(v4, *((unsigned int *)this + 4), a2);
}

/*
 * XREFs of ??1CVisualReferenceController@@MEAA@XZ @ 0x1800E7B64
 * Callers:
 *     ??_ECVisualReferenceController@@MEAAPEAXI@Z @ 0x1800E7B20 (--_ECVisualReferenceController@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x1800E80F0 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisualReferenceController::~CVisualReferenceController(CVisualReferenceController *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CVisualReferenceController::`vftable';
  CVisualReferenceController::UnRegisterNotifiers(this);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  CResource::~CResource(this);
}

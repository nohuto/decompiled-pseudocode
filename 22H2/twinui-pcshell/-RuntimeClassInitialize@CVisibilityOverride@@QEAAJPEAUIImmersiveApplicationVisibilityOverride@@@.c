/*
 * XREFs of ?RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x1801CBB68
 * Callers:
 *     ??$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x1801CB714 (--$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVis.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisibilityOverride::RuntimeClassInitialize(
        CVisibilityOverride *this,
        struct IImmersiveApplicationVisibilityOverride *a2)
{
  struct IImmersiveApplicationVisibilityOverride *v4; // rcx

  CVisibilityOverride::s_checkOcclusion = GetShellWindow();
  v4 = (struct IImmersiveApplicationVisibilityOverride *)*((_QWORD *)this + 10);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplicationVisibilityOverride *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct IImmersiveApplicationVisibilityOverride *)*((_QWORD *)this + 10);
    }
    *((_QWORD *)this + 10) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct IImmersiveApplicationVisibilityOverride *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return CVisibilityOverride::_SubscribeToWNF(this);
}

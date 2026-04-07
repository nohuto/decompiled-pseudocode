/*
 * XREFs of ??_EAcrylicHostBackdrop@@UEAAPEAXI@Z @ 0x18003F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

CBaseObject **__fastcall AcrylicHostBackdrop::`vector deleting destructor'(CBaseObject **this, char a2)
{
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(this + 2);
  *this = (CBaseObject *)&CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004DA0
 * Callers:
 *     MsixvcAddPackageAsync @ 0x180003FD0 (MsixvcAddPackageAsync.c)
 *     MsixvcUpdatePolicyInternal @ 0x180004100 (MsixvcUpdatePolicyInternal.c)
 *     MsixvcRemediateMutablePackagesForVolumeAsync @ 0x1800047A0 (MsixvcRemediateMutablePackagesForVolumeAsync.c)
 *     MsixvcAddGameToGCS @ 0x1800048A0 (MsixvcAddGameToGCS.c)
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180004D20 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}

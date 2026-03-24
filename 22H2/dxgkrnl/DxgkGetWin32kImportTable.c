/*
 * XREFs of DxgkGetWin32kImportTable @ 0x1C0016CC8
 * Callers:
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x1C0016880 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0017FE0 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     DxgkCreateAllocation @ 0x1C015C590 (DxgkCreateAllocation.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetWin32kImportTable(__int64 a1, __int64 a2)
{
  return *((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 38048);
}

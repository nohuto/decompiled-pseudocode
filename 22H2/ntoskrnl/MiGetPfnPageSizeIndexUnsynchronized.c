/*
 * XREFs of MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6188
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6B0 (MiProbeLeafPteAccess.c)
 *     MiFillSystemPtes @ 0x140226EB0 (MiFillSystemPtes.c)
 *     MiLegitimatePageForDriversToMap @ 0x14028026C (MiLegitimatePageForDriversToMap.c)
 *     MiPfnsWorthTrying @ 0x1402827B0 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x140282D80 (MiActivePageClaimCandidate.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1403F6038 (MiGetPagesRemainingInResidentPage.c)
 *     MiCombineAllPhysicalMemory @ 0x140727470 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x140306A9C (MiUnlockPage.c)
 *     MiGetBaseResidentPage @ 0x1403F5DB4 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6158 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiGetPfnPageSizeIndexUnsynchronized(__int64 a1, int *a2, int *a3, _DWORD *a4)
{
  unsigned int PfnPageSizeIndex; // ebp
  int v5; // esi
  int v6; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r14
  __int64 BaseResidentPage; // rax
  __int64 v15; // r8
  __int64 result; // rax

  PfnPageSizeIndex = -1;
  v5 = *(_BYTE *)(a1 + 34) & 7;
  v6 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (*(_QWORD *)(a1 + 40) & 0x1000000000LL) != 0 )
  {
    v13 = MiLockPageInline(a1, (__int64)a2, (__int64)a3, a4);
    if ( (*(_QWORD *)(a1 + 40) & 0x1000000000LL) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a1, v10, v11, v12);
      v6 = *(unsigned __int8 *)(BaseResidentPage + 34) >> 6;
      v5 = *(_BYTE *)(BaseResidentPage + 34) & 7;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
      if ( v15 != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUnlockPage(a1, v13);
  }
  *a2 = v5;
  result = PfnPageSizeIndex;
  *a3 = v6;
  return result;
}

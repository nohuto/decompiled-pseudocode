/*
 * XREFs of CcUnmapVacb @ 0x140637A98
 * Callers:
 *     CcGetVacbMiss @ 0x140291040 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1402934F0 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB484 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x140275E04 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140275E50 (CcReferenceSharedCacheMapFileObject.c)
 *     MmUnmapViewInSystemCache @ 0x140294160 (MmUnmapViewInSystemCache.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14031195C (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeImage @ 0x14062EBBC (PfCheckDeprioritizeImage.c)
 *     PfCheckDeprioritizeFile @ 0x1406300F8 (PfCheckDeprioritizeFile.c)
 */

void __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  char v4; // bp
  int v8; // eax
  char v9; // r8
  int v10; // esi
  _KPROCESS *Process; // rcx
  unsigned int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // r8

  v4 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
LABEL_19:
    v4 = 1;
    goto LABEL_4;
  }
  v8 = *(_DWORD *)(a2 + 152);
  if ( (v8 & 0x200000) != 0 && (v8 & 0x200) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v12 = *(_DWORD *)(a2 + 512);
    if ( HIDWORD(Process[1].ActiveProcessors.Bitmap[8]) == v12 )
      v13 = (Process[1].DirectoryTableBase & 0x400000000000LL) == 0;
    else
      v13 = !PfCheckDeprioritizeImage(v12);
    if ( v13 )
      goto LABEL_13;
    v14 = CcReferenceSharedCacheMapFileObject(a2);
    v15 = *(_QWORD *)(v14 + 24);
    CcDereferenceSharedCacheMapFileObject(a2, v14);
    v16 = (*(__int64 *)(a2 + 8) >> 12) + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
    if ( v16 >= ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64 )
      v16 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v16 <= 1 )
      LODWORD(v16) = 1;
    if ( !(unsigned int)PfCheckDeprioritizeFile(*(_DWORD *)(a2 + 512), v15, v16) )
    {
LABEL_13:
      CcUpdateSharedCacheMapFlag(a2, 0x200000LL, 0LL, a4);
      goto LABEL_4;
    }
    goto LABEL_19;
  }
LABEL_4:
  v9 = v4 | 2;
  v10 = a3 & 2;
  if ( !v10 )
    v9 = v4;
  MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v9);
  if ( !v10 )
    *(_QWORD *)a1 = 0LL;
}

/*
 * XREFs of ?BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00F7F60
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00F866C (-MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::BeginTemporaryResourceAccess(
        VIDMM_APERTURE_SEGMENT *this,
        void **a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  _QWORD *v9; // rax
  unsigned int v10; // esi
  unsigned __int64 LogicalAddress; // rax
  int v12; // eax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
  }
  v10 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40179LL) && a5 != *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL) )
  {
    LogicalAddress = SysMmGetLogicalAddress(a2[66]);
    if ( LogicalAddress )
      LogicalAddress += a3;
    v12 = SysMmMapIommuRange(
            *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
            LogicalAddress,
            a5,
            0);
    v10 = v12;
    if ( v12 < 0 )
      WdLogSingleEntry1(3LL, v12);
  }
  VIDMM_APERTURE_SEGMENT::MapTemporaryResource(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, a3, a4, a5);
  return v10;
}

/*
 * XREFs of MiApplyImageHotPatch @ 0x140A326C8
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 *     MmUnlockPagableImageSection @ 0x140225D90 (MmUnlockPagableImageSection.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     KeGenericCallDpc @ 0x1403008E0 (KeGenericCallDpc.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     RtlApplyHotPatch @ 0x140AAA600 (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _MDL *v6; // rdi
  PVOID MappedSystemVa; // rsi
  int v8; // r15d
  int v9; // r14d
  void *v10; // r10
  struct _MDL *Mdl; // rax
  char Priority; // [rsp+28h] [rbp-100h]
  int v14; // [rsp+38h] [rbp-F0h]
  int v15; // [rsp+68h] [rbp-C0h]
  int v16; // [rsp+A8h] [rbp-80h]
  __int64 v17; // [rsp+B0h] [rbp-78h]
  __int64 v18; // [rsp+B8h] [rbp-70h]
  int v19; // [rsp+C0h] [rbp-68h]
  _QWORD v20[4]; // [rsp+D0h] [rbp-58h] BYREF
  PVOID v21; // [rsp+F0h] [rbp-38h]
  __int64 v22; // [rsp+F8h] [rbp-30h] BYREF

  v6 = 0LL;
  MappedSystemVa = 0LL;
  v8 = 0;
  v9 = 0;
  v20[0] = a1;
  v20[1] = a2;
  v20[2] = a4;
  v20[3] = a5;
  v22 = *(unsigned int *)(a3 + 16);
  v10 = *(void **)(a3 + 24);
  v21 = v10;
  if ( (*(_DWORD *)(a1 + 140) & 1) != 0 )
  {
    if ( v10 )
    {
      Mdl = IoAllocateMdl(v10, 6 * **(_DWORD **)(a1 + 40), 0, 0, 0LL);
      v6 = Mdl;
      if ( !Mdl
        || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v9 = 1, (v6->MdlFlags & 5) == 0)
          ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(v6, 0, MmCached, 0LL, 0, 0x40000020u))
          : (MappedSystemVa = v6->MappedSystemVa),
            !MappedSystemVa) )
      {
        HIDWORD(v22) = -1073741670;
        goto LABEL_15;
      }
      v21 = MappedSystemVa;
    }
    v8 = 1;
    if ( (MiFlags & 4) == 0 )
      MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
    KeGenericCallDpc((__int64)MiApplyImageHotPatchDpc, (__int64)v20);
  }
  else
  {
    HIDWORD(v22) = RtlApplyHotPatch(
                     *(_QWORD *)(a1 + 72),
                     *(_QWORD *)(a1 + 8),
                     *(_QWORD *)(a1 + 80),
                     *(_DWORD *)(a1 + 36),
                     (__int64)&v22,
                     Priority,
                     0LL,
                     v14,
                     *(_QWORD *)(a2 + 72),
                     *(_QWORD *)(a2 + 8),
                     0LL,
                     0,
                     0LL,
                     v15,
                     a4,
                     a5,
                     1,
                     *(_WORD *)(a1 + 136),
                     *(PRTL_BITMAP *)(a1 + 40),
                     (__int64)v10,
                     0LL,
                     v16,
                     v17,
                     v18,
                     v19);
  }
  *(_DWORD *)(a3 + 16) = v22;
LABEL_15:
  if ( MappedSystemVa )
    MmUnmapLockedPages(MappedSystemVa, v6);
  if ( v6 )
  {
    if ( v9 )
      MmUnlockPages(v6);
    IoFreeMdl(v6);
  }
  if ( v8 && (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  return HIDWORD(v22);
}

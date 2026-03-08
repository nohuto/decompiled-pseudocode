/*
 * XREFs of MmPrepareImagePagesForHotPatch @ 0x140A395A0
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406404D8 (MiPrepareImagePagesForHotPatch.c)
 *     MiImageVadHotPatchEligible @ 0x140768E2C (MiImageVadHotPatchEligible.c)
 *     MiInitializeImageHotPatchContext @ 0x140A34BC4 (MiInitializeImageHotPatchContext.c)
 *     MiReleaseHotPatchResources @ 0x140A39030 (MiReleaseHotPatchResources.c)
 */

__int64 __fastcall MmPrepareImagePagesForHotPatch(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rax
  __int64 v11[18]; // [rsp+20h] [rbp-98h] BYREF
  int v12; // [rsp+D8h] [rbp+20h] BYREF

  v12 = 0;
  memset(v11, 0, sizeof(v11));
  MiInitializeImageHotPatchContext(v11, 0, 0LL);
  v6 = MiObtainReferencedVadEx(a1, 0, &v12);
  v7 = v6;
  if ( !v6 )
  {
    v8 = v12;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v6 + 48) & 0x70) != 0x20 )
  {
LABEL_8:
    v8 = -1073741800;
    goto LABEL_9;
  }
  if ( (unsigned int)MiImageVadHotPatchEligible(v6) )
  {
    if ( (((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) | 0xFFF) >= a1 + (a2 << 12) - 1 )
    {
      MiInitializeImageHotPatchContext(v11, 34404, v7);
      v8 = MiPrepareImagePagesForHotPatch(v11, a1, a2);
      if ( v8 >= 0 )
      {
        v9 = v11[7];
        v11[7] = 0LL;
        v8 = 0;
        *a3 = v9;
      }
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v8 = -1073741637;
LABEL_9:
  MiUnlockAndDereferenceVad((PVOID)v7);
LABEL_11:
  MiReleaseHotPatchResources((__int64)v11);
  return (unsigned int)v8;
}

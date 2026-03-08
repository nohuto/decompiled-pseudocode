/*
 * XREFs of ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C012511C
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00C3E60 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00C3FAC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     UmfdDrvFree @ 0x1C00E3D10 (UmfdDrvFree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0125098 (UmfdTrueTypeFreeGlyphset.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C0308230 (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 *     ??1?$AutoReleasePtr@U_FD_GLYPHSET@@$1?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z@@QEAA@XZ @ 0x1C030838C (--1-$AutoReleasePtr@U_FD_GLYPHSET@@$1-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z@@QEA.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00D9840 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::ReleaseKernelmodeAllocation(char *a1)
{
  char *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbx
  NSInstrumentation::CPointerHashTable *v5; // rcx
  unsigned __int64 v6; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 - 28;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 40);
  v3 = *(_QWORD *)(v2 + 8);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  if ( (*(_DWORD *)v1)-- == 1 )
  {
    v5 = *(NSInstrumentation::CPointerHashTable **)v2;
    if ( *(_QWORD *)v2 )
    {
      v6 = *((_QWORD *)v1 + 2);
      if ( v6 )
      {
        v7 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v5, v6, &v7);
      }
    }
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
    EngFreeMem(v1);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}

/*
 * XREFs of GreSfmGetDirtyRgn @ 0x1C00BC7C8
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C00BC5C0 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C00BC968 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C016988C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmGetDirtyRgn(
        __int64 a1,
        unsigned __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  __int64 v13; // rdx
  struct SFMLOGICALSURFACE *v14; // rax
  unsigned int DirtyRgn; // ebx
  _BYTE v17[32]; // [rsp+50h] [rbp-38h] BYREF
  struct SFMLOGICALSURFACE *v18; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  GreAcquireSemaphoreSharedInternal(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v17);
      v14 = 0LL;
      v18 = 0LL;
      if ( a1 && (LOBYTE(v13) = 18, v14 = (struct SFMLOGICALSURFACE *)HmgShareLockCheck(a1, v13), (v18 = v14) != 0LL) )
      {
        DirtyRgn = GrepSfmGetDirtyRgn(v14, a2, a3, a4, a5, a6, a7, a8, a9);
        v14 = v18;
      }
      else
      {
        DirtyRgn = -1073741816;
      }
      if ( v14 )
        DEC_SHARE_REF_CNT(v14, v13);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
    }
    else
    {
      DirtyRgn = -1071775733;
    }
  }
  else
  {
    DirtyRgn = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return DirtyRgn;
}

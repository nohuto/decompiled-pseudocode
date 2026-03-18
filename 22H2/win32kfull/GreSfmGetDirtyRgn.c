/*
 * XREFs of GreSfmGetDirtyRgn @ 0x1C007E35C
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C007E160 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C007E4F8 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013DFC4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmGetDirtyRgn(
        Gre::Base *a1,
        unsigned __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  struct Gre::Base::SESSION_GLOBALS *v13; // rdi
  __int64 v14; // rdx
  struct SFMLOGICALSURFACE *v15; // rax
  unsigned int DirtyRgn; // ebx
  _BYTE v18[32]; // [rsp+50h] [rbp-38h] BYREF
  struct SFMLOGICALSURFACE *v19; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v13 = Gre::Base::Globals(a1);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v13 + 9));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v13 + 9));
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( (unsigned int)IsDwmActive() )
    {
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v18);
      v15 = 0LL;
      v19 = 0LL;
      if ( a1 && (LOBYTE(v14) = 18, v15 = (struct SFMLOGICALSURFACE *)HmgShareLockCheck(a1, v14), (v19 = v15) != 0LL) )
      {
        DirtyRgn = GrepSfmGetDirtyRgn(v15, a2, a3, a4, a5, a6, a7, a8, a9);
        v15 = v19;
      }
      else
      {
        DirtyRgn = -1073741816;
      }
      if ( v15 )
        DEC_SHARE_REF_CNT(v15);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
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
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v13 + 9));
  return DirtyRgn;
}

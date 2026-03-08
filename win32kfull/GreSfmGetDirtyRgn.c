/*
 * XREFs of GreSfmGetDirtyRgn @ 0x1C002A00C
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C0029E10 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0029AE8 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 */

__int64 __fastcall GreSfmGetDirtyRgn(
        Gre::Base *a1,
        __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  struct Gre::Base::SESSION_GLOBALS *v13; // rsi
  __int64 v14; // rdx
  struct _POINTL *v15; // rbx
  struct _POINTL *v16; // rax
  unsigned int DirtyRgn; // edi

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
      v15 = 0LL;
      if ( a1 && (LOBYTE(v14) = 18, v16 = (struct _POINTL *)HmgShareLockCheck(a1, v14), (v15 = v16) != 0LL) )
      {
        DirtyRgn = GrepSfmGetDirtyRgn(v16, a2, a3, a4, a5, a6, a7, a8, a9);
      }
      else
      {
        DirtyRgn = -1073741816;
        if ( !v15 )
          goto LABEL_11;
      }
      DEC_SHARE_REF_CNT(v15);
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
LABEL_11:
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v13 + 9));
  return DirtyRgn;
}

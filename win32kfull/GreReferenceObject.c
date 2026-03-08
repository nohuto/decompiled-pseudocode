/*
 * XREFs of GreReferenceObject @ 0x1C00D7C78
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0064DB8 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C00D7ACC (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreReferenceObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheck(a1, a2);
  v4 = v2;
  if ( !v2 )
    return 3221225480LL;
  INC_SHARE_REF_CNT(v2);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v4);
  return 0LL;
}

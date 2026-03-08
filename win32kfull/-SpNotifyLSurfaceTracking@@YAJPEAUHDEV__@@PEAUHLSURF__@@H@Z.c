/*
 * XREFs of ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C0268E48
 * Callers:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C001EDD8 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00E61D0 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00284A4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpNotifyLSurfaceTracking(_QWORD *a1, HLSURF a2, int a3)
{
  unsigned int v6; // edi
  HLSURF v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+38h] [rbp-10h]
  int v10; // [rsp+3Ch] [rbp-Ch]
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a1;
  GreAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", a1[6], 11LL);
  if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v11) )
  {
    v10 = 0;
    v8 = a2;
    v9 = a3;
    v6 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, HLSURF *))a1[426])(a1[221], 65544LL, 16LL, &v8);
  }
  else
  {
    v6 = -1073741822;
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
  GreReleaseSemaphoreInternal(a1[6]);
  return v6;
}

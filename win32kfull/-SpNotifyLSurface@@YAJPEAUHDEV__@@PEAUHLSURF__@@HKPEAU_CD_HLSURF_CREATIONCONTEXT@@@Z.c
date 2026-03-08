/*
 * XREFs of ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00283E0
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00272F4 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00286CC (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C00D7A20 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00284A4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpNotifyLSurface(_QWORD *a1, HLSURF a2, int a3, int a4, struct _CD_HLSURF_CREATIONCONTEXT *a5)
{
  __int64 v8; // rbp
  unsigned int v9; // edi
  __int64 v11; // xmm1_8
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-18h]
  _QWORD *v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = a1;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v8 = a3;
  GreAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", a1[6], 11LL);
  if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v15) )
  {
    *(_QWORD *)&v12 = a2;
    DWORD2(v12) = a4;
    if ( a5 )
    {
      v11 = *((_QWORD *)a5 + 2);
      v13 = *(_OWORD *)a5;
      v14 = v11;
    }
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int128 *))a1[426])(
           a1[221],
           65541 - (unsigned int)((_DWORD)v8 != 0),
           40LL,
           &v12);
    EtwBindLogicalSurfaceRHEvent(a2, v8);
  }
  else
  {
    v9 = -1073741822;
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
  GreReleaseSemaphoreInternal(a1[6]);
  return v9;
}

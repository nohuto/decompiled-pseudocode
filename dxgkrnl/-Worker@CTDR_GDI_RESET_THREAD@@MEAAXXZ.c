/*
 * XREFs of ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C030AC50
 * Callers:
 *     <none>
 * Callees:
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C0308DE0 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C030AF10 (TdrBugcheckOnTimeout.c)
 */

void __fastcall CTDR_GDI_RESET_THREAD::Worker(ULONG_PTR *this, __int64 a2, __int64 a3)
{
  int v4; // eax
  _VIDEO_WIN32K_CALLBACKS_PARAMS v5; // [rsp+20h] [rbp-28h] BYREF

  v5.PhysDisp = 0LL;
  v5.Param = 0LL;
  *(_QWORD *)&v5.CalloutType = 10LL;
  v5.Status = -1073741816;
  *(_DWORD *)&v5.LockUserSession = 0;
  v4 = CTDR_GDI_RESET_THREAD::GdiCalloutLoop((CTDR_GDI_RESET_THREAD *)this, &v5, a3);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2143420409 )
    TdrBugcheckOnTimeout(this[3]);
}

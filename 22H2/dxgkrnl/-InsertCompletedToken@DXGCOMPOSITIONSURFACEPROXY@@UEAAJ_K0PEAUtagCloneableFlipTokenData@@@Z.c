/*
 * XREFs of ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C028D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02B8074 (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::InsertCompletedToken(
        DXGCOMPOSITIONSURFACEPROXY *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGSESSIONMGR *v20; // rdi
  __int64 v21; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  DXGSESSIONMGR *v29; // rdi
  unsigned int v30; // eax
  DXGSESSIONDATA *v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  _QWORD *v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  _BYTE v37[40]; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v8) = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2, a3, (__int64)a4);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  if ( *((_DWORD *)Current + 106) && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 488) )
    {
      v8 = -2147483611LL;
      goto LABEL_9;
    }
    v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v15, v14) + 102);
    if ( v20 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v20, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      if ( !*((_DWORD *)this + 5) || !*((_BYTE *)this + 24) || !*((_BYTE *)this + 25) )
      {
        v17 = WdLogNewEntry5_WdWarning(v19, v18, v21);
        v33 = 0LL;
        *(_QWORD *)(v17 + 24) = *((unsigned int *)this + 5);
        v34 = (_QWORD *)(v17 + 32);
        do
        {
          v35 = *((unsigned __int8 *)this + v33++ + 24);
          *v34++ = v35;
        }
        while ( v33 < 2 );
        goto LABEL_25;
      }
      v29 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19, v18) + 102);
      if ( v29 )
      {
        v30 = PsGetCurrentProcessSessionId(v28, v27);
        v31 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v29, v30);
      }
      else
      {
        v31 = 0LL;
      }
      v32 = DXGSESSIONDATA::VailSendEnqueueFlipExToken(v31, *((_DWORD *)this + 5), a2, a3, a4);
      v8 = v32;
      if ( v32 >= 0 )
        goto LABEL_26;
LABEL_9:
      v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = v8;
LABEL_25:
      WdLogEvent5_WdWarning(v17);
      goto LABEL_26;
    }
    LODWORD(v8) = -1073741811;
    v24 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v24 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v26, v25);
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
  }
LABEL_26:
  KeLeaveCriticalRegion();
  if ( v37[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37, v36);
  return (unsigned int)v8;
}

/*
 * XREFs of ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C028DC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1C02B86BC (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedUnBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebp
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGSESSIONMGR *v18; // rbx
  __int64 v19; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  _QWORD *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  _BYTE v31[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int8)a2;
  LODWORD(v6) = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
  if ( *((_DWORD *)Current + 106) && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 488) )
    {
      v6 = -2147483611LL;
      goto LABEL_9;
    }
    v18 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13, v12) + 102);
    if ( v18 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v18, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v25 = *((unsigned int *)this + 5);
      if ( !(_DWORD)v25 || !*((_BYTE *)this + 25) )
      {
        v15 = WdLogNewEntry5_WdWarning(v17, v25, v19);
        v27 = 0LL;
        *(_QWORD *)(v15 + 24) = *((unsigned int *)this + 5);
        v28 = (_QWORD *)(v15 + 32);
        do
        {
          v29 = *((unsigned __int8 *)this + v27++ + 24);
          *v28++ = v29;
        }
        while ( v27 < 2 );
        goto LABEL_21;
      }
      v26 = DXGSESSIONDATA::VailSendUnbindCompositionSurface(SessionDataForSpecifiedSession, v25, v4);
      v6 = v26;
      if ( v26 < 0 )
      {
LABEL_9:
        v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v15 + 24) = v6;
LABEL_21:
        WdLogEvent5_WdWarning(v15);
        goto LABEL_22;
      }
      *((_BYTE *)this + 25) = 0;
    }
    else
    {
      LODWORD(v6) = -1073741811;
      v22 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v22 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v24, v23);
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v22);
    }
  }
LABEL_22:
  KeLeaveCriticalRegion();
  if ( v31[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31, v30);
  return (unsigned int)v6;
}

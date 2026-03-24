/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C016B4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000C598 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C001A8F0 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001A938 (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  unsigned int v13; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  __int64 i; // rsi
  VIDSCH_EXPORT *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGPROCESS *v24; // rax
  __int64 result; // rax
  __int64 v26; // rax

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( Current )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    DxgkLogCodePointPacketForSession(0x73u, CurrentProcessSessionId, 0, 1, 0, 0LL);
    *((_BYTE *)Current + 346) = 1;
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8) + 102);
    if ( v12 )
    {
      v13 = PsGetCurrentProcessSessionId(v11, v10);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, v13);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(SessionDataForSpecifiedSession);
    v17 = 0;
    for ( i = 232LL; ; i += 8LL )
    {
      DXGGLOBAL::GetGlobal(v16, v15);
      if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + i - 232) )
      {
        v19 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal(v16, v15) + i);
        v24 = DXGPROCESS::GetCurrent(v21, v20, v22, v23);
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v19, v24);
        if ( (int)result < 0 )
          break;
      }
      if ( (unsigned int)++v17 >= 2 )
        return 0LL;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v26 + 24) = 3545LL;
    WdLogEvent5_WdError(v26);
    return 3221225473LL;
  }
  return result;
}

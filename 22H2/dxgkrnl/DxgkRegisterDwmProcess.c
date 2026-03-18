/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C01DF3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002C98 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0015014 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001505C (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1)
{
  __int64 v1; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  unsigned int v6; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v8; // esi
  __int64 v9; // rdi
  VIDSCH_EXPORT *v10; // rbx
  __int64 v11; // rcx
  struct DXGPROCESS *v12; // rax
  __int64 result; // rax

  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    DxgkLogCodePointPacketForSession(0x73u, CurrentProcessSessionId, 0, 1, 0, 0LL);
    *((_DWORD *)Current + 106) |= 4u;
    v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v5 )
    {
      v6 = PsGetCurrentProcessSessionId(v4);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, v6);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(SessionDataForSpecifiedSession);
    v8 = 0;
    v9 = 272LL;
    *(_BYTE *)(*((_QWORD *)Current + 8) + 138LL) = 1;
    while ( 1 )
    {
      DXGGLOBAL::GetGlobal();
      if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + v9 - 272) )
      {
        v10 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal() + v9);
        v12 = DXGPROCESS::GetCurrent(v11);
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v10, v12);
        if ( (int)result < 0 )
          break;
      }
      ++v8;
      v9 += 8LL;
      if ( v8 >= 2 )
        return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 3693LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"An attempt was made to register the DWM process for a process that has no DXGPROCESS",
      3693LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  return result;
}

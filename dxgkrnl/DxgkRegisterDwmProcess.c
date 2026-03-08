/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C01D3F70
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002D10 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0014D18 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0014D60 (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v14; // esi
  __int64 v15; // rdi
  VIDSCH_EXPORT *v16; // rbx
  __int64 v17; // rcx
  struct DXGPROCESS *v18; // rax
  __int64 result; // rax

  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2, v1, v4, v5);
    DxgkLogCodePointPacketForSession(0x73u, CurrentProcessSessionId, 0, 1, 0, 0LL);
    *((_DWORD *)Current + 106) |= 4u;
    v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v9 )
    {
      v12 = PsGetCurrentProcessSessionId(v8, v7, v10, v11);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v12);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(SessionDataForSpecifiedSession);
    v14 = 0;
    v15 = 272LL;
    *(_BYTE *)(*((_QWORD *)Current + 8) + 138LL) = 1;
    while ( 1 )
    {
      DXGGLOBAL::GetGlobal();
      if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + v15 - 272) )
      {
        v16 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal() + v15);
        v18 = DXGPROCESS::GetCurrent(v17);
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v16, v18);
        if ( (int)result < 0 )
          break;
      }
      ++v14;
      v15 += 8LL;
      if ( v14 >= 2 )
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

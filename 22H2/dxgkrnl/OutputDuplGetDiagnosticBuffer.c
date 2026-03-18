/*
 * XREFs of OutputDuplGetDiagnosticBuffer @ 0x1C0330A90
 * Callers:
 *     DxgkEscape @ 0x1C01B43F0 (DxgkEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00076C4 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A90A0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01E1158 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01E11B4 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C032C0F0 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDiagnosticBuffer(struct DXGADAPTER *a1, struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2)
{
  struct DXGADAPTER **v4; // rbx
  struct DXGADAPTER **v5; // rax
  int OutputDuplManager; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int DiagnosticBuffer; // edi
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  DXGADAPTER *v14; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  DXGADAPTER *v16; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-10h] BYREF
  OUTPUTDUPL_MGR *v18; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  if ( !a1 || (unsigned int)DxgIsRemoteSessionUsingXddmMonitors((__int64)a1) )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  }
  else
  {
    v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v16);
    v5 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v14);
    OutputDuplManager = FindOutputDuplManager(a1, 0, v5, &v15, v4, &v17, &v18);
    DiagnosticBuffer = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = OutputDuplManager;
      goto LABEL_10;
    }
    RemoteOutputDuplMgr = v18;
  }
  if ( RemoteOutputDuplMgr )
  {
    DiagnosticBuffer = OUTPUTDUPL_MGR::GetDiagnosticBuffer((DXGDIAGNOSTICS **)RemoteOutputDuplMgr, a2);
  }
  else
  {
    DiagnosticBuffer = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = 2943LL;
  }
LABEL_10:
  DXGADAPTER_REFERENCE::Assign(&v14, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v16, 0LL);
  return DiagnosticBuffer;
}

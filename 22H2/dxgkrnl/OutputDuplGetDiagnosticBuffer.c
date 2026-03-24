/*
 * XREFs of OutputDuplGetDiagnosticBuffer @ 0x1C029E468
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000A318 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0123CD0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C014F4D8 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C029A5C8 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDiagnosticBuffer(struct DXGADAPTER *a1, struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2)
{
  struct DXGADAPTER **v4; // rbx
  __int64 v5; // rdx
  struct DXGADAPTER **v6; // rax
  int OutputDuplManager; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int DiagnosticBuffer; // edi
  OUTPUTDUPL_MGR **RemoteOutputDuplMgr; // rax
  DXGADAPTER *v13; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  DXGADAPTER *v15; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-10h] BYREF
  OUTPUTDUPL_MGR *v17; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0LL;
  v13 = 0LL;
  v17 = 0LL;
  if ( a1 )
  {
    v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v15, (__int64)a2);
    v6 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v13, v5);
    OutputDuplManager = FindOutputDuplManager(a1, 0LL, v6, &v14, v4, &v16, &v17);
    DiagnosticBuffer = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = OutputDuplManager;
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = (OUTPUTDUPL_MGR **)v17;
  }
  else
  {
    RemoteOutputDuplMgr = (OUTPUTDUPL_MGR **)FindRemoteOutputDuplMgr(0LL, (__int64)a2);
  }
  if ( RemoteOutputDuplMgr )
  {
    DiagnosticBuffer = OUTPUTDUPL_MGR::GetDiagnosticBuffer(RemoteOutputDuplMgr, a2);
  }
  else
  {
    DiagnosticBuffer = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = 2971LL;
  }
LABEL_9:
  DXGADAPTER_REFERENCE::Assign(&v13, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v15, 0LL);
  return DiagnosticBuffer;
}

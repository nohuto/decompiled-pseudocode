/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01486EC
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C013F8EC (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     DxgkFunctionalizePathsModality @ 0x1C0149A40 (DxgkFunctionalizePathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0172ECC (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02967CC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297518 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C013DE80 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C0144C54 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1C01486C4 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C0148794 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C02EAD78 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C02EB7A0 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Functionalize(CCD_TOPOLOGY *this, unsigned int a2, bool a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned int v11; // ebx
  int active; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  _BYTE v31[64]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v32; // [rsp+60h] [rbp-38h]
  unsigned __int8 v33; // [rsp+B8h] [rbp+20h] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v31, 8u, 0);
  v11 = 0;
  if ( (unsigned int)DxgIsRemoteSession(v7, v6, v8, v9) || (*((_DWORD *)this + 21) & 1) != 0 )
    goto LABEL_5;
  active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)v31, a3);
  v15 = active;
  if ( active < 0 )
    goto LABEL_28;
  if ( active == 255 )
  {
LABEL_5:
    LOBYTE(v10) = a3;
    LODWORD(v15) = CCD_TOPOLOGY::FunctionalizeWorker(this, a2, v10);
LABEL_6:
    v11 = v15;
    goto LABEL_7;
  }
  if ( v32 )
    v17 = *(unsigned __int16 *)(v32 + 20);
  else
    v17 = 0LL;
  v18 = *((_QWORD *)this + 8);
  if ( v18 )
    v19 = *(unsigned __int16 *)(v18 + 20);
  else
    v19 = 0LL;
  if ( (unsigned __int16)v17 <= (unsigned __int16)v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v17, v19);
    WdLogEvent5_WdAssertion(v20);
  }
  LOBYTE(v10) = a3;
  v21 = CCD_TOPOLOGY::FunctionalizeWorker((CCD_TOPOLOGY *)v31, a2, v10);
  v15 = v21;
  if ( v21 < 0 )
    goto LABEL_28;
  v33 = 0;
  CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)v31, &v33);
  if ( !v33 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v23, v22);
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = *((_QWORD *)this + 8);
  v26 = v25 ? *(unsigned __int16 *)(v25 + 20) : 0LL;
  v27 = v32 ? *(unsigned __int16 *)(v32 + 20) : 0LL;
  if ( (_WORD)v26 != (_WORD)v27 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v26, v27);
    WdLogEvent5_WdAssertion(v28);
  }
  v29 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)v31);
  v15 = v29;
  if ( v29 < 0 )
  {
LABEL_28:
    v30 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v30 + 24) = v15;
    WdLogEvent5_WdError(v30);
    goto LABEL_6;
  }
LABEL_7:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v31);
  return v11;
}

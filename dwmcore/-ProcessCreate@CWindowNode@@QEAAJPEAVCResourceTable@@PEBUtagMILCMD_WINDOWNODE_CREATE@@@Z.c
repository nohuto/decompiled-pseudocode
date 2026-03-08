/*
 * XREFs of ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z @ 0x1800AACA0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x1800AAD08 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowNode::ProcessCreate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_CREATE *a3)
{
  struct CProcessAttribution **v3; // rdi
  bool v4; // zf
  int ProcessAttribution; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct CProcessAttribution **)((char *)this + 720);
  v4 = *((_QWORD *)this + 90) == 0LL;
  *((_QWORD *)this + 88) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 89) = *((_QWORD *)a3 + 1);
  if ( !v4 )
    RaiseFailFastException(0LL, 0LL, 0);
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(
                         qword_1803E2C88,
                         *((_DWORD *)a3 + 8),
                         *((_QWORD *)a3 + 3),
                         v3);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr);
  return 0LL;
}

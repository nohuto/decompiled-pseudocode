/*
 * XREFs of ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180099BBC
 * Callers:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x180099B0C (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18009B370 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARG.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800AA714 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800CD0D4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800E5118 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z @ 0x1800EB6E4 (-TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall HANDLE_TABLE::ValidEntry(HANDLE_TABLE *this, unsigned int a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
  {
    if ( a2 < *((_DWORD *)this + 3) )
      return *(_DWORD *)(*((_DWORD *)this + 2) * a2 + *((_QWORD *)this + 3)) != 0;
  }
  return result;
}

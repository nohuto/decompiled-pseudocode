/*
 * XREFs of IsTouchpadDevice @ 0x1C00E8F60
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01C1E20 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01C4EF8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01CEE84 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01F4A2C (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 */

bool __fastcall IsTouchpadDevice(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = HMValidateHandleNoSecure(a1, 19);
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 200) & 0x80u) != 0 )
      {
        v2 = *(_QWORD *)(v1 + 472);
        if ( v2 )
        {
          if ( *(_DWORD *)(v2 + 24) == 7 )
            return 1;
        }
      }
    }
  }
  return result;
}

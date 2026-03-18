/*
 * XREFs of OutputDuplProcessDestroyDevice @ 0x1C018B9A4
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B128 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02ED494 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1C018B9E8 (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A90A0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01E41B4 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall OutputDuplProcessDestroyDevice(struct DXGADAPTER *a1, _QWORD *a2)
{
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax

  if ( !a1 )
    a1 = *(struct DXGADAPTER **)(a2[2] + 16LL);
  IterateOutputDuplMgrsForRender(a1, lambda_916b8cf52c985c2b3c6a9e3c4a47be2a_::_lambda_invoker_cdecl_, a2);
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessDestroyDevice(RemoteOutputDuplMgr, (struct DXGDEVICE *)a2);
}

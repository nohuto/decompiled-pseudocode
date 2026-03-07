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

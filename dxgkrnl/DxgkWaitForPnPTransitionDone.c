__int64 __fastcall DxgkWaitForPnPTransitionDone(KWAIT_REASON a1, KPROCESSOR_MODE a2, unsigned int a3, unsigned int a4)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 118), a1, a2, a3, a4);
}

void __fastcall DXGPROCESS::ReportProcess(DXGPROCESS *this)
{
  __int64 v1; // r8

  v1 = *((unsigned int *)this + 106);
  if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqpppz_EtwWriteTransfer(*((_QWORD *)this + 76), &EventReportDxgProcessVm, v1);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0pxqt_EtwWriteTransfer(*((_QWORD *)this + 8), &EventReportDxgProcess, v1);
  }
}

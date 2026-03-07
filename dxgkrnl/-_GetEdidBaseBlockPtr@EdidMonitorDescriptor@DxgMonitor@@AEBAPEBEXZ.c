const unsigned __int8 *__fastcall DxgMonitor::EdidMonitorDescriptor::_GetEdidBaseBlockPtr(
        DxgMonitor::EdidMonitorDescriptor *this)
{
  __int64 v1; // rax

  v1 = **((_QWORD **)this + 3);
  if ( *(_QWORD *)(v1 + 16) < 0x80uLL )
    return 0LL;
  else
    return (const unsigned __int8 *)(v1 + 24);
}

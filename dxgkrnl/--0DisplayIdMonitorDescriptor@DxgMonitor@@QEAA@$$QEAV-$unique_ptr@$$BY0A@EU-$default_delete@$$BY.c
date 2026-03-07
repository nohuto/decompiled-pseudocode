__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rax
  void *v6; // rcx
  unsigned __int8 *v7; // rdx

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &DxgMonitor::DisplayIdMonitorDescriptor::`vftable';
  v4 = *a2;
  *a2 = 0LL;
  v6 = *(void **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v4;
  if ( v6 )
    operator delete(v6);
  v7 = *(unsigned __int8 **)(a1 + 16);
  *(_DWORD *)(a1 + 8) = a3;
  DisplayID_Initialize((struct DisplayIDObj *)(a1 + 24), v7, a3);
  return a1;
}

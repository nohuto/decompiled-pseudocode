__int64 *__fastcall DxgMonitor::CreateMonitorDriverInterface(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rax

  v9 = operator new[](0x28uLL, 0x4D677844u, 256LL);
  if ( v9 )
  {
    *(_QWORD *)v9 = &KernelDriver::`vftable';
    *(_QWORD *)(v9 + 16) = a5;
    *(_QWORD *)(v9 + 8) = a2;
    *(_QWORD *)(v9 + 24) = a3;
    *(_DWORD *)(v9 + 32) = a4;
  }
  *a1 = v9;
  return a1;
}

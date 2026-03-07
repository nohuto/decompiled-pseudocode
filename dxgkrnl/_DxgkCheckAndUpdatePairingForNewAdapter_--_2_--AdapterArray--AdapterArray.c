__int64 __fastcall DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray(
        __int64 a1,
        unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = a2;
  v4 = 16LL * a2;
  if ( !is_mul_ok(a2, 0x10uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = operator new[](v6, 0x4B677844u, 256LL);
  if ( v7 )
  {
    v8 = v7 + 8;
    *(_QWORD *)v7 = v3;
    `vector constructor iterator'(
      (char *)(v7 + 8),
      16LL,
      (unsigned int)v3,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    *(_QWORD *)(a1 + 8) = v8;
    if ( v8 )
      *(_DWORD *)(a1 + 4) = v3;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return a1;
}

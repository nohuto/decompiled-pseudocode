_QWORD *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetRawDescriptor(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  void *v6; // rbx
  _QWORD *result; // rax

  v6 = (void *)operator new[](*(unsigned int *)(a1 + 8), 0x4D677844u, 256LL);
  if ( v6 )
  {
    *a3 = *(_DWORD *)(a1 + 8);
    memmove(v6, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 8));
  }
  else
  {
    *a3 = 0;
  }
  result = a2;
  *a2 = v6;
  return result;
}

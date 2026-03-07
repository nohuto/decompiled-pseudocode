void __fastcall DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(DXGDEVICESYNCOBJECT *this)
{
  _QWORD *v1; // rbx
  void *v2; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  ULONG_PTR v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = (_QWORD *)((char *)this + 56);
  v2 = (void *)*((_QWORD *)this + 7);
  v4 = 4096LL;
  MmRotatePhysicalView(v2, &v4, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
  v5 = 4096LL;
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  (*((void (__fastcall **)(__int64, _QWORD *, __int64 *, __int64))VirtualMemoryInterface + 2))(-1LL, v1, &v5, 0x8000LL);
  *v1 = 0LL;
}

char __fastcall UmfdUMBuffer::AllocTemporaryBuffer(UmfdUMBuffer *this, __int64 a2)
{
  void *v2; // rax
  ULONG_PTR v3; // rdi
  ULONG_PTR v6; // rax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID v8; // [rsp+60h] [rbp+20h] BYREF
  ULONG_PTR v9; // [rsp+70h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+38h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  v3 = (unsigned int)a2;
  if ( v2 )
  {
    if ( (unsigned int)a2 <= *((_DWORD *)this + 4) )
      return 1;
    RegionSize = 0LL;
    BaseAddress[0] = v2;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
    *((_QWORD *)this + 1) = 0LL;
    *((_DWORD *)this + 4) = 0;
  }
  LODWORD(v8) = 0;
  if ( UmfdUMBuffer::AlignSizeTo(v3, a2, (unsigned int *)&v8) )
  {
    v6 = (unsigned int)v8;
    v8 = 0LL;
    v9 = v6;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v8, 0LL, &v9, 0x3000u, 4u) >= 0 )
    {
      if ( v9 >= v3 )
      {
        if ( v9 <= 0xFFFFFFFF )
        {
          *((_DWORD *)this + 4) = v9;
          *((_QWORD *)this + 1) = v8;
          return 1;
        }
        *((_DWORD *)this + 4) = -1;
      }
      RegionSize = 0LL;
      BaseAddress[0] = v8;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
    }
  }
  return 0;
}

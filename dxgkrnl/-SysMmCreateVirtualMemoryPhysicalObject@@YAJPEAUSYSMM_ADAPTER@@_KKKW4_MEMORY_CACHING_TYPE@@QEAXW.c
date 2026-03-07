__int64 __fastcall SysMmCreateVirtualMemoryPhysicalObject(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdi
  __int64 result; // rax
  int v13; // r13d
  __int64 v14; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v16; // eax
  _QWORD *v17; // r14
  int PhysicalObject; // ebp
  _QWORD *v19; // r15
  __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  PVOID v21; // [rsp+58h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+10h] BYREF

  v9 = a4;
  if ( (a2 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL, a2);
    return 3221225485LL;
  }
  BaseAddress = 0LL;
  v14 = a3;
  v13 = a5;
  LODWORD(v14) = a3 | 0x400;
  v20 = a2;
  if ( a5 != 2 )
    v14 = a3;
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v16 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, __int64 *, _DWORD, _DWORD))VirtualMemoryInterface)(
          -1LL,
          &BaseAddress,
          0LL,
          &v20,
          v9,
          v14);
  v17 = (_QWORD *)a9;
  PhysicalObject = v16;
  v19 = (_QWORD *)a8;
  if ( v16 >= 0 )
  {
    v21 = BaseAddress;
    PhysicalObject = SmmCreatePhysicalObject(a1, 4, v20, (int)&v21, v13, 0, a6, 9, (ULONG_PTR **)a8, (ULONG_PTR **)a9);
    if ( PhysicalObject >= 0 )
      return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C013BD20);
    WdLogSingleEntry3(6LL, a2, v9, (unsigned int)v14);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory from ZwAllocateVirtualMemory, Size=%I64u, AllocationType=%u, Protect=%u",
      a2,
      v9,
      v14,
      0LL,
      0LL);
  }
  if ( BaseAddress )
    MmFreeContiguousMemory(BaseAddress);
  *v19 = 0LL;
  result = (unsigned int)PhysicalObject;
  *v17 = 0LL;
  return result;
}

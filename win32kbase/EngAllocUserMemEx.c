__int64 __fastcall EngAllocUserMemEx(ULONG_PTR a1, int a2, PVOID *a3)
{
  NTSTATUS v5; // edi
  __int64 v6; // rcx
  HANDLE v7; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rsi
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+30h] BYREF
  int NewElement; // [rsp+88h] [rbp+38h] BYREF
  char v13; // [rsp+90h] [rbp+40h] BYREF

  NewElement = a2;
  RegionSize = a1;
  *a3 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v5 >= 0 )
  {
    v7 = MmSecureVirtualMemory(*a3, RegionSize, 4u);
    if ( v7 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      v9 = CurrentProcessWin32Process;
      if ( !CurrentProcessWin32Process || !*(_QWORD *)CurrentProcessWin32Process )
      {
        MmUnsecureVirtualMemory(v7);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
        *a3 = 0LL;
        return 3221225473LL;
      }
      Buffer[0] = *a3;
      Buffer[1] = RegionSize;
      LOBYTE(NewElement) = 0;
      Buffer[2] = v7;
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v13, (struct _EX_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
      if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v9 + 88), Buffer, 0x18u, (PBOOLEAN)&NewElement)
        || !(_BYTE)NewElement )
      {
        MmUnsecureVirtualMemory(v7);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
        *a3 = 0LL;
        v5 = -1073741801;
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v13);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      *a3 = 0LL;
      return (unsigned int)-2143354876;
    }
  }
  return (unsigned int)v5;
}

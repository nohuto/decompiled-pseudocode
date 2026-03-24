/*
 * XREFs of EngAllocUserMemEx @ 0x1C00ADA68
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00267F0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngAllocUserMem @ 0x1C00ADA40 (EngAllocUserMem.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0045F3C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0045F70 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C00C9874 (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     GrepSecureVirtualMemory @ 0x1C00CB2F0 (GrepSecureVirtualMemory.c)
 */

__int64 __fastcall EngAllocUserMemEx(ULONG_PTR a1, int a2, PVOID *a3)
{
  NTSTATUS v5; // esi
  int IsEnabledDeviceUsage; // eax
  PVOID v7; // rcx
  HANDLE v8; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // r14
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+30h] BYREF
  int NewElement; // [rsp+88h] [rbp+38h] BYREF
  char v16; // [rsp+90h] [rbp+40h] BYREF

  NewElement = a2;
  RegionSize = a1;
  *a3 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v5 >= 0 )
  {
    IsEnabledDeviceUsage = Feature_2249667896__private_IsEnabledDeviceUsage();
    v7 = *a3;
    if ( IsEnabledDeviceUsage )
      v8 = (HANDLE)GrepSecureVirtualMemory(v7, RegionSize, 4LL);
    else
      v8 = MmSecureVirtualMemory(v7, RegionSize, 4u);
    v10 = v8;
    if ( v8 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      v12 = CurrentProcessWin32Process;
      if ( !CurrentProcessWin32Process )
      {
        Feature_2249667896__private_IsEnabledDeviceUsage();
        MmUnsecureVirtualMemory(v10);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
        *a3 = 0LL;
        return 3221225473LL;
      }
      Buffer[0] = *a3;
      Buffer[1] = RegionSize;
      LOBYTE(NewElement) = 0;
      Buffer[2] = v10;
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v16, (struct _EX_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
      if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v12 + 88), Buffer, 0x18u, (PBOOLEAN)&NewElement)
        || !(_BYTE)NewElement )
      {
        Feature_2249667896__private_IsEnabledDeviceUsage();
        MmUnsecureVirtualMemory(v10);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
        *a3 = 0LL;
        v5 = -1073741801;
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v16);
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

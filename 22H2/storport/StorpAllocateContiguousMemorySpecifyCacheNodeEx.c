/*
 * XREFs of StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C003ABE4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F680 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 */

__int64 StorpAllocateContiguousMemorySpecifyCacheNodeEx(__int64 a1, __int64 a2, ...)
{
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 *v5; // rbx
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF
  va_list va1; // [rsp+78h] [rbp+20h]
  __int64 v13; // [rsp+80h] [rbp+28h]
  __int64 v14; // [rsp+88h] [rbp+30h] BYREF
  va_list va2; // [rsp+88h] [rbp+30h]
  __int64 v16; // [rsp+90h] [rbp+38h]
  __int64 *v17; // [rsp+98h] [rbp+40h]
  PHYSICAL_ADDRESS *v18; // [rsp+A0h] [rbp+48h]
  va_list va3; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  v16 = va_arg(va3, _QWORD);
  v17 = va_arg(va3, __int64 *);
  v18 = va_arg(va3, PHYSICAL_ADDRESS *);
  v2 = 4;
  v3 = **(_QWORD **)(a1 - 16);
  if ( (_DWORD)v14 != 1 )
  {
    v2 = 516;
    if ( (_DWORD)v14 == 2 )
      v2 = 1028;
  }
  if ( *(_BYTE *)(v3 + 736) && *(_DWORD *)(v3 + 756) == 3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *, _QWORD, _DWORD, __int64 *, _DWORD, PHYSICAL_ADDRESS *))(*(_QWORD *)(*(_QWORD *)(v3 + 728) + 8LL) + 272LL))(
           *(_QWORD *)(v3 + 728),
           (__int64 *)va,
           (__int64 *)va1,
           (unsigned int)a2,
           0,
           (__int64 *)va2,
           v16,
           v18);
    v5 = v17;
    *v17 = v4;
  }
  else
  {
    ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(a2, v9, v11, v13, v2, v16);
    v5 = v17;
    *v17 = (__int64)ContiguousNodeMemory;
    if ( ContiguousNodeMemory )
    {
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
      *v18 = PhysicalAddress;
    }
  }
  return *v5 == 0 ? 0xC1000003 : 0;
}

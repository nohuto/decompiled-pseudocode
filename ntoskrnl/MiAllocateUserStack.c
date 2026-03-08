/*
 * XREFs of MiAllocateUserStack @ 0x14077B2C0
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x1407C4A70 (MiAllocateVirtualMemoryCommon.c)
 * Callees:
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 */

__int64 __fastcall MiAllocateUserStack(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  bool v3; // zf
  _DWORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)(a1 + 72);
  v3 = (*(_DWORD *)(a1 + 64) & 0x40000000) == 0;
  v4 = (_DWORD *)(a1 + 68);
  v6 = 0LL;
  if ( !v3 )
  {
    *v4 = 536870913;
    *v2 = &v6;
  }
  result = MiAllocateVirtualMemory(a1, 0LL, a2);
  *v2 = 0LL;
  *v4 = 0;
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

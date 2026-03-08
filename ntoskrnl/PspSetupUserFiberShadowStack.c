/*
 * XREFs of PspSetupUserFiberShadowStack @ 0x1409AEA90
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409AE7B0 (PspReserveAndCommitUserShadowStack.c)
 */

__int64 __fastcall PspSetupUserFiberShadowStack(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3, _QWORD *a4)
{
  int v4; // ebx
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v10 = 0LL;
  v4 = PspReserveAndCommitUserShadowStack(a1, a2, a3, &v10, v11);
  if ( v4 >= 0 )
  {
    _RCX = v11[0] - 8;
    _RAX = qword_140D1F338;
    __asm { wrussq  qword ptr [rcx], rax }
    _RDX = v11[0] - 16;
    *a4 = v11[0] - 16;
    _RCX = _RCX & 0xFFFFFFFFFFFFFFFCuLL | 1;
    __asm { wrussq  qword ptr [rdx], rcx }
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11[0] = 0LL;
    MmFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (unsigned __int64 *)&v10, v11, 0x8000, 0, 0x40000000);
    *a4 = 0LL;
  }
  return (unsigned int)v4;
}

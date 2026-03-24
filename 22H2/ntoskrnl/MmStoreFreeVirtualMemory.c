/*
 * XREFs of MmStoreFreeVirtualMemory @ 0x1406A1BF0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140312750 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     MiFreeVadRange @ 0x140298C44 (MiFreeVadRange.c)
 *     MiUnlockPageTableRange @ 0x14032A12C (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MmStoreFreeVirtualMemory(unsigned __int64 a1)
{
  volatile signed __int32 *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // r8
  _DWORD *v6; // r9
  _KPROCESS *Process; // rax
  char v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF

  v2 = MiObtainReferencedVadEx(a1, 0, &v10);
  v3 = *((unsigned int *)v2 + 7) | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32);
  v4 = *((unsigned int *)v2 + 6) | ((unsigned __int64)*((unsigned __int8 *)v2 + 32) << 32);
  MiUnlockPageTableRange(a1, (v3 << 12) | 0xFFF, v5, v6);
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = 0;
  return MiFreeVadRange((ULONG_PTR)v2, (int)&v9, v4, v3, (__int64)Process, 0);
}

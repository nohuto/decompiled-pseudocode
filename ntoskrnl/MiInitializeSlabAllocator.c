/*
 * XREFs of MiInitializeSlabAllocator @ 0x14039425C
 * Callers:
 *     MiInitializeNuma @ 0x140394008 (MiInitializeNuma.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void (__fastcall *__fastcall MiInitializeSlabAllocator(__int64 a1, int a2, int a3, __int64 a4))(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  memset((void *)a1, 0, 0x108uLL);
  *(_QWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 80) = a2;
  *(_QWORD *)(a1 + 128) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(a1 + 136) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(a1 + 256) = a1 + 248;
  *(_QWORD *)(a1 + 248) = a1 + 248;
  result = MiReplenishSlabAllocatorWorker;
  *(_DWORD *)(a1 + 84) = a3;
  *(_DWORD *)(a1 + 120) = 2;
  *(_DWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 232) = MiReplenishSlabAllocatorWorker;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  if ( a2 == 6 )
  {
    *(_DWORD *)(a1 + 88) |= 4u;
    *(_QWORD *)(a1 + 56) = 512LL;
  }
  return result;
}

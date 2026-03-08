/*
 * XREFs of MiBuildDynamicRegion @ 0x1403715AC
 * Callers:
 *     MiBuildPagedPool @ 0x140B38784 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B391FC (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 *     MiInitializeKernelStacks @ 0x140B3B3A4 (MiInitializeKernelStacks.c)
 *     MiInitializeNonPagedPool @ 0x140B5EDA4 (MiInitializeNonPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140B6B4DC (MiInitializeDynamicRegion.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 */

ULONG_PTR __fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  ULONG_PTR result; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rdx

  if ( a1 == &qword_140C66B40 )
    qword_140C66988 = a3;
  a1[8] = 0LL;
  a1[4] = a2;
  v4 = a3 >> 21;
  v5 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v5;
  if ( a1 == &qword_140C66A20 )
    a1[3] = v5 & 0xFFF;
  a1[2] = v4;
  if ( a1 == &qword_140C66A20 && (v11 = a1[1]) != 0 )
  {
    v9 = 0LL;
    v8 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v6 = 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0));
    result = MiReservePtes((__int64)&qword_140C695C0, (unsigned int)(v6 >> 12) + ((v6 & 0xFFF) != 0));
    v8 = result;
    if ( !result )
      return result;
    v9 = 1LL;
  }
  MiInitializeDynamicBitmap(a1, v8 << 25 >> 16, v4, v9);
  *a1 = 0LL;
  v10 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v10;
  if ( a1 == &qword_140C66A20 )
    a1[3] = v10 & 0xFFF;
  return 1LL;
}

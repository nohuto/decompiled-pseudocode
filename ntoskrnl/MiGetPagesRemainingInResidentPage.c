/*
 * XREFs of MiGetPagesRemainingInResidentPage @ 0x14064CC94
 * Callers:
 *     MiAddPhysicalPagesToCrashDump @ 0x14062D30C (MiAddPhysicalPagesToCrashDump.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14034D770 (MiGetPfnPageSizeIndex.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14035094C (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x14064CC14 (MiGetBaseResidentPageForBugCheck.c)
 */

unsigned __int64 __fastcall MiGetPagesRemainingInResidentPage(__int64 a1, int *a2, int *a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx
  int PfnPageSizeIndex; // eax
  int v10; // ecx
  int v11; // ebx
  __int64 v12; // rdx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0;
  v15 = 0;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( (KiBugCheckActive & 3) != 0 )
  {
    v7 = MiGetBaseResidentPageForBugCheck(a1);
    if ( v7 )
    {
      v8 = *(unsigned __int8 *)(v7 + 34);
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(v7);
    }
    else
    {
      v8 = *(unsigned __int8 *)(a1 + 34);
      PfnPageSizeIndex = 3;
    }
    v10 = v8 >> 6;
    v11 = v8 & 7;
  }
  else
  {
    PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a1, &v14, &v15);
    v10 = v15;
    v11 = v14;
  }
  if ( PfnPageSizeIndex == 3 )
    v12 = 1LL;
  else
    v12 = MiLargePageSizes[PfnPageSizeIndex];
  *a2 = v11;
  *a3 = v10;
  return v12 + (v6 & ~(v12 - 1)) - v6;
}

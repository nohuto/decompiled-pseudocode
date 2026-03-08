/*
 * XREFs of MiInitializeDpcGang @ 0x140386740
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x1403863B4 (MiAllocateFastLargePagesForMdl.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiComputeIdealDpcGang @ 0x1403867CC (MiComputeIdealDpcGang.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

PVOID __fastcall MiInitializeDpcGang(_DWORD *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  PVOID result; // rax
  unsigned int v8; // ebx
  _QWORD *v9; // r14

  memset(a1, 0, 0x168uLL);
  result = (PVOID)MiComputeIdealDpcGang(a1, a2, a4);
  v8 = (unsigned int)result;
  if ( (a4 & 1) != 0 )
  {
    a1[46] |= 1u;
    v9 = a1 + 4;
    if ( (unsigned int)result > 8 )
    {
      result = MiAllocatePool(64, 16LL * (unsigned int)result, 0x6544694Du);
      *v9 = result;
    }
    if ( !*v9 )
    {
      result = a1 + 6;
LABEL_6:
      *v9 = result;
      if ( v8 > 8 )
        v8 = 8;
    }
  }
  else
  {
    v9 = a1 + 2;
    if ( (unsigned int)result > 8 )
    {
      result = MiAllocatePool(64, 8LL * (unsigned int)result, 0x6544694Du);
      *v9 = result;
    }
    if ( !*v9 )
    {
      result = a1 + 4;
      goto LABEL_6;
    }
  }
  a1[47] = v8;
  return result;
}

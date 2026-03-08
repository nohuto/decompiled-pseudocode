/*
 * XREFs of PfTLbInitialize @ 0x1407E5A08
 * Callers:
 *     PfTFreeBufferList @ 0x1407E5940 (PfTFreeBufferList.c)
 *     PfTAllocateBuffers @ 0x140844D98 (PfTAllocateBuffers.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PfTLbInitialize(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    memset(a1 + 3, 0, a2 - 24LL);
  }
  else
  {
    memset(a1, 0, a2);
    a1[1] = a1;
    *a1 = a1;
  }
  *((_DWORD *)a1 + 4) = 0;
  result = (a2 - 24) >> 4;
  *((_DWORD *)a1 + 5) = result;
  return result;
}
